#Adafruit RGB LCD Shield

ThingML component wrapping the [Adafruit RGB LCD](https://www.adafruit.com/products/714) shield for Arduino.

##API
```
//Sends
	message button_press(but_id : UInt8);
	message button_release(but_id : UInt8);
	message button_long_press(but_id : UInt8);
	
//Receives
	message set_bgcolor(color : UInt8);
	message print_str(msg: String);
	message print_dec(num: Double);
    	message print_num(num: Integer);
	message clear();
	message set_cursor(c : UInt8, l : UInt8);

```

##Examples

See ./examples/testRGBLCD_shield.thingml

##Dependancies

Adafruit library [Adafruit_RGBLCDShield](https://github.com/adafruit/Adafruit-RGB-LCD-Shield-Library) 
