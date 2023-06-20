/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class MyStructField27Patch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("MyStructField27Patch");
  private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.SET, (short)1);
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField REMOVE_FIELD_DESC = new TField("remove", TType.SET, (short)7);
  private static final TField ADD_FIELD_DESC = new TField("add", TType.SET, (short)8);

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public final Set<String> assign;
  /**
   * Clears a value. Applies first.
   */
  public final Boolean clear;
  /**
   * Removes entries, if present. Applies third.
   */
  public final Set<String> remove;
  /**
   * Adds entries, if not already present. Applies fourth.
   */
  public final Set<String> add;
  public static final int ASSIGN = 1;
  public static final int CLEAR = 2;
  public static final int REMOVE = 7;
  public static final int ADD = 8;

  public MyStructField27Patch(
      Set<String> assign,
      Boolean clear,
      Set<String> remove,
      Set<String> add) {
    this.assign = assign;
    this.clear = clear;
    this.remove = remove;
    this.add = add;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public MyStructField27Patch(MyStructField27Patch other) {
    if (other.isSetAssign()) {
      this.assign = TBaseHelper.deepCopy(other.assign);
    } else {
      this.assign = null;
    }
    if (other.isSetClear()) {
      this.clear = TBaseHelper.deepCopy(other.clear);
    } else {
      this.clear = null;
    }
    if (other.isSetRemove()) {
      this.remove = TBaseHelper.deepCopy(other.remove);
    } else {
      this.remove = null;
    }
    if (other.isSetAdd()) {
      this.add = TBaseHelper.deepCopy(other.add);
    } else {
      this.add = null;
    }
  }

  public MyStructField27Patch deepCopy() {
    return new MyStructField27Patch(this);
  }

  /**
   * Assigns to a (set) value.
   * 
   * If set, all other operations are ignored.
   * 
   * Note: Optional and union fields must be set before assigned.
   * 
   */
  public Set<String> getAssign() {
    return this.assign;
  }

  // Returns true if field assign is set (has been assigned a value) and false otherwise
  public boolean isSetAssign() {
    return this.assign != null;
  }

  /**
   * Clears a value. Applies first.
   */
  public Boolean isClear() {
    return this.clear;
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return this.clear != null;
  }

  /**
   * Removes entries, if present. Applies third.
   */
  public Set<String> getRemove() {
    return this.remove;
  }

  // Returns true if field remove is set (has been assigned a value) and false otherwise
  public boolean isSetRemove() {
    return this.remove != null;
  }

  /**
   * Adds entries, if not already present. Applies fourth.
   */
  public Set<String> getAdd() {
    return this.add;
  }

  // Returns true if field add is set (has been assigned a value) and false otherwise
  public boolean isSetAdd() {
    return this.add != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof MyStructField27Patch))
      return false;
    MyStructField27Patch that = (MyStructField27Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetAssign(), that.isSetAssign(), this.assign, that.assign)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetClear(), that.isSetClear(), this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetRemove(), that.isSetRemove(), this.remove, that.remove)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetAdd(), that.isSetAdd(), this.add, that.add)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {assign, clear, remove, add});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static MyStructField27Patch deserialize(TProtocol iprot) throws TException {
    Set<String> tmp_assign = null;
    Boolean tmp_clear = null;
    Set<String> tmp_remove = null;
    Set<String> tmp_add = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case ASSIGN:
          if (__field.type == TType.SET) {
            {
              TSet _set61 = iprot.readSetBegin();
              tmp_assign = new HashSet<String>(Math.max(0, 2*_set61.size));
              for (int _i62 = 0; 
                   (_set61.size < 0) ? iprot.peekSet() : (_i62 < _set61.size); 
                   ++_i62)
              {
                String _elem63;
                _elem63 = iprot.readString();
                tmp_assign.add(_elem63);
              }
              iprot.readSetEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case CLEAR:
          if (__field.type == TType.BOOL) {
            tmp_clear = iprot.readBool();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case REMOVE:
          if (__field.type == TType.SET) {
            {
              TSet _set64 = iprot.readSetBegin();
              tmp_remove = new HashSet<String>(Math.max(0, 2*_set64.size));
              for (int _i65 = 0; 
                   (_set64.size < 0) ? iprot.peekSet() : (_i65 < _set64.size); 
                   ++_i65)
              {
                String _elem66;
                _elem66 = iprot.readString();
                tmp_remove.add(_elem66);
              }
              iprot.readSetEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ADD:
          if (__field.type == TType.SET) {
            {
              TSet _set67 = iprot.readSetBegin();
              tmp_add = new HashSet<String>(Math.max(0, 2*_set67.size));
              for (int _i68 = 0; 
                   (_set67.size < 0) ? iprot.peekSet() : (_i68 < _set67.size); 
                   ++_i68)
              {
                String _elem69;
                _elem69 = iprot.readString();
                tmp_add.add(_elem69);
              }
              iprot.readSetEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    MyStructField27Patch _that;
    _that = new MyStructField27Patch(
      tmp_assign
      ,tmp_clear
      ,tmp_remove
      ,tmp_add
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.assign != null) {
      if (isSetAssign()) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        {
          oprot.writeSetBegin(new TSet(TType.STRING, this.assign.size()));
          for (String _iter70 : this.assign)          {
            oprot.writeString(_iter70);
          }
          oprot.writeSetEnd();
        }
        oprot.writeFieldEnd();
      }
    }
    if (this.clear != null) {
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
    }
    if (this.remove != null) {
      oprot.writeFieldBegin(REMOVE_FIELD_DESC);
      {
        oprot.writeSetBegin(new TSet(TType.STRING, this.remove.size()));
        for (String _iter71 : this.remove)        {
          oprot.writeString(_iter71);
        }
        oprot.writeSetEnd();
      }
      oprot.writeFieldEnd();
    }
    if (this.add != null) {
      oprot.writeFieldBegin(ADD_FIELD_DESC);
      {
        oprot.writeSetBegin(new TSet(TType.STRING, this.add.size()));
        for (String _iter72 : this.add)        {
          oprot.writeString(_iter72);
        }
        oprot.writeSetEnd();
      }
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

