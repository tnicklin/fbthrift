// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module1 // [[[ program thrift source path ]]]


import (
    "context"
    "fmt"
    "strings"
    "sync"

    module0 "module0"

    "thrift/lib/go/thrift"
)

var _ = module0.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = context.Background
var _ = fmt.Printf
var _ = thrift.ZERO
var _ = strings.Split
var _ = sync.Mutex{}



type Finder interface {
    ByPlate(ctx context.Context, plate Plate) (*Automobile, error)
    AliasByPlate(ctx context.Context, plate Plate) (*Car, error)
    PreviousPlate(ctx context.Context, plate Plate) (Plate, error)
}

// Deprecated: Use Finder instead.
type FinderClientInterface interface {
    thrift.ClientInterface
    ByPlate(plate Plate) (*Automobile, error)
    AliasByPlate(plate Plate) (*Car, error)
    PreviousPlate(plate Plate) (Plate, error)
}

type FinderChannelClient struct {
    ch thrift.RequestChannel
}
// Compile time interface enforcer
var _ Finder = &FinderChannelClient{}

func NewFinderChannelClient(channel thrift.RequestChannel) *FinderChannelClient {
    return &FinderChannelClient{
        ch: channel,
    }
}

func (c *FinderChannelClient) Close() error {
    return c.ch.Close()
}

func (c *FinderChannelClient) IsOpen() bool {
    return c.ch.IsOpen()
}

func (c *FinderChannelClient) Open() error {
    return c.ch.Open()
}

// Deprecated: Use FinderChannelClient instead.
type FinderClient struct {
    chClient *FinderChannelClient
    Mu       sync.Mutex
}
// Compile time interface enforcer
var _ FinderClientInterface = &FinderClient{}

// Deprecated: Use NewFinderChannelClient() instead.
func NewFinderClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *FinderClient {
    return &FinderClient{
        chClient: NewFinderChannelClient(
            thrift.NewSerialChannel(iprot),
        ),
    }
}

func (c *FinderClient) Close() error {
    return c.chClient.Close()
}

func (c *FinderClient) IsOpen() bool {
    return c.chClient.IsOpen()
}

func (c *FinderClient) Open() error {
    return c.chClient.Open()
}

// Deprecated: Use FinderChannelClient instead.
type FinderThreadsafeClient = FinderClient

// Deprecated: Use NewFinderChannelClient() instead.
func NewFinderThreadsafeClient(t thrift.Transport, iprot thrift.Protocol, oprot thrift.Protocol) *FinderThreadsafeClient {
    return NewFinderClient(t, iprot, oprot)
}

// Deprecated: Use NewFinderChannelClient() instead.
func NewFinderClientProtocol(prot thrift.Protocol) *FinderClient {
  return NewFinderClient(prot.Transport(), prot, prot)
}

// Deprecated: Use NewFinderChannelClient() instead.
func NewFinderThreadsafeClientProtocol(prot thrift.Protocol) *FinderClient {
  return NewFinderClient(prot.Transport(), prot, prot)
}

// Deprecated: Use NewFinderChannelClient() instead.
func NewFinderClientFactory(t thrift.Transport, pf thrift.ProtocolFactory) *FinderClient {
  iprot := pf.GetProtocol(t)
  oprot := pf.GetProtocol(t)
  return NewFinderClient(t, iprot, oprot)
}

// Deprecated: Use NewFinderChannelClient() instead.
func NewFinderThreadsafeClientFactory(t thrift.Transport, pf thrift.ProtocolFactory) *FinderThreadsafeClient {
  return NewFinderClientFactory(t, pf)
}


func (c *FinderChannelClient) ByPlate(ctx context.Context, plate Plate) (*Automobile, error) {
    in := &reqFinderByPlate{
        Plate: plate,
    }
    out := newRespFinderByPlate()
    err := c.ch.Call(ctx, "byPlate", in, out)
    if err != nil {
        return nil, err
    }
    return out.Success, nil
}

func (c *FinderClient) ByPlate(plate Plate) (*Automobile, error) {
    return c.chClient.ByPlate(nil, plate)
}


func (c *FinderChannelClient) AliasByPlate(ctx context.Context, plate Plate) (*Car, error) {
    in := &reqFinderAliasByPlate{
        Plate: plate,
    }
    out := newRespFinderAliasByPlate()
    err := c.ch.Call(ctx, "aliasByPlate", in, out)
    if err != nil {
        return nil, err
    }
    return out.Success, nil
}

