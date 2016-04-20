/**
 * File generated by the ThingML IDE
 * /!\Do not edit this file/!\
 * In case of a bug in the generated code,
 * please submit an issue on our GitHub
 **/

package org.thingml.generated.messages;

import org.thingml.java.*;
import org.thingml.java.ext.*;

import org.thingml.generated.api.*;
import java.util.*;
import java.nio.*;

public class Button_pressMessageType extends EventType {
public Button_pressMessageType(short code) {super("button_press", code);
}

public Button_pressMessageType() {
super("button_press", (short) 0);
}

public Event instantiate(final byte but_id) { return new Button_pressMessage(this, but_id); }
@Override
public Event instantiate(Map<String, Object> params) {return instantiate((Byte) params.get("but_id"));
}

/**Instantiates a message from a binary representation*/
@Override
public Event instantiate(byte[] payload, String serialization) {
if (serialization == null || serialization.equals("default")) {
ByteBuffer buffer = ByteBuffer.wrap(payload);
buffer.order(ByteOrder.BIG_ENDIAN);
final short code = buffer.getShort();
if (code == this.code) {
final byte but_id = buffer.get();
return instantiate(but_id);
}
return null;
}
//Do NOT remove following comment. Might be used by a serialization plugin
/*BINARY_LOAD*/
return null;
}

/**Instantiates a message from a string representation*/
@Override
public Event instantiate(String payload, String serialization) {
if (serialization == null || serialization.equals("default")) {
final String[] msg = payload.trim().replace(" ", "").replace("\t", "").replace("\n", "").replace("\"", "").replace(")", "").split("[(:,]+");
return parse(msg);
} else if (serialization.equals("json-default")) {
final String[] msg = payload.trim().replace(" ", "").replace("\t", "").replace("\n", "").replace("\"", "").replace("{", "").replace("}", "").split("[:,]+");
return parse(msg);
}
//Do NOT remove following comment. Might be used by a serialization plugin
/*STRING_LOAD*/
return null;
}

private Event parse(String[] msg) {
if (msg.length != 3)
return null;
if ("button_press".equals(msg[0])) {
if ("but_id".equals(msg[1])) {
final byte but_id = Byte.parseByte(msg[2]);
return instantiate(but_id);
}
}
return null;
}

public class Button_pressMessage extends Event implements java.io.Serializable {

public final byte but_id;
@Override
public String toString(){
return "button_press (" + "but_id: " + but_id + ")";
}

protected Button_pressMessage(EventType type, final byte but_id) {
super(type);
this.but_id = but_id;
}
@Override
public Event clone() {
return instantiate(this.but_id);
}/**Serializes a message into a string*/
@Override
public String toString(String serialization) {
if (serialization == null || serialization.equals("default")) {
return toString();
} else if (serialization.equals("json-default")) {return "{\"button_press\":{\"but_id\":" + but_id + "}}";
}
//Do NOT remove following comment. Might be used by a serialization plugin
/*STRING_SAVE*/
return null;
}

/**Serializes a message into a binary format*/
@Override
public byte[] toBytes(String serialization) {
if (serialization == null || serialization.equals("default")) {
ByteBuffer buffer = ByteBuffer.allocate(3);
buffer.order(ByteOrder.BIG_ENDIAN);
buffer.putShort(code);
buffer.put(but_id);
return buffer.array();
}
//Do NOT remove following comment. Might be used by a serialization plugin
/*BINARY_SAVE*/
return null;
}

}

}

