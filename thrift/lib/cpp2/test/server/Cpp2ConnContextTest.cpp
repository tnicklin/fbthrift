/*
 * Copyright 2004-present Facebook, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <gtest/gtest.h>

#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>

using namespace ::testing;
using namespace apache::thrift;

namespace {
std::pair<int, int> createSocketPair() {
  std::array<int, 2> sockets;
  int rc = socketpair(AF_UNIX, SOCK_STREAM, 0, sockets.data());
  folly::checkUnixError(rc, "socketpair failed");
  return std::make_pair(sockets[0], sockets[1]);
}
} // namespace

TEST(Cpp2ConnContextTest, pid_and_uid_start_uninitialized) {
  Cpp2ConnContext ctx;
  EXPECT_EQ(folly::none, ctx.getPeerEffectivePid());
  EXPECT_EQ(folly::none, ctx.getPeerEffectiveUid());
}

TEST(Cpp2ConnContextTest, getPeerCredentials) {
  auto sockets = createSocketPair();
  folly::EventBase evb;
  auto socket1 =
      folly::AsyncSocket::newSocket(&evb, folly::NetworkSocket{sockets.first});
  auto socket2 =
      folly::AsyncSocket::newSocket(&evb, folly::NetworkSocket{sockets.second});
  Cpp2ConnContext ctx(/*address=*/nullptr, /*transport=*/socket1.get());
  EXPECT_EQ(getpid(), ctx.getPeerEffectivePid());
  EXPECT_EQ(geteuid(), ctx.getPeerEffectiveUid());
}
