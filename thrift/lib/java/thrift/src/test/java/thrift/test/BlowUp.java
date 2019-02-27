/**
 * Autogenerated by Thrift
 * <p>
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *
 * @generated
 */
package thrift.test;

import com.facebook.thrift.TBase;
import com.facebook.thrift.TBaseHelper;
import com.facebook.thrift.TException;
import com.facebook.thrift.TFieldRequirementType;
import com.facebook.thrift.meta_data.FieldMetaData;
import com.facebook.thrift.meta_data.FieldValueMetaData;
import com.facebook.thrift.meta_data.ListMetaData;
import com.facebook.thrift.meta_data.MapMetaData;
import com.facebook.thrift.meta_data.SetMetaData;
import com.facebook.thrift.protocol.TField;
import com.facebook.thrift.protocol.TList;
import com.facebook.thrift.protocol.TMap;
import com.facebook.thrift.protocol.TProtocol;
import com.facebook.thrift.protocol.TProtocolUtil;
import com.facebook.thrift.protocol.TSet;
import com.facebook.thrift.protocol.TStruct;
import com.facebook.thrift.protocol.TType;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

@SuppressWarnings({"unused", "serial"})
public class BlowUp implements TBase, java.io.Serializable, Cloneable, Comparable<BlowUp> {
  private static final TStruct STRUCT_DESC = new TStruct("BlowUp");
  private static final TField B1_FIELD_DESC = new TField("b1", TType.MAP, (short) 1);
  private static final TField B2_FIELD_DESC = new TField("b2", TType.MAP, (short) 2);
  private static final TField B3_FIELD_DESC = new TField("b3", TType.MAP, (short) 3);
  private static final TField B4_FIELD_DESC = new TField("b4", TType.MAP, (short) 4);