func (c *FinderClient) AliasByPlate(plate Plate) (*Car, error) {
    return c.chClient.AliasByPlate(nil, plate)
}


func (c *FinderChannelClient) PreviousPlate(ctx context.Context, plate Plate) (Plate, error) {
    in := &reqFinderPreviousPlate{
        Plate: plate,
    }
    out := newRespFinderPreviousPlate()
    err := c.ch.Call(ctx, "previousPlate", in, out)
    if err != nil {
        return "", err
    }
    return out.Success, nil
}

func (c *FinderClient) PreviousPlate(plate Plate) (Plate, error) {
    return c.chClient.PreviousPlate(nil, plate)
}


type reqFinderByPlate struct {
    Plate Plate `thrift:"plate,1" json:"plate" db:"plate"`
}
// Compile time interface enforcer
var _ thrift.Struct = &reqFinderByPlate{}

type FinderByPlateArgs = reqFinderByPlate

func newReqFinderByPlate() *reqFinderByPlate {
    return (&reqFinderByPlate{}).
        SetPlateNonCompat(NewPlate())
}

func (x *reqFinderByPlate) GetPlateNonCompat() Plate {
    return x.Plate
}

func (x *reqFinderByPlate) GetPlate() Plate {
    return x.Plate
}

func (x *reqFinderByPlate) SetPlateNonCompat(value Plate) *reqFinderByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderByPlate) SetPlate(value Plate) *reqFinderByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderByPlate) writeField1(p thrift.Protocol) error {  // Plate
    if err := p.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetPlateNonCompat()
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqFinderByPlate) readField1(p thrift.Protocol) error {  // Plate
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.SetPlateNonCompat(result)
    return nil
}

func (x *reqFinderByPlate) toString1() string {  // Plate
    return fmt.Sprintf("%v", x.GetPlateNonCompat())
}


// Deprecated: Use reqFinderByPlate.Set* methods instead or set the fields directly.
type reqFinderByPlateBuilder struct {
    obj *reqFinderByPlate
}

func newReqFinderByPlateBuilder() *reqFinderByPlateBuilder {
    return &reqFinderByPlateBuilder{
        obj: newReqFinderByPlate(),
    }
}

func (x *reqFinderByPlateBuilder) Plate(value Plate) *reqFinderByPlateBuilder {
    x.obj.Plate = value
    return x
}

func (x *reqFinderByPlateBuilder) Emit() *reqFinderByPlate {
    var objCopy reqFinderByPlate = *x.obj
    return &objCopy
}

