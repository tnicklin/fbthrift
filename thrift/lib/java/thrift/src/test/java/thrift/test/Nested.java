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
import java.util.BitSet;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;

@SuppressWarnings({"unused", "serial"})
public class Nested implements TBase, java.io.Serializable, Cloneable, Comparable<Nested> {
  private static final TStruct STRUCT_DESC = new TStruct("Nested");
  private static final TField FOO_FIELD_DESC = new TField("foo", TType.MAP, (short) 1);
  private static final TField BAR_FIELD_DESC = new TField("bar", TType.I32, (short) 2);

  public Map<String, List<Set<Map<Integer, Integer>>>> foo;
  public int bar;
  public static final int FOO = 1;
  public static final int BAR = 2;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments
  private static final int __BAR_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(FOO, new FieldMetaData("foo", TFieldRequirementType.DEFAULT,
        new MapMetaData(TType.MAP,
            new FieldValueMetaData(TType.STRING),
            new ListMetaData(TType.LIST,
                new SetMetaData(TType.SET,
                    new MapMetaData(TType.MAP,
                        new FieldValueMetaData(TType.I32),
                        new FieldValueMetaData(TType.I32)))))));
    tmpMetaDataMap.put(BAR, new FieldMetaData("bar", TFieldRequirementType.DEFAULT,
        new FieldValueMetaData(TType.I32)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(Nested.class, metaDataMap);
  }

  public Nested() {
  }

  public Nested(
      Map<String, List<Set<Map<Integer, Integer>>>> foo,
      int bar) {
    this();
    this.foo = foo;
    this.bar = bar;
    setBarIsSet(true);
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Nested(Nested other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    if (other.isSetFoo()) {
      this.foo = TBaseHelper.deepCopy(other.foo);
    }
    this.bar = TBaseHelper.deepCopy(other.bar);
  }

  public Nested deepCopy() {
    return new Nested(this);
  }

  @Deprecated
  public Nested clone() {
    return new Nested(this);
  }

  public Map<String, List<Set<Map<Integer, Integer>>>> getFoo() {
    return this.foo;
  }

  public Nested setFoo(Map<String, List<Set<Map<Integer, Integer>>>> foo) {
    this.foo = foo;
    return this;
  }

  public void unsetFoo() {
    this.foo = null;
  }

  // Returns true if field foo is set (has been assigned a value) and false otherwise
  public boolean isSetFoo() {
    return this.foo != null;
  }

  public void setFooIsSet(boolean value) {
    if (!value) {
      this.foo = null;
    }
  }

  public int getBar() {
    return this.bar;
  }

  public Nested setBar(int bar) {
    this.bar = bar;
    setBarIsSet(true);
    return this;
  }

  public void unsetBar() {
    __isset_bit_vector.clear(__BAR_ISSET_ID);
  }

  // Returns true if field bar is set (has been assigned a value) and false otherwise
  public boolean isSetBar() {
    return __isset_bit_vector.get(__BAR_ISSET_ID);
  }

  public void setBarIsSet(boolean value) {
    __isset_bit_vector.set(__BAR_ISSET_ID, value);
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object value) {
    switch (fieldID) {
      case FOO:
        if (value == null) {
          unsetFoo();
        } else {
          setFoo((Map<String, List<Set<Map<Integer, Integer>>>>) value);
        }
        break;

      case BAR:
        if (value == null) {
          unsetBar();
        } else {
          setBar((Integer) value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
      case FOO:
        return getFoo();

      case BAR:
        return new Integer(getBar());

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
      case FOO:
        return isSetFoo();
      case BAR:
        return isSetBar();
      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null) {
      return false;
    }
    if (that instanceof Nested) {
      return this.equals((Nested) that);
    }
    return false;
  }

  public boolean equals(Nested that) {
    if (that == null) {
      return false;
    }
    if (this == that) {
      return true;
    }

    boolean this_present_foo = true && this.isSetFoo();
    boolean that_present_foo = true && that.isSetFoo();
    if (this_present_foo || that_present_foo) {
      if (!(this_present_foo && that_present_foo)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.foo, that.foo)) {
        return false;
      }
    }

    boolean this_present_bar = true;
    boolean that_present_bar = true;
    if (this_present_bar || that_present_bar) {
      if (!(this_present_bar && that_present_bar)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.bar, that.bar)) {
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
  public int compareTo(Nested other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetFoo()).compareTo(other.isSetFoo());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(foo, other.foo);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetBar()).compareTo(other.isSetBar());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(bar, other.bar);
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
        case FOO:
          if (field.type == TType.MAP) {
            {
              TMap _map541 = iprot.readMapBegin();
              this.foo = new HashMap<String, List<Set<Map<Integer, Integer>>>>(
                  Math.max(0, 2 * _map541.size));
              for (int _i542 = 0;
                   (_map541.size < 0) ? iprot.peekMap() : (_i542 < _map541.size);
                   ++_i542) {
                String _key543;
                List<Set<Map<Integer, Integer>>> _val544;
                _key543 = iprot.readString();
                {
                  TList _list545 = iprot.readListBegin();
                  _val544 = new ArrayList<Set<Map<Integer, Integer>>>(Math.max(0, _list545.size));
                  for (int _i546 = 0;
                       (_list545.size < 0) ? iprot.peekList() : (_i546 < _list545.size);
                       ++_i546) {
                    Set<Map<Integer, Integer>> _elem547;
                    {
                      TSet _set548 = iprot.readSetBegin();
                      _elem547 = new HashSet<Map<Integer, Integer>>(Math.max(0, 2 * _set548.size));
                      for (int _i549 = 0;
                           (_set548.size < 0) ? iprot.peekSet() : (_i549 < _set548.size);
                           ++_i549) {
                        Map<Integer, Integer> _elem550;
                        {
                          TMap _map551 = iprot.readMapBegin();
                          _elem550 = new HashMap<Integer, Integer>(Math.max(0, 2 * _map551.size));
                          for (int _i552 = 0;
                               (_map551.size < 0) ? iprot.peekMap() : (_i552 < _map551.size);
                               ++_i552) {
                            int _key553;
                            int _val554;
                            _key553 = iprot.readI32();
                            _val554 = iprot.readI32();
                            _elem550.put(_key553, _val554);
                          }
                          iprot.readMapEnd();
                        }
                        _elem547.add(_elem550);
                      }
                      iprot.readSetEnd();
                    }
                    _val544.add(_elem547);
                  }
                  iprot.readListEnd();
                }
                this.foo.put(_key543, _val544);
              }
              iprot.readMapEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case BAR:
          if (field.type == TType.I32) {
            this.bar = iprot.readI32();
            setBarIsSet(true);
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
    if (this.foo != null) {
      oprot.writeFieldBegin(FOO_FIELD_DESC);
      {
        oprot.writeMapBegin(new TMap(TType.STRING, TType.LIST, this.foo.size()));
        for (Map.Entry<String, List<Set<Map<Integer, Integer>>>> _iter555 : this.foo.entrySet()) {
          oprot.writeString(_iter555.getKey());
          {
            oprot.writeListBegin(new TList(TType.SET, _iter555.getValue().size()));
            for (Set<Map<Integer, Integer>> _iter556 : _iter555.getValue()) {
              {
                oprot.writeSetBegin(new TSet(TType.MAP, _iter556.size()));
                for (Map<Integer, Integer> _iter557 : _iter556) {
                  {
                    oprot.writeMapBegin(new TMap(TType.I32, TType.I32, _iter557.size()));
                    for (Map.Entry<Integer, Integer> _iter558 : _iter557.entrySet()) {
                      oprot.writeI32(_iter558.getKey());
                      oprot.writeI32(_iter558.getValue());
                    }
                    oprot.writeMapEnd();
                  }
                }
                oprot.writeSetEnd();
              }
            }
            oprot.writeListEnd();
          }
        }
        oprot.writeMapEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldBegin(BAR_FIELD_DESC);
    oprot.writeI32(this.bar);
    oprot.writeFieldEnd();
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
    StringBuilder sb = new StringBuilder("Nested");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("foo");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getFoo() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getFoo(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("bar");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getBar(), indent + 1, prettyPrint));
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