  public Map<List<Integer>, Set<Map<Integer, String>>> b1;
  public Map<List<Integer>, Set<Map<Integer, String>>> b2;
  public Map<List<Integer>, Set<Map<Integer, String>>> b3;
  public Map<List<Integer>, Set<Map<Integer, String>>> b4;
  public static final int B1 = 1;
  public static final int B2 = 2;
  public static final int B3 = 3;
  public static final int B4 = 4;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(B1, new FieldMetaData("b1", TFieldRequirementType.DEFAULT,
        new MapMetaData(TType.MAP,
            new ListMetaData(TType.LIST,
                new FieldValueMetaData(TType.I32)),
            new SetMetaData(TType.SET,
                new MapMetaData(TType.MAP,
                    new FieldValueMetaData(TType.I32),
                    new FieldValueMetaData(TType.STRING))))));
    tmpMetaDataMap.put(B2, new FieldMetaData("b2", TFieldRequirementType.DEFAULT,
        new MapMetaData(TType.MAP,
            new ListMetaData(TType.LIST,
                new FieldValueMetaData(TType.I32)),
            new SetMetaData(TType.SET,
                new MapMetaData(TType.MAP,
                    new FieldValueMetaData(TType.I32),
                    new FieldValueMetaData(TType.STRING))))));
    tmpMetaDataMap.put(B3, new FieldMetaData("b3", TFieldRequirementType.DEFAULT,
        new MapMetaData(TType.MAP,
            new ListMetaData(TType.LIST,
                new FieldValueMetaData(TType.I32)),
            new SetMetaData(TType.SET,
                new MapMetaData(TType.MAP,
                    new FieldValueMetaData(TType.I32),
                    new FieldValueMetaData(TType.STRING))))));
    tmpMetaDataMap.put(B4, new FieldMetaData("b4", TFieldRequirementType.DEFAULT,
        new MapMetaData(TType.MAP,
            new ListMetaData(TType.LIST,
                new FieldValueMetaData(TType.I32)),
            new SetMetaData(TType.SET,
                new MapMetaData(TType.MAP,
                    new FieldValueMetaData(TType.I32),
                    new FieldValueMetaData(TType.STRING))))));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(BlowUp.class, metaDataMap);
  }

  public BlowUp() {
  }

  public BlowUp(
      Map<List<Integer>, Set<Map<Integer, String>>> b1,
      Map<List<Integer>, Set<Map<Integer, String>>> b2,
      Map<List<Integer>, Set<Map<Integer, String>>> b3,
      Map<List<Integer>, Set<Map<Integer, String>>> b4) {
    this();
    this.b1 = b1;
    this.b2 = b2;
    this.b3 = b3;
    this.b4 = b4;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public BlowUp(BlowUp other) {
    if (other.isSetB1()) {
      this.b1 = TBaseHelper.deepCopy(other.b1);
    }
    if (other.isSetB2()) {
      this.b2 = TBaseHelper.deepCopy(other.b2);
    }
    if (other.isSetB3()) {
      this.b3 = TBaseHelper.deepCopy(other.b3);
    }
    if (other.isSetB4()) {
      this.b4 = TBaseHelper.deepCopy(other.b4);
    }
  }

  public BlowUp deepCopy() {
    return new BlowUp(this);
  }

  @Deprecated
  public BlowUp clone() {
    return new BlowUp(this);
  }

  public Map<List<Integer>, Set<Map<Integer, String>>> getB1() {
    return this.b1;
  }

  public BlowUp setB1(Map<List<Integer>, Set<Map<Integer, String>>> b1) {
    this.b1 = b1;
    return this;
  }

  public void unsetB1() {
    this.b1 = null;
  }

  // Returns true if field b1 is set (has been assigned a value) and false otherwise
  public boolean isSetB1() {
    return this.b1 != null;
  }

  public void setB1IsSet(boolean value) {
    if (!value) {
      this.b1 = null;
    }
  }

  public Map<List<Integer>, Set<Map<Integer, String>>> getB2() {
    return this.b2;
  }

  public BlowUp setB2(Map<List<Integer>, Set<Map<Integer, String>>> b2) {
    this.b2 = b2;
    return this;
  }

  public void unsetB2() {
    this.b2 = null;
  }

  // Returns true if field b2 is set (has been assigned a value) and false otherwise
  public boolean isSetB2() {
    return this.b2 != null;
  }

  public void setB2IsSet(boolean value) {
    if (!value) {
      this.b2 = null;
    }
  }

  public Map<List<Integer>, Set<Map<Integer, String>>> getB3() {
    return this.b3;
  }

  public BlowUp setB3(Map<List<Integer>, Set<Map<Integer, String>>> b3) {
    this.b3 = b3;
    return this;
  }

  public void unsetB3() {
    this.b3 = null;
  }

  // Returns true if field b3 is set (has been assigned a value) and false otherwise
  public boolean isSetB3() {
    return this.b3 != null;
  }

  public void setB3IsSet(boolean value) {
    if (!value) {
      this.b3 = null;
    }
  }

  public Map<List<Integer>, Set<Map<Integer, String>>> getB4() {
    return this.b4;
  }

  public BlowUp setB4(Map<List<Integer>, Set<Map<Integer, String>>> b4) {
    this.b4 = b4;
    return this;
  }

  public void unsetB4() {
    this.b4 = null;
  }

  // Returns true if field b4 is set (has been assigned a value) and false otherwise
  public boolean isSetB4() {
    return this.b4 != null;
  }

  public void setB4IsSet(boolean value) {
    if (!value) {
      this.b4 = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object value) {
    switch (fieldID) {
      case B1:
        if (value == null) {
          unsetB1();
        } else {
          setB1((Map<List<Integer>, Set<Map<Integer, String>>>) value);
        }
        break;

      case B2:
        if (value == null) {
          unsetB2();
        } else {
          setB2((Map<List<Integer>, Set<Map<Integer, String>>>) value);
        }
        break;

      case B3:
        if (value == null) {
          unsetB3();
        } else {
          setB3((Map<List<Integer>, Set<Map<Integer, String>>>) value);
        }
        break;

      case B4:
        if (value == null) {
          unsetB4();
        } else {
          setB4((Map<List<Integer>, Set<Map<Integer, String>>>) value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
      case B1:
        return getB1();

      case B2:
        return getB2();

      case B3:
        return getB3();

      case B4:
        return getB4();

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
      case B1:
        return isSetB1();
      case B2:
        return isSetB2();
      case B3:
        return isSetB3();
      case B4:
        return isSetB4();
      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null) {
      return false;
    }
    if (that instanceof BlowUp) {
      return this.equals((BlowUp) that);
    }
    return false;
  }

  public boolean equals(BlowUp that) {
    if (that == null) {
      return false;
    }
    if (this == that) {
      return true;
    }

    boolean this_present_b1 = true && this.isSetB1();
    boolean that_present_b1 = true && that.isSetB1();
    if (this_present_b1 || that_present_b1) {
      if (!(this_present_b1 && that_present_b1)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.b1, that.b1)) {
        return false;
      }
    }

    boolean this_present_b2 = true && this.isSetB2();
    boolean that_present_b2 = true && that.isSetB2();
    if (this_present_b2 || that_present_b2) {
      if (!(this_present_b2 && that_present_b2)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.b2, that.b2)) {
        return false;
      }
    }

    boolean this_present_b3 = true && this.isSetB3();
    boolean that_present_b3 = true && that.isSetB3();
    if (this_present_b3 || that_present_b3) {
      if (!(this_present_b3 && that_present_b3)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.b3, that.b3)) {
        return false;
      }
    }

    boolean this_present_b4 = true && this.isSetB4();
    boolean that_present_b4 = true && that.isSetB4();
    if (this_present_b4 || that_present_b4) {
      if (!(this_present_b4 && that_present_b4)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.b4, that.b4)) {
        return false;
      }
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(BlowUp other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetB1()).compareTo(other.isSetB1());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(b1, other.b1);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetB2()).compareTo(other.isSetB2());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(b2, other.b2);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetB3()).compareTo(other.isSetB3());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(b3, other.b3);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetB4()).compareTo(other.isSetB4());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(b4, other.b4);
    if (lastComparison != 0) {
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField field;
    iprot.readStructBegin(metaDataMap);
    while (true) {
      field = iprot.readFieldBegin();
      if (field.type == TType.STOP) {
        break;
      }
      switch (field.id) {
        case B1:
          if (field.type == TType.MAP) {
            {
              TMap _map465 = iprot.readMapBegin();
              this.b1 = new HashMap<List<Integer>, Set<Map<Integer, String>>>(
                  Math.max(0, 2 * _map465.size));
              for (int _i466 = 0;
                   (_map465.size < 0) ? iprot.peekMap() : (_i466 < _map465.size);
                   ++_i466) {
                List<Integer> _key467;
                Set<Map<Integer, String>> _val468;
                {
                  TList _list469 = iprot.readListBegin();
                  _key467 = new ArrayList<Integer>(Math.max(0, _list469.size));
                  for (int _i470 = 0;
                       (_list469.size < 0) ? iprot.peekList() : (_i470 < _list469.size);
                       ++_i470) {
                    int _elem471;
                    _elem471 = iprot.readI32();
                    _key467.add(_elem471);
                  }
                  iprot.readListEnd();
                }
                {
                  TSet _set472 = iprot.readSetBegin();
                  _val468 = new HashSet<Map<Integer, String>>(Math.max(0, 2 * _set472.size));
                  for (int _i473 = 0;
                       (_set472.size < 0) ? iprot.peekSet() : (_i473 < _set472.size);
                       ++_i473) {
                    Map<Integer, String> _elem474;
                    {
                      TMap _map475 = iprot.readMapBegin();
                      _elem474 = new HashMap<Integer, String>(Math.max(0, 2 * _map475.size));
                      for (int _i476 = 0;
                           (_map475.size < 0) ? iprot.peekMap() : (_i476 < _map475.size);
                           ++_i476) {
                        int _key477;
                        String _val478;
                        _key477 = iprot.readI32();
                        _val478 = iprot.readString();
                        _elem474.put(_key477, _val478);
                      }
                      iprot.readMapEnd();
                    }
                    _val468.add(_elem474);
                  }
                  iprot.readSetEnd();
                }
                this.b1.put(_key467, _val468);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case B2:
          if (field.type == TType.MAP) {
            {
              TMap _map479 = iprot.readMapBegin();
              this.b2 = new HashMap<List<Integer>, Set<Map<Integer, String>>>(
                  Math.max(0, 2 * _map479.size));
              for (int _i480 = 0;
                   (_map479.size < 0) ? iprot.peekMap() : (_i480 < _map479.size);
                   ++_i480) {
                List<Integer> _key481;
                Set<Map<Integer, String>> _val482;
                {
                  TList _list483 = iprot.readListBegin();
                  _key481 = new ArrayList<Integer>(Math.max(0, _list483.size));
                  for (int _i484 = 0;
                       (_list483.size < 0) ? iprot.peekList() : (_i484 < _list483.size);
                       ++_i484) {
                    int _elem485;
                    _elem485 = iprot.readI32();
                    _key481.add(_elem485);
                  }
                  iprot.readListEnd();
                }
                {
                  TSet _set486 = iprot.readSetBegin();
                  _val482 = new HashSet<Map<Integer, String>>(Math.max(0, 2 * _set486.size));
                  for (int _i487 = 0;
                       (_set486.size < 0) ? iprot.peekSet() : (_i487 < _set486.size);
                       ++_i487) {
                    Map<Integer, String> _elem488;
                    {
                      TMap _map489 = iprot.readMapBegin();
                      _elem488 = new HashMap<Integer, String>(Math.max(0, 2 * _map489.size));
                      for (int _i490 = 0;
                           (_map489.size < 0) ? iprot.peekMap() : (_i490 < _map489.size);
                           ++_i490) {
                        int _key491;
                        String _val492;
                        _key491 = iprot.readI32();
                        _val492 = iprot.readString();
                        _elem488.put(_key491, _val492);
                      }
                      iprot.readMapEnd();
                    }
                    _val482.add(_elem488);
                  }
                  iprot.readSetEnd();
                }
                this.b2.put(_key481, _val482);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case B3:
          if (field.type == TType.MAP) {
            {
              TMap _map493 = iprot.readMapBegin();
              this.b3 = new HashMap<List<Integer>, Set<Map<Integer, String>>>(
                  Math.max(0, 2 * _map493.size));
              for (int _i494 = 0;
                   (_map493.size < 0) ? iprot.peekMap() : (_i494 < _map493.size);
                   ++_i494) {
                List<Integer> _key495;
                Set<Map<Integer, String>> _val496;
                {
                  TList _list497 = iprot.readListBegin();
                  _key495 = new ArrayList<Integer>(Math.max(0, _list497.size));
                  for (int _i498 = 0;
                       (_list497.size < 0) ? iprot.peekList() : (_i498 < _list497.size);
                       ++_i498) {
                    int _elem499;
                    _elem499 = iprot.readI32();
                    _key495.add(_elem499);
                  }
                  iprot.readListEnd();
                }
                {
                  TSet _set500 = iprot.readSetBegin();
                  _val496 = new HashSet<Map<Integer, String>>(Math.max(0, 2 * _set500.size));
                  for (int _i501 = 0;
                       (_set500.size < 0) ? iprot.peekSet() : (_i501 < _set500.size);
                       ++_i501) {
                    Map<Integer, String> _elem502;
                    {
                      TMap _map503 = iprot.readMapBegin();
                      _elem502 = new HashMap<Integer, String>(Math.max(0, 2 * _map503.size));
                      for (int _i504 = 0;
                           (_map503.size < 0) ? iprot.peekMap() : (_i504 < _map503.size);
                           ++_i504) {
                        int _key505;
                        String _val506;
                        _key505 = iprot.readI32();
                        _val506 = iprot.readString();
                        _elem502.put(_key505, _val506);
                      }
                      iprot.readMapEnd();
                    }
                    _val496.add(_elem502);
                  }
                  iprot.readSetEnd();
                }
                this.b3.put(_key495, _val496);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case B4:
          if (field.type == TType.MAP) {
            {
              TMap _map507 = iprot.readMapBegin();
              this.b4 = new HashMap<List<Integer>, Set<Map<Integer, String>>>(
                  Math.max(0, 2 * _map507.size));
              for (int _i508 = 0;
                   (_map507.size < 0) ? iprot.peekMap() : (_i508 < _map507.size);
                   ++_i508) {
                List<Integer> _key509;
                Set<Map<Integer, String>> _val510;
                {
                  TList _list511 = iprot.readListBegin();
                  _key509 = new ArrayList<Integer>(Math.max(0, _list511.size));
                  for (int _i512 = 0;
                       (_list511.size < 0) ? iprot.peekList() : (_i512 < _list511.size);
                       ++_i512) {
                    int _elem513;
                    _elem513 = iprot.readI32();
                    _key509.add(_elem513);
                  }
                  iprot.readListEnd();
                }
                {
                  TSet _set514 = iprot.readSetBegin();
                  _val510 = new HashSet<Map<Integer, String>>(Math.max(0, 2 * _set514.size));
                  for (int _i515 = 0;
                       (_set514.size < 0) ? iprot.peekSet() : (_i515 < _set514.size);
                       ++_i515) {
                    Map<Integer, String> _elem516;
                    {
                      TMap _map517 = iprot.readMapBegin();
                      _elem516 = new HashMap<Integer, String>(Math.max(0, 2 * _map517.size));
                      for (int _i518 = 0;
                           (_map517.size < 0) ? iprot.peekMap() : (_i518 < _map517.size);
                           ++_i518) {
                        int _key519;
                        String _val520;
                        _key519 = iprot.readI32();
                        _val520 = iprot.readString();
                        _elem516.put(_key519, _val520);
                      }
                      iprot.readMapEnd();
                    }
                    _val510.add(_elem516);
                  }
                  iprot.readSetEnd();
                }
                this.b4.put(_key509, _val510);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.b1 != null) {
      oprot.writeFieldBegin(B1_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.LIST, TType.SET, this.b1.size()));
        for (Map.Entry<List<Integer>, Set<Map<Integer, String>>> _iter521 : this.b1.entrySet()) {
          {
            oprot.writeListBegin(new TList(TType.I32, _iter521.getKey().size()));
            for (int _iter522 : _iter521.getKey()) {
              oprot.writeI32(_iter522);
            }
            oprot.writeListEnd();
          }
          {
            oprot.writeSetBegin(new TSet(TType.MAP, _iter521.getValue().size()));
            for (Map<Integer, String> _iter523 : _iter521.getValue()) {
              {
                oprot.writeMapBegin(new TMap(TType.I32, TType.STRING, _iter523.size()));
                for (Map.Entry<Integer, String> _iter524 : _iter523.entrySet()) {
                  oprot.writeI32(_iter524.getKey());
                  oprot.writeString(_iter524.getValue());
                }
                oprot.writeMapEnd();
              }
            }
            oprot.writeSetEnd();
          }
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.b2 != null) {
      oprot.writeFieldBegin(B2_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.LIST, TType.SET, this.b2.size()));
        for (Map.Entry<List<Integer>, Set<Map<Integer, String>>> _iter525 : this.b2.entrySet()) {
          {
            oprot.writeListBegin(new TList(TType.I32, _iter525.getKey().size()));
            for (int _iter526 : _iter525.getKey()) {
              oprot.writeI32(_iter526);
            }
            oprot.writeListEnd();
          }
          {
            oprot.writeSetBegin(new TSet(TType.MAP, _iter525.getValue().size()));
            for (Map<Integer, String> _iter527 : _iter525.getValue()) {
              {
                oprot.writeMapBegin(new TMap(TType.I32, TType.STRING, _iter527.size()));
                for (Map.Entry<Integer, String> _iter528 : _iter527.entrySet()) {
                  oprot.writeI32(_iter528.getKey());
                  oprot.writeString(_iter528.getValue());
                }
                oprot.writeMapEnd();
              }
            }
            oprot.writeSetEnd();
          }
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.b3 != null) {
      oprot.writeFieldBegin(B3_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.LIST, TType.SET, this.b3.size()));
        for (Map.Entry<List<Integer>, Set<Map<Integer, String>>> _iter529 : this.b3.entrySet()) {
          {
            oprot.writeListBegin(new TList(TType.I32, _iter529.getKey().size()));
            for (int _iter530 : _iter529.getKey()) {
              oprot.writeI32(_iter530);
            }
            oprot.writeListEnd();
          }
          {
            oprot.writeSetBegin(new TSet(TType.MAP, _iter529.getValue().size()));
            for (Map<Integer, String> _iter531 : _iter529.getValue()) {
              {
                oprot.writeMapBegin(new TMap(TType.I32, TType.STRING, _iter531.size()));
                for (Map.Entry<Integer, String> _iter532 : _iter531.entrySet()) {
                  oprot.writeI32(_iter532.getKey());
                  oprot.writeString(_iter532.getValue());
                }
                oprot.writeMapEnd();
              }
            }
            oprot.writeSetEnd();
          }
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.b4 != null) {
      oprot.writeFieldBegin(B4_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.LIST, TType.SET, this.b4.size()));
        for (Map.Entry<List<Integer>, Set<Map<Integer, String>>> _iter533 : this.b4.entrySet()) {
          {
            oprot.writeListBegin(new TList(TType.I32, _iter533.getKey().size()));
            for (int _iter534 : _iter533.getKey()) {
              oprot.writeI32(_iter534);
            }
            oprot.writeListEnd();
          }
          {
            oprot.writeSetBegin(new TSet(TType.MAP, _iter533.getValue().size()));
            for (Map<Integer, String> _iter535 : _iter533.getValue()) {
              {
                oprot.writeMapBegin(new TMap(TType.I32, TType.STRING, _iter535.size()));
                for (Map.Entry<Integer, String> _iter536 : _iter535.entrySet()) {
                  oprot.writeI32(_iter536.getKey());
                  oprot.writeString(_iter536.getValue());
                }
                oprot.writeMapEnd();
              }
            }
            oprot.writeSetEnd();
          }
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(DEFAULT_PRETTY_PRINT);
  }

  @Override
  public String toString(boolean prettyPrint) {
    return toString(1, prettyPrint);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("BlowUp");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("b1");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getB1() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getB1(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("b2");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getB2() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getB2(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("b3");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getB3() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getB3(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("b4");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getB4() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getB4(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
    // check that fields of type enum have valid values
  }

}