func (x *reqFinderByPlate) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("reqFinderByPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *reqFinderByPlate) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // plate
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField1(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *reqFinderByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqFinderByPlate({")
    sb.WriteString(fmt.Sprintf("Plate:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
type respFinderByPlate struct {
    Success *Automobile `thrift:"success,0" json:"success" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = &respFinderByPlate{}
var _ thrift.WritableResult = &respFinderByPlate{}

type FinderByPlateResult = respFinderByPlate

func newRespFinderByPlate() *respFinderByPlate {
    return (&respFinderByPlate{}).
        SetSuccessNonCompat(*NewAutomobile())
}

func (x *respFinderByPlate) GetSuccessNonCompat() *Automobile {
    return x.Success
}

func (x *respFinderByPlate) GetSuccess() *Automobile {
    if !x.IsSetSuccess() {
        return nil
    }

    return x.Success
}

func (x *respFinderByPlate) SetSuccessNonCompat(value Automobile) *respFinderByPlate {
    x.Success = &value
    return x
}

func (x *respFinderByPlate) SetSuccess(value *Automobile) *respFinderByPlate {
    x.Success = value
    return x
}

func (x *respFinderByPlate) IsSetSuccess() bool {
    return x != nil && x.Success != nil
}

func (x *respFinderByPlate) writeField0(p thrift.Protocol) error {  // Success
    if !x.IsSetSuccess() {
        return nil
    }

    if err := p.WriteFieldBegin("success", thrift.STRUCT, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetSuccessNonCompat()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respFinderByPlate) readField0(p thrift.Protocol) error {  // Success
    result := *NewAutomobile()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetSuccessNonCompat(result)
    return nil
}

func (x *respFinderByPlate) toString0() string {  // Success
    return fmt.Sprintf("%v", x.GetSuccessNonCompat())
}

// Deprecated: Use newRespFinderByPlate().GetSuccess() instead.
var FinderByPlateResult_Success_DEFAULT = newRespFinderByPlate().GetSuccess()

// Deprecated: Use newRespFinderByPlate().GetSuccess() instead.
func (x *respFinderByPlate) DefaultGetSuccess() *Automobile {
    if !x.IsSetSuccess() {
        return NewAutomobile()
    }
    return x.Success
}


// Deprecated: Use respFinderByPlate.Set* methods instead or set the fields directly.
type respFinderByPlateBuilder struct {
    obj *respFinderByPlate
}

func newRespFinderByPlateBuilder() *respFinderByPlateBuilder {
    return &respFinderByPlateBuilder{
        obj: newRespFinderByPlate(),
    }
}

func (x *respFinderByPlateBuilder) Success(value *Automobile) *respFinderByPlateBuilder {
    x.obj.Success = value
    return x
}

func (x *respFinderByPlateBuilder) Emit() *respFinderByPlate {
    var objCopy respFinderByPlate = *x.obj
    return &objCopy
}

func (x *respFinderByPlate) Exception() thrift.WritableException {
    return nil
}

func (x *respFinderByPlate) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("respFinderByPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respFinderByPlate) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 0:  // success
            expectedType := thrift.Type(thrift.STRUCT)
            if wireType == expectedType {
                if err := x.readField0(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *respFinderByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respFinderByPlate({")
    sb.WriteString(fmt.Sprintf("Success:%s", x.toString0()))
    sb.WriteString("})")

    return sb.String()
}
type reqFinderAliasByPlate struct {
    Plate Plate `thrift:"plate,1" json:"plate" db:"plate"`
}
// Compile time interface enforcer
var _ thrift.Struct = &reqFinderAliasByPlate{}

type FinderAliasByPlateArgs = reqFinderAliasByPlate

func newReqFinderAliasByPlate() *reqFinderAliasByPlate {
    return (&reqFinderAliasByPlate{}).
        SetPlateNonCompat(NewPlate())
}

func (x *reqFinderAliasByPlate) GetPlateNonCompat() Plate {
    return x.Plate
}

func (x *reqFinderAliasByPlate) GetPlate() Plate {
    return x.Plate
}

func (x *reqFinderAliasByPlate) SetPlateNonCompat(value Plate) *reqFinderAliasByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderAliasByPlate) SetPlate(value Plate) *reqFinderAliasByPlate {
    x.Plate = value
    return x
}

func (x *reqFinderAliasByPlate) writeField1(p thrift.Protocol) error {  // Plate
    if err := p.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetPlateNonCompat()
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqFinderAliasByPlate) readField1(p thrift.Protocol) error {  // Plate
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.SetPlateNonCompat(result)
    return nil
}

func (x *reqFinderAliasByPlate) toString1() string {  // Plate
    return fmt.Sprintf("%v", x.GetPlateNonCompat())
}


// Deprecated: Use reqFinderAliasByPlate.Set* methods instead or set the fields directly.
type reqFinderAliasByPlateBuilder struct {
    obj *reqFinderAliasByPlate
}

func newReqFinderAliasByPlateBuilder() *reqFinderAliasByPlateBuilder {
    return &reqFinderAliasByPlateBuilder{
        obj: newReqFinderAliasByPlate(),
    }
}

func (x *reqFinderAliasByPlateBuilder) Plate(value Plate) *reqFinderAliasByPlateBuilder {
    x.obj.Plate = value
    return x
}

func (x *reqFinderAliasByPlateBuilder) Emit() *reqFinderAliasByPlate {
    var objCopy reqFinderAliasByPlate = *x.obj
    return &objCopy
}

func (x *reqFinderAliasByPlate) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("reqFinderAliasByPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *reqFinderAliasByPlate) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // plate
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField1(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *reqFinderAliasByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqFinderAliasByPlate({")
    sb.WriteString(fmt.Sprintf("Plate:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
type respFinderAliasByPlate struct {
    Success *Car `thrift:"success,0" json:"success" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = &respFinderAliasByPlate{}
var _ thrift.WritableResult = &respFinderAliasByPlate{}

type FinderAliasByPlateResult = respFinderAliasByPlate

func newRespFinderAliasByPlate() *respFinderAliasByPlate {
    return (&respFinderAliasByPlate{}).
        SetSuccessNonCompat(*NewCar())
}

func (x *respFinderAliasByPlate) GetSuccessNonCompat() *Car {
    return x.Success
}

func (x *respFinderAliasByPlate) GetSuccess() *Car {
    if !x.IsSetSuccess() {
        return nil
    }

    return x.Success
}

func (x *respFinderAliasByPlate) SetSuccessNonCompat(value Car) *respFinderAliasByPlate {
    x.Success = &value
    return x
}

func (x *respFinderAliasByPlate) SetSuccess(value *Car) *respFinderAliasByPlate {
    x.Success = value
    return x
}

func (x *respFinderAliasByPlate) IsSetSuccess() bool {
    return x != nil && x.Success != nil
}

func (x *respFinderAliasByPlate) writeField0(p thrift.Protocol) error {  // Success
    if !x.IsSetSuccess() {
        return nil
    }

    if err := p.WriteFieldBegin("success", thrift.STRUCT, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetSuccessNonCompat()
    err := WriteCar(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respFinderAliasByPlate) readField0(p thrift.Protocol) error {  // Success
    result, err := ReadCar(p)
if err != nil {
    return err
}

    x.SetSuccessNonCompat(result)
    return nil
}

func (x *respFinderAliasByPlate) toString0() string {  // Success
    return fmt.Sprintf("%v", x.GetSuccessNonCompat())
}

// Deprecated: Use newRespFinderAliasByPlate().GetSuccess() instead.
var FinderAliasByPlateResult_Success_DEFAULT = newRespFinderAliasByPlate().GetSuccess()

// Deprecated: Use newRespFinderAliasByPlate().GetSuccess() instead.
func (x *respFinderAliasByPlate) DefaultGetSuccess() *Car {
    if !x.IsSetSuccess() {
        return NewCar()
    }
    return x.Success
}


// Deprecated: Use respFinderAliasByPlate.Set* methods instead or set the fields directly.
type respFinderAliasByPlateBuilder struct {
    obj *respFinderAliasByPlate
}

func newRespFinderAliasByPlateBuilder() *respFinderAliasByPlateBuilder {
    return &respFinderAliasByPlateBuilder{
        obj: newRespFinderAliasByPlate(),
    }
}

func (x *respFinderAliasByPlateBuilder) Success(value *Car) *respFinderAliasByPlateBuilder {
    x.obj.Success = value
    return x
}

func (x *respFinderAliasByPlateBuilder) Emit() *respFinderAliasByPlate {
    var objCopy respFinderAliasByPlate = *x.obj
    return &objCopy
}

func (x *respFinderAliasByPlate) Exception() thrift.WritableException {
    return nil
}

func (x *respFinderAliasByPlate) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("respFinderAliasByPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respFinderAliasByPlate) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 0:  // success
            expectedType := thrift.Type(thrift.STRUCT)
            if wireType == expectedType {
                if err := x.readField0(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *respFinderAliasByPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respFinderAliasByPlate({")
    sb.WriteString(fmt.Sprintf("Success:%s", x.toString0()))
    sb.WriteString("})")

    return sb.String()
}
type reqFinderPreviousPlate struct {
    Plate Plate `thrift:"plate,1" json:"plate" db:"plate"`
}
// Compile time interface enforcer
var _ thrift.Struct = &reqFinderPreviousPlate{}

type FinderPreviousPlateArgs = reqFinderPreviousPlate

func newReqFinderPreviousPlate() *reqFinderPreviousPlate {
    return (&reqFinderPreviousPlate{}).
        SetPlateNonCompat(NewPlate())
}

func (x *reqFinderPreviousPlate) GetPlateNonCompat() Plate {
    return x.Plate
}

func (x *reqFinderPreviousPlate) GetPlate() Plate {
    return x.Plate
}

func (x *reqFinderPreviousPlate) SetPlateNonCompat(value Plate) *reqFinderPreviousPlate {
    x.Plate = value
    return x
}

func (x *reqFinderPreviousPlate) SetPlate(value Plate) *reqFinderPreviousPlate {
    x.Plate = value
    return x
}

func (x *reqFinderPreviousPlate) writeField1(p thrift.Protocol) error {  // Plate
    if err := p.WriteFieldBegin("plate", thrift.STRING, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetPlateNonCompat()
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *reqFinderPreviousPlate) readField1(p thrift.Protocol) error {  // Plate
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.SetPlateNonCompat(result)
    return nil
}

func (x *reqFinderPreviousPlate) toString1() string {  // Plate
    return fmt.Sprintf("%v", x.GetPlateNonCompat())
}


// Deprecated: Use reqFinderPreviousPlate.Set* methods instead or set the fields directly.
type reqFinderPreviousPlateBuilder struct {
    obj *reqFinderPreviousPlate
}

func newReqFinderPreviousPlateBuilder() *reqFinderPreviousPlateBuilder {
    return &reqFinderPreviousPlateBuilder{
        obj: newReqFinderPreviousPlate(),
    }
}

func (x *reqFinderPreviousPlateBuilder) Plate(value Plate) *reqFinderPreviousPlateBuilder {
    x.obj.Plate = value
    return x
}

func (x *reqFinderPreviousPlateBuilder) Emit() *reqFinderPreviousPlate {
    var objCopy reqFinderPreviousPlate = *x.obj
    return &objCopy
}

func (x *reqFinderPreviousPlate) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("reqFinderPreviousPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *reqFinderPreviousPlate) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // plate
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField1(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *reqFinderPreviousPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("reqFinderPreviousPlate({")
    sb.WriteString(fmt.Sprintf("Plate:%s", x.toString1()))
    sb.WriteString("})")

    return sb.String()
}
type respFinderPreviousPlate struct {
    Success Plate `thrift:"success,0" json:"success" db:"success"`
}
// Compile time interface enforcer
var _ thrift.Struct = &respFinderPreviousPlate{}
var _ thrift.WritableResult = &respFinderPreviousPlate{}

type FinderPreviousPlateResult = respFinderPreviousPlate

func newRespFinderPreviousPlate() *respFinderPreviousPlate {
    return (&respFinderPreviousPlate{}).
        SetSuccessNonCompat(NewPlate())
}

func (x *respFinderPreviousPlate) GetSuccessNonCompat() Plate {
    return x.Success
}

func (x *respFinderPreviousPlate) GetSuccess() Plate {
    return x.Success
}

func (x *respFinderPreviousPlate) SetSuccessNonCompat(value Plate) *respFinderPreviousPlate {
    x.Success = value
    return x
}

func (x *respFinderPreviousPlate) SetSuccess(value Plate) *respFinderPreviousPlate {
    x.Success = value
    return x
}

func (x *respFinderPreviousPlate) writeField0(p thrift.Protocol) error {  // Success
    if err := p.WriteFieldBegin("success", thrift.STRING, 0); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetSuccessNonCompat()
    err := WritePlate(item, p)
if err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *respFinderPreviousPlate) readField0(p thrift.Protocol) error {  // Success
    result, err := ReadPlate(p)
if err != nil {
    return err
}

    x.SetSuccessNonCompat(result)
    return nil
}

func (x *respFinderPreviousPlate) toString0() string {  // Success
    return fmt.Sprintf("%v", x.GetSuccessNonCompat())
}


// Deprecated: Use respFinderPreviousPlate.Set* methods instead or set the fields directly.
type respFinderPreviousPlateBuilder struct {
    obj *respFinderPreviousPlate
}

func newRespFinderPreviousPlateBuilder() *respFinderPreviousPlateBuilder {
    return &respFinderPreviousPlateBuilder{
        obj: newRespFinderPreviousPlate(),
    }
}

func (x *respFinderPreviousPlateBuilder) Success(value Plate) *respFinderPreviousPlateBuilder {
    x.obj.Success = value
    return x
}

func (x *respFinderPreviousPlateBuilder) Emit() *respFinderPreviousPlate {
    var objCopy respFinderPreviousPlate = *x.obj
    return &objCopy
}

func (x *respFinderPreviousPlate) Exception() thrift.WritableException {
    return nil
}

func (x *respFinderPreviousPlate) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("respFinderPreviousPlate"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField0(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *respFinderPreviousPlate) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, wireType, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if wireType == thrift.STOP {
            break;
        }

        switch id {
        case 0:  // success
            expectedType := thrift.Type(thrift.STRING)
            if wireType == expectedType {
                if err := x.readField0(p); err != nil {
                   return err
                }
            } else {
                if err := p.Skip(wireType); err != nil {
                    return err
                }
            }
        default:
            if err := p.Skip(wireType); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

func (x *respFinderPreviousPlate) String() string {
    if x == nil {
        return "<nil>"
    }

    var sb strings.Builder

    sb.WriteString("respFinderPreviousPlate({")
    sb.WriteString(fmt.Sprintf("Success:%s", x.toString0()))
    sb.WriteString("})")

    return sb.String()
}


type FinderProcessor struct {
    processorMap       map[string]thrift.ProcessorFunctionContext
    functionServiceMap map[string]string
    handler            Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorContext = &FinderProcessor{}

func (p *FinderProcessor) AddToProcessorMap(key string, processor thrift.ProcessorFunctionContext) {
    p.processorMap[key] = processor
}

func (p *FinderProcessor) AddToFunctionServiceMap(key, service string) {
    p.functionServiceMap[key] = service
}

func (p *FinderProcessor) GetProcessorFunctionContext(key string) (processor thrift.ProcessorFunctionContext, err error) {
    if processor, ok := p.processorMap[key]; ok {
        return processor, nil
    }
    return nil, nil
}

func (p *FinderProcessor) ProcessorMap() map[string]thrift.ProcessorFunctionContext {
    return p.processorMap
}

func (p *FinderProcessor) FunctionServiceMap() map[string]string {
    return p.functionServiceMap
}

func NewFinderProcessor(handler Finder) *FinderProcessor {
    p := &FinderProcessor{
        handler:            handler,
        processorMap:       make(map[string]thrift.ProcessorFunctionContext),
        functionServiceMap: make(map[string]string),
    }
    p.AddToProcessorMap("byPlate", &procFuncFinderByPlate{handler: handler})
    p.AddToProcessorMap("aliasByPlate", &procFuncFinderAliasByPlate{handler: handler})
    p.AddToProcessorMap("previousPlate", &procFuncFinderPreviousPlate{handler: handler})
    p.AddToFunctionServiceMap("byPlate", "Finder")
    p.AddToFunctionServiceMap("aliasByPlate", "Finder")
    p.AddToFunctionServiceMap("previousPlate", "Finder")

    return p
}


type procFuncFinderByPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunctionContext = &procFuncFinderByPlate{}

func (p *procFuncFinderByPlate) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqFinderByPlate()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderByPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("byPlate", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncFinderByPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderByPlate)
    result := newRespFinderByPlate()
    retval, err := p.handler.ByPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing ByPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


type procFuncFinderAliasByPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunctionContext = &procFuncFinderAliasByPlate{}

func (p *procFuncFinderAliasByPlate) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqFinderAliasByPlate()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderAliasByPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("aliasByPlate", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncFinderAliasByPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderAliasByPlate)
    result := newRespFinderAliasByPlate()
    retval, err := p.handler.AliasByPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing AliasByPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


type procFuncFinderPreviousPlate struct {
    handler Finder
}
// Compile time interface enforcer
var _ thrift.ProcessorFunctionContext = &procFuncFinderPreviousPlate{}

func (p *procFuncFinderPreviousPlate) Read(iprot thrift.Protocol) (thrift.Struct, thrift.Exception) {
    args := newReqFinderPreviousPlate()
    if err := args.Read(iprot); err != nil {
        return nil, err
    }
    iprot.ReadMessageEnd()
    return args, nil
}

func (p *procFuncFinderPreviousPlate) Write(seqId int32, result thrift.WritableStruct, oprot thrift.Protocol) (err thrift.Exception) {
    var err2 error
    messageType := thrift.REPLY
    switch result.(type) {
    case thrift.ApplicationException:
        messageType = thrift.EXCEPTION
    }

    if err2 = oprot.WriteMessageBegin("previousPlate", messageType, seqId); err2 != nil {
        err = err2
    }
    if err2 = result.Write(oprot); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.WriteMessageEnd(); err == nil && err2 != nil {
        err = err2
    }
    if err2 = oprot.Flush(); err == nil && err2 != nil {
        err = err2
    }
    return err
}

func (p *procFuncFinderPreviousPlate) RunContext(ctx context.Context, reqStruct thrift.Struct) (thrift.WritableStruct, thrift.ApplicationException) {
    args := reqStruct.(*reqFinderPreviousPlate)
    result := newRespFinderPreviousPlate()
    retval, err := p.handler.PreviousPlate(ctx, args.Plate)
    if err != nil {
        x := thrift.NewApplicationExceptionCause(thrift.INTERNAL_ERROR, "Internal error processing PreviousPlate: " + err.Error(), err)
        return x, x
    }

    result.Success = retval
    return result, nil
}


