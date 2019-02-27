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
import com.facebook.thrift.protocol.TField;
import com.facebook.thrift.protocol.TProtocol;
import com.facebook.thrift.protocol.TProtocolUtil;
import com.facebook.thrift.protocol.TStruct;
import com.facebook.thrift.protocol.TType;

import java.util.BitSet;
import java.util.Collections;
import java.util.HashMap;
import java.util.Map;

@SuppressWarnings({"unused", "serial"})
public class ReverseOrderStruct
    implements TBase, java.io.Serializable, Cloneable, Comparable<ReverseOrderStruct> {
  private static final TStruct STRUCT_DESC = new TStruct("ReverseOrderStruct");
  private static final TField FIRST_FIELD_DESC = new TField("first", TType.STRING, (short) 4);
  private static final TField SECOND_FIELD_DESC = new TField("second", TType.I16, (short) 3);
  private static final TField THIRD_FIELD_DESC = new TField("third", TType.I32, (short) 2);
  private static final TField FOURTH_FIELD_DESC = new TField("fourth", TType.I64, (short) 1);

  public String first;
  public short second;
  public int third;
  public long fourth;
  public static final int FIRST = 4;
  public static final int SECOND = 3;
  public static final int THIRD = 2;
  public static final int FOURTH = 1;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments
  private static final int __SECOND_ISSET_ID = 0;
  private static final int __THIRD_ISSET_ID = 1;
  private static final int __FOURTH_ISSET_ID = 2;
  private BitSet __isset_bit_vector = new BitSet(3);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(FIRST, new FieldMetaData("first", TFieldRequirementType.DEFAULT,
        new FieldValueMetaData(TType.STRING)));
    tmpMetaDataMap.put(SECOND, new FieldMetaData("second", TFieldRequirementType.DEFAULT,
        new FieldValueMetaData(TType.I16)));
    tmpMetaDataMap.put(THIRD, new FieldMetaData("third", TFieldRequirementType.DEFAULT,
        new FieldValueMetaData(TType.I32)));
    tmpMetaDataMap.put(FOURTH, new FieldMetaData("fourth", TFieldRequirementType.DEFAULT,
        new FieldValueMetaData(TType.I64)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(ReverseOrderStruct.class, metaDataMap);
  }

  public ReverseOrderStruct() {
  }

  public ReverseOrderStruct(
      String first,
      short second,
      int third,
      long fourth) {
    this();
    this.first = first;
    this.second = second;
    setSecondIsSet(true);
    this.third = third;
    setThirdIsSet(true);
    this.fourth = fourth;
    setFourthIsSet(true);
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public ReverseOrderStruct(ReverseOrderStruct other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    if (other.isSetFirst()) {
      this.first = TBaseHelper.deepCopy(other.first);
    }
    this.second = TBaseHelper.deepCopy(other.second);
    this.third = TBaseHelper.deepCopy(other.third);
    this.fourth = TBaseHelper.deepCopy(other.fourth);
  }

  public ReverseOrderStruct deepCopy() {
    return new ReverseOrderStruct(this);
  }

  @Deprecated
  public ReverseOrderStruct clone() {
    return new ReverseOrderStruct(this);
  }

  public String getFirst() {
    return this.first;
  }

  public ReverseOrderStruct setFirst(String first) {
    this.first = first;
    return this;
  }

  public void unsetFirst() {
    this.first = null;
  }

  // Returns true if field first is set (has been assigned a value) and false otherwise
  public boolean isSetFirst() {
    return this.first != null;
  }

  public void setFirstIsSet(boolean value) {
    if (!value) {
      this.first = null;
    }
  }

  public short getSecond() {
    return this.second;
  }

  public ReverseOrderStruct setSecond(short second) {
    this.second = second;
    setSecondIsSet(true);
    return this;
  }

  public void unsetSecond() {
    __isset_bit_vector.clear(__SECOND_ISSET_ID);
  }

  // Returns true if field second is set (has been assigned a value) and false otherwise
  public boolean isSetSecond() {
    return __isset_bit_vector.get(__SECOND_ISSET_ID);
  }

  public void setSecondIsSet(boolean value) {
    __isset_bit_vector.set(__SECOND_ISSET_ID, value);
  }

  public int getThird() {
    return this.third;
  }

  public ReverseOrderStruct setThird(int third) {
    this.third = third;
    setThirdIsSet(true);
    return this;
  }

  public void unsetThird() {
    __isset_bit_vector.clear(__THIRD_ISSET_ID);
  }

  // Returns true if field third is set (has been assigned a value) and false otherwise
  public boolean isSetThird() {
    return __isset_bit_vector.get(__THIRD_ISSET_ID);
  }

  public void setThirdIsSet(boolean value) {
    __isset_bit_vector.set(__THIRD_ISSET_ID, value);
  }

  public long getFourth() {
    return this.fourth;
  }

  public ReverseOrderStruct setFourth(long fourth) {
    this.fourth = fourth;
    setFourthIsSet(true);
    return this;
  }

  public void unsetFourth() {
    __isset_bit_vector.clear(__FOURTH_ISSET_ID);
  }

  // Returns true if field fourth is set (has been assigned a value) and false otherwise
  public boolean isSetFourth() {
    return __isset_bit_vector.get(__FOURTH_ISSET_ID);
  }

  public void setFourthIsSet(boolean value) {
    __isset_bit_vector.set(__FOURTH_ISSET_ID, value);
  }

  public void setFieldValue(int fieldID, Object value) {
    switch (fieldID) {
      case FIRST:
        if (value == null) {
          unsetFirst();
        } else {
          setFirst((String) value);
        }
        break;

      case SECOND:
        if (value == null) {
          unsetSecond();
        } else {
          setSecond((Short) value);
        }
        break;

      case THIRD:
        if (value == null) {
          unsetThird();
        } else {
          setThird((Integer) value);
        }
        break;

      case FOURTH:
        if (value == null) {
          unsetFourth();
        } else {
          setFourth((Long) value);
        }
        break;

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
      case FIRST:
        return getFirst();

      case SECOND:
        return new Short(getSecond());

      case THIRD:
        return new Integer(getThird());

      case FOURTH:
        return new Long(getFourth());

      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
      case FIRST:
        return isSetFirst();
      case SECOND:
        return isSetSecond();
      case THIRD:
        return isSetThird();
      case FOURTH:
        return isSetFourth();
      default:
        throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null) {
      return false;
    }
    if (that instanceof ReverseOrderStruct) {
      return this.equals((ReverseOrderStruct) that);
    }
    return false;
  }

  public boolean equals(ReverseOrderStruct that) {
    if (that == null) {
      return false;
    }
    if (this == that) {
      return true;
    }

    boolean this_present_first = true && this.isSetFirst();
    boolean that_present_first = true && that.isSetFirst();
    if (this_present_first || that_present_first) {
      if (!(this_present_first && that_present_first)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.first, that.first)) {
        return false;
      }
    }

    boolean this_present_second = true;
    boolean that_present_second = true;
    if (this_present_second || that_present_second) {
      if (!(this_present_second && that_present_second)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.second, that.second)) {
        return false;
      }
    }

    boolean this_present_third = true;
    boolean that_present_third = true;
    if (this_present_third || that_present_third) {
      if (!(this_present_third && that_present_third)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.third, that.third)) {
        return false;
      }
    }

    boolean this_present_fourth = true;
    boolean that_present_fourth = true;
    if (this_present_fourth || that_present_fourth) {
      if (!(this_present_fourth && that_present_fourth)) {
        return false;
      }
      if (!TBaseHelper.equalsNobinary(this.fourth, that.fourth)) {
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
  public int compareTo(ReverseOrderStruct other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetFirst()).compareTo(other.isSetFirst());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(first, other.first);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetSecond()).compareTo(other.isSetSecond());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(second, other.second);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetThird()).compareTo(other.isSetThird());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(third, other.third);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetFourth()).compareTo(other.isSetFourth());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(fourth, other.fourth);
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
        case FIRST:
          if (field.type == TType.STRING) {
            this.first = iprot.readString();
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case SECOND:
          if (field.type == TType.I16) {
            this.second = iprot.readI16();
            setSecondIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case THIRD:
          if (field.type == TType.I32) {
            this.third = iprot.readI32();
            setThirdIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case FOURTH:
          if (field.type == TType.I64) {
            this.fourth = iprot.readI64();
            setFourthIsSet(true);
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
    oprot.writeFieldBegin(FOURTH_FIELD_DESC);
    oprot.writeI64(this.fourth);
    oprot.writeFieldEnd();
    oprot.writeFieldBegin(THIRD_FIELD_DESC);
    oprot.writeI32(this.third);
    oprot.writeFieldEnd();
    oprot.writeFieldBegin(SECOND_FIELD_DESC);
    oprot.writeI16(this.second);
    oprot.writeFieldEnd();
    if (this.first != null) {
      oprot.writeFieldBegin(FIRST_FIELD_DESC);
      oprot.writeString(this.first);
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
    StringBuilder sb = new StringBuilder("ReverseOrderStruct");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("first");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getFirst() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getFirst(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("second");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getSecond(), indent + 1, prettyPrint));
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("third");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getThird(), indent + 1, prettyPrint));
    first = false;
    if (!first) {
      sb.append("," + newLine);
    }
    sb.append(indentStr);
    sb.append("fourth");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getFourth(), indent + 1, prettyPrint));
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

