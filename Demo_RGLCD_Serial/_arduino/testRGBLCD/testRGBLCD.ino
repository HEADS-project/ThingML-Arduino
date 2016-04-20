/*****************************************************************************
 * Headers for type : ArduinoSketch
 *****************************************************************************/


// BEGIN: Code from the c_header annotation ArduinoSketch

#define OFF 0x0
#define RED 0x1
#define YELLOW 0x3
#define GREEN 0x2
#define TEAL 0x6
#define BLUE 0x4
#define VIOLET 0x5
#define WHITE 0x7

#define SELECT 0x0
#define RIGHT 0x1
#define DOWN 0x2
#define UP 0x3
#define LEFT 0x4

// END: Code from the c_header annotation ArduinoSketch

// Definition of the instance stuct:
struct ArduinoSketch_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_buttons;
uint16_t id_lcd;
// Variables for the current instance state
int ArduinoSketch_ArduinoSketchStateChart_State;
// Variables for the properties of the instance
uint8_t ArduinoSketch_ArduinoSketchStateChart_ON_color__var;

};
// Declaration of prototypes outgoing messages:
void ArduinoSketch_ArduinoSketchStateChart_OnEntry(int state, struct ArduinoSketch_Instance *_instance);
void ArduinoSketch_handle_buttons_button_long_press(struct ArduinoSketch_Instance *_instance, uint8_t but_id);
void ArduinoSketch_handle_buttons_button_release(struct ArduinoSketch_Instance *_instance, uint8_t but_id);
void ArduinoSketch_handle_buttons_button_press(struct ArduinoSketch_Instance *_instance, uint8_t but_id);
// Declaration of callbacks for incoming messages:
void register_ArduinoSketch_send_lcd_print_num_listener(void (*_listener)(struct ArduinoSketch_Instance *, int16_t));
void register_external_ArduinoSketch_send_lcd_print_num_listener(void (*_listener)(struct ArduinoSketch_Instance *, int16_t));
void register_ArduinoSketch_send_lcd_print_dec_listener(void (*_listener)(struct ArduinoSketch_Instance *, double));
void register_external_ArduinoSketch_send_lcd_print_dec_listener(void (*_listener)(struct ArduinoSketch_Instance *, double));
void register_ArduinoSketch_send_lcd_print_str_listener(void (*_listener)(struct ArduinoSketch_Instance *, char *));
void register_external_ArduinoSketch_send_lcd_print_str_listener(void (*_listener)(struct ArduinoSketch_Instance *, char *));
void register_ArduinoSketch_send_lcd_clear_listener(void (*_listener)(struct ArduinoSketch_Instance *));
void register_external_ArduinoSketch_send_lcd_clear_listener(void (*_listener)(struct ArduinoSketch_Instance *));
void register_ArduinoSketch_send_lcd_set_cursor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t, uint8_t));
void register_external_ArduinoSketch_send_lcd_set_cursor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t, uint8_t));
void register_ArduinoSketch_send_lcd_set_bgcolor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t));
void register_external_ArduinoSketch_send_lcd_set_bgcolor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t));

// Definition of the states:
#define ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_STATE 0
#define ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE 1
#define ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE 2


/* Adds and instance to the runtime and returns its id */
uint16_t add_instance(void * instance_struct);
/* Returns the instance with id */
void * instance_by_id(uint16_t id);

/* Returns the number of byte currently in the fifo */
int fifo_byte_length();
/* Returns the number of bytes currently available in the fifo */
int fifo_byte_available();
/* Returns true if the fifo is empty */
int fifo_empty();
/* Return true if the fifo is full */
int fifo_full();
/* Enqueue 1 byte in the fifo if there is space
   returns 1 for sucess and 0 if the fifo was full */
int fifo_enqueue(byte b);
/* Enqueue 1 byte in the fifo without checking for available space
   The caller should have checked that there is enough space */
int _fifo_enqueue(byte b);
/* Dequeue 1 byte in the fifo.
   The caller should check that the fifo is not empty */
byte fifo_dequeue();
/*****************************************************************************
 * Headers for type : Multiplexer
 *****************************************************************************/

// Definition of the instance stuct:
struct Multiplexer_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_netIO;
uint16_t id_buttons;
uint16_t id_lcd;
// Variables for the current instance state
int Multiplexer_myChart_State;
// Variables for the properties of the instance

};
// Declaration of prototypes outgoing messages:
void Multiplexer_myChart_OnEntry(int state, struct Multiplexer_Instance *_instance);
void Multiplexer_handle_buttons_button_long_press(struct Multiplexer_Instance *_instance, uint8_t but_id);
void Multiplexer_handle_buttons_button_release(struct Multiplexer_Instance *_instance, uint8_t but_id);
void Multiplexer_handle_buttons_button_press(struct Multiplexer_Instance *_instance, uint8_t but_id);
void Multiplexer_handle_netIO_set_bgcolor(struct Multiplexer_Instance *_instance, uint8_t color);
// Declaration of callbacks for incoming messages:
void register_Multiplexer_send_netIO_button_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));
void register_external_Multiplexer_send_netIO_button_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));
void register_Multiplexer_send_netIO_button_release_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));
void register_external_Multiplexer_send_netIO_button_release_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));
void register_Multiplexer_send_netIO_button_long_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));
void register_external_Multiplexer_send_netIO_button_long_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));
void register_Multiplexer_send_lcd_print_num_listener(void (*_listener)(struct Multiplexer_Instance *, int16_t));
void register_external_Multiplexer_send_lcd_print_num_listener(void (*_listener)(struct Multiplexer_Instance *, int16_t));
void register_Multiplexer_send_lcd_print_dec_listener(void (*_listener)(struct Multiplexer_Instance *, double));
void register_external_Multiplexer_send_lcd_print_dec_listener(void (*_listener)(struct Multiplexer_Instance *, double));
void register_Multiplexer_send_lcd_print_str_listener(void (*_listener)(struct Multiplexer_Instance *, char *));
void register_external_Multiplexer_send_lcd_print_str_listener(void (*_listener)(struct Multiplexer_Instance *, char *));
void register_Multiplexer_send_lcd_clear_listener(void (*_listener)(struct Multiplexer_Instance *));
void register_external_Multiplexer_send_lcd_clear_listener(void (*_listener)(struct Multiplexer_Instance *));
void register_Multiplexer_send_lcd_set_cursor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t, uint8_t));
void register_external_Multiplexer_send_lcd_set_cursor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t, uint8_t));
void register_Multiplexer_send_lcd_set_bgcolor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));
void register_external_Multiplexer_send_lcd_set_bgcolor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t));

// Definition of the states:
#define MULTIPLEXER_MYCHART_STATE 0
#define MULTIPLEXER_MYCHART_ACTIVE_STATE 1


/*****************************************************/
//                    Serial
/*****************************************************/

void Serial_setup();

void Serial_set_listener_id(uint16_t id);

void Serial_forwardMessage(byte * msg, uint8_t size);

void Serial_read();

/********************* FORWARDERS *********************/

/*FORWARDERS*/// Forwarding of messages Serial::Multiplexer::netIO::button_release
void forward_Serial_Multiplexer_send_netIO_button_release(struct Multiplexer_Instance *_instance, uint8_t but_id);
// Forwarding of messages Serial::Multiplexer::netIO::button_press
void forward_Serial_Multiplexer_send_netIO_button_press(struct Multiplexer_Instance *_instance, uint8_t but_id);
// Forwarding of messages Serial::Multiplexer::netIO::button_long_press
void forward_Serial_Multiplexer_send_netIO_button_long_press(struct Multiplexer_Instance *_instance, uint8_t but_id);
//timer2

/*****************************************************************************
 * Headers for type : Adafruit_RGBLCDShield
 *****************************************************************************/


// BEGIN: Code from the c_header annotation Adafruit_RGBLCDShield

#include <Wire.h>
#include <Adafruit_RGBLCDShield.h>
#include <utility/Adafruit_MCP23017.h>

// END: Code from the c_header annotation Adafruit_RGBLCDShield

// Definition of the instance stuct:
struct Adafruit_RGBLCDShield_Instance {
// Variables for the ID of the ports of the instance
uint16_t id_clock;
uint16_t id_buttons;
uint16_t id_lcd;
// Variables for the current instance state
int Adafruit_RGBLCDShield_RGBLCDShieldSM_State;
// Variables for the properties of the instance
uint8_t * Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var;
uint8_t * Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var;

};
// Declaration of prototypes outgoing messages:
void Adafruit_RGBLCDShield_RGBLCDShieldSM_OnEntry(int state, struct Adafruit_RGBLCDShield_Instance *_instance);
void Adafruit_RGBLCDShield_handle_lcd_set_bgcolor(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t color);
void Adafruit_RGBLCDShield_handle_lcd_print_str(struct Adafruit_RGBLCDShield_Instance *_instance, char * msg);
void Adafruit_RGBLCDShield_handle_lcd_clear(struct Adafruit_RGBLCDShield_Instance *_instance);
void Adafruit_RGBLCDShield_handle_lcd_print_num(struct Adafruit_RGBLCDShield_Instance *_instance, int16_t num);
void Adafruit_RGBLCDShield_handle_lcd_set_cursor(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t c, uint8_t l);
void Adafruit_RGBLCDShield_handle_lcd_print_dec(struct Adafruit_RGBLCDShield_Instance *_instance, double num);
void Adafruit_RGBLCDShield_handle_clock_4ms_tick(struct Adafruit_RGBLCDShield_Instance *_instance);
// Declaration of callbacks for incoming messages:
void register_Adafruit_RGBLCDShield_send_buttons_button_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t));
void register_external_Adafruit_RGBLCDShield_send_buttons_button_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t));
void register_Adafruit_RGBLCDShield_send_buttons_button_release_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t));
void register_external_Adafruit_RGBLCDShield_send_buttons_button_release_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t));
void register_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t));
void register_external_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t));

// Definition of the states:
#define ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_STATE 0
#define ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE 1


/*****************************************************************************
 * Implementation for type : ArduinoSketch
 *****************************************************************************/

// Declaration of prototypes:
void ArduinoSketch_ArduinoSketchStateChart_OnExit(int state, struct ArduinoSketch_Instance *_instance);
// Declaration of functions:

// On Entry Actions:
void ArduinoSketch_ArduinoSketchStateChart_OnEntry(int state, struct ArduinoSketch_Instance *_instance) {
switch(state) {
case ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_STATE:
_instance->ArduinoSketch_ArduinoSketchStateChart_State = ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE;
ArduinoSketch_ArduinoSketchStateChart_OnEntry(_instance->ArduinoSketch_ArduinoSketchStateChart_State, _instance);
break;
case ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE:
ArduinoSketch_send_lcd_clear(_instance);
ArduinoSketch_send_lcd_print_str(_instance, "*ThingML Events*");
ArduinoSketch_send_lcd_set_bgcolor(_instance, OFF);
ArduinoSketch_send_lcd_set_cursor(_instance, 0, 1);
ArduinoSketch_send_lcd_print_str(_instance, "ON: Hold Select");
break;
case ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE:
ArduinoSketch_send_lcd_set_bgcolor(_instance, _instance->ArduinoSketch_ArduinoSketchStateChart_ON_color__var);
ArduinoSketch_send_lcd_clear(_instance);
ArduinoSketch_send_lcd_print_str(_instance, "OFF: Hold Select");
break;
default: break;
}
}

// On Exit Actions:
void ArduinoSketch_ArduinoSketchStateChart_OnExit(int state, struct ArduinoSketch_Instance *_instance) {
switch(state) {
case ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_STATE:
ArduinoSketch_ArduinoSketchStateChart_OnExit(_instance->ArduinoSketch_ArduinoSketchStateChart_State, _instance);
break;
case ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE:
break;
case ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void ArduinoSketch_handle_buttons_button_long_press(struct ArduinoSketch_Instance *_instance, uint8_t but_id) {
uint8_t ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 0;
if (_instance->ArduinoSketch_ArduinoSketchStateChart_State == ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE) {
if (ArduinoSketch_ArduinoSketchStateChart_State_event_consumed == 0 && but_id == SELECT) {
ArduinoSketch_ArduinoSketchStateChart_OnExit(ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE, _instance);
_instance->ArduinoSketch_ArduinoSketchStateChart_State = ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE;
ArduinoSketch_ArduinoSketchStateChart_OnEntry(ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE, _instance);
ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 1;
}
}
else if (_instance->ArduinoSketch_ArduinoSketchStateChart_State == ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE) {
if (ArduinoSketch_ArduinoSketchStateChart_State_event_consumed == 0 && but_id == SELECT) {
ArduinoSketch_ArduinoSketchStateChart_OnExit(ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE, _instance);
_instance->ArduinoSketch_ArduinoSketchStateChart_State = ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE;
ArduinoSketch_ArduinoSketchStateChart_OnEntry(ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE, _instance);
ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 1;
}
else if (ArduinoSketch_ArduinoSketchStateChart_State_event_consumed == 0 &&  !((but_id == SELECT))) {
ArduinoSketch_send_lcd_set_cursor(_instance, 0, 1);
ArduinoSketch_send_lcd_print_str(_instance, "BUT:");
ArduinoSketch_send_lcd_print_num(_instance, but_id);
ArduinoSketch_send_lcd_print_str(_instance, " <L PRESS> ");
ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 1;
}
}
}
void ArduinoSketch_handle_buttons_button_release(struct ArduinoSketch_Instance *_instance, uint8_t but_id) {
uint8_t ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 0;
if (_instance->ArduinoSketch_ArduinoSketchStateChart_State == ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE) {
if (ArduinoSketch_ArduinoSketchStateChart_State_event_consumed == 0 && 1) {
ArduinoSketch_send_lcd_set_cursor(_instance, 0, 1);
ArduinoSketch_send_lcd_print_str(_instance, "BUT:");
ArduinoSketch_send_lcd_print_num(_instance, but_id);
ArduinoSketch_send_lcd_print_str(_instance, " <RELEASE> ");
ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 1;
}
}
}
void ArduinoSketch_handle_buttons_button_press(struct ArduinoSketch_Instance *_instance, uint8_t but_id) {
uint8_t ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 0;
if (_instance->ArduinoSketch_ArduinoSketchStateChart_State == ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_ON_STATE) {
if (ArduinoSketch_ArduinoSketchStateChart_State_event_consumed == 0 && 1) {
ArduinoSketch_send_lcd_set_cursor(_instance, 0, 1);
ArduinoSketch_send_lcd_print_str(_instance, "BUT:");
ArduinoSketch_send_lcd_print_num(_instance, but_id);
ArduinoSketch_send_lcd_print_str(_instance, "  <PRESS>  ");
ArduinoSketch_ArduinoSketchStateChart_State_event_consumed = 1;
}
}
}

// Observers for outgoing messages:
void (*external_ArduinoSketch_send_lcd_print_num_listener)(struct ArduinoSketch_Instance *, int16_t)= 0x0;
void (*ArduinoSketch_send_lcd_print_num_listener)(struct ArduinoSketch_Instance *, int16_t)= 0x0;
void register_external_ArduinoSketch_send_lcd_print_num_listener(void (*_listener)(struct ArduinoSketch_Instance *, int16_t)){
external_ArduinoSketch_send_lcd_print_num_listener = _listener;
}
void register_ArduinoSketch_send_lcd_print_num_listener(void (*_listener)(struct ArduinoSketch_Instance *, int16_t)){
ArduinoSketch_send_lcd_print_num_listener = _listener;
}
void ArduinoSketch_send_lcd_print_num(struct ArduinoSketch_Instance *_instance, int16_t num){
if (ArduinoSketch_send_lcd_print_num_listener != 0x0) ArduinoSketch_send_lcd_print_num_listener(_instance, num);
if (external_ArduinoSketch_send_lcd_print_num_listener != 0x0) external_ArduinoSketch_send_lcd_print_num_listener(_instance, num);
;
}
void (*external_ArduinoSketch_send_lcd_print_dec_listener)(struct ArduinoSketch_Instance *, double)= 0x0;
void (*ArduinoSketch_send_lcd_print_dec_listener)(struct ArduinoSketch_Instance *, double)= 0x0;
void register_external_ArduinoSketch_send_lcd_print_dec_listener(void (*_listener)(struct ArduinoSketch_Instance *, double)){
external_ArduinoSketch_send_lcd_print_dec_listener = _listener;
}
void register_ArduinoSketch_send_lcd_print_dec_listener(void (*_listener)(struct ArduinoSketch_Instance *, double)){
ArduinoSketch_send_lcd_print_dec_listener = _listener;
}
void ArduinoSketch_send_lcd_print_dec(struct ArduinoSketch_Instance *_instance, double num){
if (ArduinoSketch_send_lcd_print_dec_listener != 0x0) ArduinoSketch_send_lcd_print_dec_listener(_instance, num);
if (external_ArduinoSketch_send_lcd_print_dec_listener != 0x0) external_ArduinoSketch_send_lcd_print_dec_listener(_instance, num);
;
}
void (*external_ArduinoSketch_send_lcd_print_str_listener)(struct ArduinoSketch_Instance *, char *)= 0x0;
void (*ArduinoSketch_send_lcd_print_str_listener)(struct ArduinoSketch_Instance *, char *)= 0x0;
void register_external_ArduinoSketch_send_lcd_print_str_listener(void (*_listener)(struct ArduinoSketch_Instance *, char *)){
external_ArduinoSketch_send_lcd_print_str_listener = _listener;
}
void register_ArduinoSketch_send_lcd_print_str_listener(void (*_listener)(struct ArduinoSketch_Instance *, char *)){
ArduinoSketch_send_lcd_print_str_listener = _listener;
}
void ArduinoSketch_send_lcd_print_str(struct ArduinoSketch_Instance *_instance, char * msg){
if (ArduinoSketch_send_lcd_print_str_listener != 0x0) ArduinoSketch_send_lcd_print_str_listener(_instance, msg);
if (external_ArduinoSketch_send_lcd_print_str_listener != 0x0) external_ArduinoSketch_send_lcd_print_str_listener(_instance, msg);
;
}
void (*external_ArduinoSketch_send_lcd_clear_listener)(struct ArduinoSketch_Instance *)= 0x0;
void (*ArduinoSketch_send_lcd_clear_listener)(struct ArduinoSketch_Instance *)= 0x0;
void register_external_ArduinoSketch_send_lcd_clear_listener(void (*_listener)(struct ArduinoSketch_Instance *)){
external_ArduinoSketch_send_lcd_clear_listener = _listener;
}
void register_ArduinoSketch_send_lcd_clear_listener(void (*_listener)(struct ArduinoSketch_Instance *)){
ArduinoSketch_send_lcd_clear_listener = _listener;
}
void ArduinoSketch_send_lcd_clear(struct ArduinoSketch_Instance *_instance){
if (ArduinoSketch_send_lcd_clear_listener != 0x0) ArduinoSketch_send_lcd_clear_listener(_instance);
if (external_ArduinoSketch_send_lcd_clear_listener != 0x0) external_ArduinoSketch_send_lcd_clear_listener(_instance);
;
}
void (*external_ArduinoSketch_send_lcd_set_cursor_listener)(struct ArduinoSketch_Instance *, uint8_t, uint8_t)= 0x0;
void (*ArduinoSketch_send_lcd_set_cursor_listener)(struct ArduinoSketch_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_ArduinoSketch_send_lcd_set_cursor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t, uint8_t)){
external_ArduinoSketch_send_lcd_set_cursor_listener = _listener;
}
void register_ArduinoSketch_send_lcd_set_cursor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t, uint8_t)){
ArduinoSketch_send_lcd_set_cursor_listener = _listener;
}
void ArduinoSketch_send_lcd_set_cursor(struct ArduinoSketch_Instance *_instance, uint8_t c, uint8_t l){
if (ArduinoSketch_send_lcd_set_cursor_listener != 0x0) ArduinoSketch_send_lcd_set_cursor_listener(_instance, c, l);
if (external_ArduinoSketch_send_lcd_set_cursor_listener != 0x0) external_ArduinoSketch_send_lcd_set_cursor_listener(_instance, c, l);
;
}
void (*external_ArduinoSketch_send_lcd_set_bgcolor_listener)(struct ArduinoSketch_Instance *, uint8_t)= 0x0;
void (*ArduinoSketch_send_lcd_set_bgcolor_listener)(struct ArduinoSketch_Instance *, uint8_t)= 0x0;
void register_external_ArduinoSketch_send_lcd_set_bgcolor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t)){
external_ArduinoSketch_send_lcd_set_bgcolor_listener = _listener;
}
void register_ArduinoSketch_send_lcd_set_bgcolor_listener(void (*_listener)(struct ArduinoSketch_Instance *, uint8_t)){
ArduinoSketch_send_lcd_set_bgcolor_listener = _listener;
}
void ArduinoSketch_send_lcd_set_bgcolor(struct ArduinoSketch_Instance *_instance, uint8_t color){
if (ArduinoSketch_send_lcd_set_bgcolor_listener != 0x0) ArduinoSketch_send_lcd_set_bgcolor_listener(_instance, color);
if (external_ArduinoSketch_send_lcd_set_bgcolor_listener != 0x0) external_ArduinoSketch_send_lcd_set_bgcolor_listener(_instance, color);
;
}




#define MAX_INSTANCES 10
#define FIFO_SIZE 256

/*********************************
 * Instance IDs and lookup
 *********************************/

void * instances[MAX_INSTANCES];
uint16_t instances_count = 0;

void * instance_by_id(uint16_t id) {
  return instances[id];
}

uint16_t add_instance(void * instance_struct) {
  instances[instances_count] = instance_struct;
  return instances_count++;
}

/******************************************
 * Simple byte FIFO implementation
 ******************************************/

byte fifo[FIFO_SIZE];
int fifo_head = 0;
int fifo_tail = 0;

// Returns the number of byte currently in the fifo
int fifo_byte_length() {
  if (fifo_tail >= fifo_head)
    return fifo_tail - fifo_head;
  return fifo_tail + FIFO_SIZE - fifo_head;
}

// Returns the number of bytes currently available in the fifo
int fifo_byte_available() {
  return FIFO_SIZE - 1 - fifo_byte_length();
}

// Returns true if the fifo is empty
int fifo_empty() {
  return fifo_head == fifo_tail;
}

// Return true if the fifo is full
int fifo_full() {
  return fifo_head == ((fifo_tail + 1) % FIFO_SIZE);
}

// Enqueue 1 byte in the fifo if there is space
// returns 1 for sucess and 0 if the fifo was full
int fifo_enqueue(byte b) {
  int new_tail = (fifo_tail + 1) % FIFO_SIZE;
  if (new_tail == fifo_head) return 0; // the fifo is full
  fifo[fifo_tail] = b;
  fifo_tail = new_tail;
  return 1;
}

// Enqueue 1 byte in the fifo without checking for available space
// The caller should have checked that there is enough space
int _fifo_enqueue(byte b) {
  fifo[fifo_tail] = b;
  fifo_tail = (fifo_tail + 1) % FIFO_SIZE;
}

// Dequeue 1 byte in the fifo.
// The caller should check that the fifo is not empty
byte fifo_dequeue() {
  if (!fifo_empty()) {
    byte result = fifo[fifo_head];
    fifo_head = (fifo_head + 1) % FIFO_SIZE;
    return result;
  }
  return 0;
}

/*****************************************************************************
 * Implementation for type : Adafruit_RGBLCDShield
 *****************************************************************************/


// BEGIN: Code from the c_global annotation Adafruit_RGBLCDShield

Adafruit_RGBLCDShield rgblcd = Adafruit_RGBLCDShield();

// END: Code from the c_global annotation Adafruit_RGBLCDShield

// Declaration of prototypes:
void Adafruit_RGBLCDShield_RGBLCDShieldSM_OnExit(int state, struct Adafruit_RGBLCDShield_Instance *_instance);
void Adafruit_RGBLCDShield_send_buttons_button_press(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id);
void Adafruit_RGBLCDShield_send_buttons_button_release(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id);
void Adafruit_RGBLCDShield_send_buttons_button_long_press(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id);
// Declaration of functions:

// On Entry Actions:
void Adafruit_RGBLCDShield_RGBLCDShieldSM_OnEntry(int state, struct Adafruit_RGBLCDShield_Instance *_instance) {
switch(state) {
case ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_STATE:
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_State = ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE;
rgblcd.begin(16, 2);
rgblcd.setBacklight(0);
Adafruit_RGBLCDShield_RGBLCDShieldSM_OnEntry(_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_State, _instance);
break;
case ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE:
break;
default: break;
}
}

// On Exit Actions:
void Adafruit_RGBLCDShield_RGBLCDShieldSM_OnExit(int state, struct Adafruit_RGBLCDShield_Instance *_instance) {
switch(state) {
case ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_STATE:
Adafruit_RGBLCDShield_RGBLCDShieldSM_OnExit(_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_State, _instance);
break;
case ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void Adafruit_RGBLCDShield_handle_lcd_set_bgcolor(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t color) {
uint8_t Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 0;
if (1) {
rgblcd.setBacklight(color);
Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 1;
}
}
void Adafruit_RGBLCDShield_handle_lcd_print_str(struct Adafruit_RGBLCDShield_Instance *_instance, char * msg) {
uint8_t Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 0;
if (1) {
rgblcd.print(msg);
Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 1;
}
}
void Adafruit_RGBLCDShield_handle_lcd_clear(struct Adafruit_RGBLCDShield_Instance *_instance) {
uint8_t Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 0;
if (1) {
rgblcd.clear();
Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 1;
}
}
void Adafruit_RGBLCDShield_handle_lcd_print_num(struct Adafruit_RGBLCDShield_Instance *_instance, int16_t num) {
uint8_t Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 0;
if (1) {
rgblcd.print(num);
Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 1;
}
}
void Adafruit_RGBLCDShield_handle_lcd_set_cursor(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t c, uint8_t l) {
uint8_t Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 0;
if (1) {
rgblcd.setCursor(c, l);
Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 1;
}
}
void Adafruit_RGBLCDShield_handle_lcd_print_dec(struct Adafruit_RGBLCDShield_Instance *_instance, double num) {
uint8_t Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 0;
if (1) {
rgblcd.print(num);
Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 1;
}
}
void Adafruit_RGBLCDShield_handle_clock_4ms_tick(struct Adafruit_RGBLCDShield_Instance *_instance) {
uint8_t Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 0;
if (_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_State == ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE) {
if (Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed == 0 && 1) {
;uint8_t button = 0;
while(button < 5) {
if(_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button]
 > 0) {
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var[button] = _instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var[button]
 + 1;

}
button = button + 1;

}
Adafruit_RGBLCDShield_RGBLCDShieldSM_State_event_consumed = 1;
}
}
}
int Adafruit_RGBLCDShield_handle_empty_event(struct Adafruit_RGBLCDShield_Instance *_instance) {
if (_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_State == ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE) {
if (1) {
Adafruit_RGBLCDShield_RGBLCDShieldSM_OnExit(ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE, _instance);
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_State = ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE;
;uint8_t buttons = rgblcd.readButtons();
;uint8_t button = 0;
while(button < 5) {
;uint8_t pressed = (1 << button) & buttons;
if(pressed) {
if(_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button]
 == 0) {
Adafruit_RGBLCDShield_send_buttons_button_press(_instance, button);
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var[button] = 0;

}
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button] = 1;
if(_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var[button]
 > 250) {
Adafruit_RGBLCDShield_send_buttons_button_long_press(_instance, button);
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var[button] = 0;

}

}
if( !(pressed)) {
if(_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button]
 > 0) {
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button] = _instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button]
 + 1;

}
if(_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button]
 > 6) {
Adafruit_RGBLCDShield_send_buttons_button_release(_instance, button);
_instance->Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[button] = 0;

}

}
button = button + 1;

}
Adafruit_RGBLCDShield_RGBLCDShieldSM_OnEntry(ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE, _instance);
return 1;
}
}
return 0;
}

// Observers for outgoing messages:
void (*external_Adafruit_RGBLCDShield_send_buttons_button_press_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)= 0x0;
void (*Adafruit_RGBLCDShield_send_buttons_button_press_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)= 0x0;
void register_external_Adafruit_RGBLCDShield_send_buttons_button_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)){
external_Adafruit_RGBLCDShield_send_buttons_button_press_listener = _listener;
}
void register_Adafruit_RGBLCDShield_send_buttons_button_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)){
Adafruit_RGBLCDShield_send_buttons_button_press_listener = _listener;
}
void Adafruit_RGBLCDShield_send_buttons_button_press(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id){
if (Adafruit_RGBLCDShield_send_buttons_button_press_listener != 0x0) Adafruit_RGBLCDShield_send_buttons_button_press_listener(_instance, but_id);
if (external_Adafruit_RGBLCDShield_send_buttons_button_press_listener != 0x0) external_Adafruit_RGBLCDShield_send_buttons_button_press_listener(_instance, but_id);
;
}
void (*external_Adafruit_RGBLCDShield_send_buttons_button_release_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)= 0x0;
void (*Adafruit_RGBLCDShield_send_buttons_button_release_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)= 0x0;
void register_external_Adafruit_RGBLCDShield_send_buttons_button_release_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)){
external_Adafruit_RGBLCDShield_send_buttons_button_release_listener = _listener;
}
void register_Adafruit_RGBLCDShield_send_buttons_button_release_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)){
Adafruit_RGBLCDShield_send_buttons_button_release_listener = _listener;
}
void Adafruit_RGBLCDShield_send_buttons_button_release(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id){
if (Adafruit_RGBLCDShield_send_buttons_button_release_listener != 0x0) Adafruit_RGBLCDShield_send_buttons_button_release_listener(_instance, but_id);
if (external_Adafruit_RGBLCDShield_send_buttons_button_release_listener != 0x0) external_Adafruit_RGBLCDShield_send_buttons_button_release_listener(_instance, but_id);
;
}
void (*external_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)= 0x0;
void (*Adafruit_RGBLCDShield_send_buttons_button_long_press_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)= 0x0;
void register_external_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)){
external_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener = _listener;
}
void register_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener(void (*_listener)(struct Adafruit_RGBLCDShield_Instance *, uint8_t)){
Adafruit_RGBLCDShield_send_buttons_button_long_press_listener = _listener;
}
void Adafruit_RGBLCDShield_send_buttons_button_long_press(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id){
if (Adafruit_RGBLCDShield_send_buttons_button_long_press_listener != 0x0) Adafruit_RGBLCDShield_send_buttons_button_long_press_listener(_instance, but_id);
if (external_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener != 0x0) external_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener(_instance, but_id);
;
}



#define timer2_NB_SOFT_TIMER 4
uint32_t timer2_timer[timer2_NB_SOFT_TIMER];
uint32_t  timer2_prev_1sec = 0;

uint8_t timer2_interrupt_counter = 0;
SIGNAL(TIMER2_OVF_vect) {
TCNT2 = 5;
timer2_interrupt_counter++;
if((timer2_interrupt_counter % 4) == 0) {
timer2_4ms_tic();
}
if(timer2_interrupt_counter >= 4) {
timer2_interrupt_counter = 0;
}
}



struct timer2_instance_type {
    uint16_t listener_id;
    /*INSTANCE_INFORMATION*/
} timer2_instance;

void timer2_setup() {
	// Run timer2 interrupt up counting at 250kHz 
		 TCCR2A = 0;
		 TCCR2B = 1<<CS22 | 0<<CS21 | 0<<CS20;
		
		 //Timer2 Overflow Interrupt Enable
		 TIMSK2 |= 1<<TOIE2;


	timer2_prev_1sec = millis() + 1000;
}

void timer2_set_listener_id(uint16_t id) {
	timer2_instance.listener_id = id;
}

void timer2_4ms_tic() {
{
uint8_t enqueue_buf[2];
enqueue_buf[0] = (100 >> 8) & 0xFF;
enqueue_buf[1] = 100 & 0xFF;
externalMessageEnqueue(enqueue_buf, 2, timer2_instance.listener_id);
}
}





void timer2_read() {
	uint32_t tms = millis();
	
	if (timer2_prev_1sec < tms) {
		timer2_prev_1sec += 1000;
	}
}
/*****************************************************************************
 * Implementation for type : Multiplexer
 *****************************************************************************/

// Declaration of prototypes:
void Multiplexer_myChart_OnExit(int state, struct Multiplexer_Instance *_instance);
void Multiplexer_send_netIO_button_press(struct Multiplexer_Instance *_instance, uint8_t but_id);
void Multiplexer_send_netIO_button_release(struct Multiplexer_Instance *_instance, uint8_t but_id);
void Multiplexer_send_netIO_button_long_press(struct Multiplexer_Instance *_instance, uint8_t but_id);
// Declaration of functions:

// On Entry Actions:
void Multiplexer_myChart_OnEntry(int state, struct Multiplexer_Instance *_instance) {
switch(state) {
case MULTIPLEXER_MYCHART_STATE:
_instance->Multiplexer_myChart_State = MULTIPLEXER_MYCHART_ACTIVE_STATE;
Multiplexer_myChart_OnEntry(_instance->Multiplexer_myChart_State, _instance);
break;
case MULTIPLEXER_MYCHART_ACTIVE_STATE:
break;
default: break;
}
}

// On Exit Actions:
void Multiplexer_myChart_OnExit(int state, struct Multiplexer_Instance *_instance) {
switch(state) {
case MULTIPLEXER_MYCHART_STATE:
Multiplexer_myChart_OnExit(_instance->Multiplexer_myChart_State, _instance);
break;
case MULTIPLEXER_MYCHART_ACTIVE_STATE:
break;
default: break;
}
}

// Event Handlers for incoming messages:
void Multiplexer_handle_buttons_button_long_press(struct Multiplexer_Instance *_instance, uint8_t but_id) {
uint8_t Multiplexer_myChart_State_event_consumed = 0;
if (_instance->Multiplexer_myChart_State == MULTIPLEXER_MYCHART_ACTIVE_STATE) {
if (Multiplexer_myChart_State_event_consumed == 0 && 1) {
Multiplexer_send_netIO_button_long_press(_instance, but_id);
Multiplexer_myChart_State_event_consumed = 1;
}
}
}
void Multiplexer_handle_buttons_button_release(struct Multiplexer_Instance *_instance, uint8_t but_id) {
uint8_t Multiplexer_myChart_State_event_consumed = 0;
if (_instance->Multiplexer_myChart_State == MULTIPLEXER_MYCHART_ACTIVE_STATE) {
if (Multiplexer_myChart_State_event_consumed == 0 && 1) {
Multiplexer_send_netIO_button_release(_instance, but_id);
Multiplexer_myChart_State_event_consumed = 1;
}
}
}
void Multiplexer_handle_buttons_button_press(struct Multiplexer_Instance *_instance, uint8_t but_id) {
uint8_t Multiplexer_myChart_State_event_consumed = 0;
if (_instance->Multiplexer_myChart_State == MULTIPLEXER_MYCHART_ACTIVE_STATE) {
if (Multiplexer_myChart_State_event_consumed == 0 && 1) {
Multiplexer_send_netIO_button_press(_instance, but_id);
Multiplexer_myChart_State_event_consumed = 1;
}
}
}
void Multiplexer_handle_netIO_set_bgcolor(struct Multiplexer_Instance *_instance, uint8_t color) {
uint8_t Multiplexer_myChart_State_event_consumed = 0;
if (_instance->Multiplexer_myChart_State == MULTIPLEXER_MYCHART_ACTIVE_STATE) {
if (Multiplexer_myChart_State_event_consumed == 0 && 1) {
Multiplexer_send_lcd_set_bgcolor(_instance, color);
Multiplexer_myChart_State_event_consumed = 1;
}
}
}

// Observers for outgoing messages:
void (*external_Multiplexer_send_netIO_button_press_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void (*Multiplexer_send_netIO_button_press_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void register_external_Multiplexer_send_netIO_button_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
external_Multiplexer_send_netIO_button_press_listener = _listener;
}
void register_Multiplexer_send_netIO_button_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
Multiplexer_send_netIO_button_press_listener = _listener;
}
void Multiplexer_send_netIO_button_press(struct Multiplexer_Instance *_instance, uint8_t but_id){
if (Multiplexer_send_netIO_button_press_listener != 0x0) Multiplexer_send_netIO_button_press_listener(_instance, but_id);
if (external_Multiplexer_send_netIO_button_press_listener != 0x0) external_Multiplexer_send_netIO_button_press_listener(_instance, but_id);
;
}
void (*external_Multiplexer_send_netIO_button_release_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void (*Multiplexer_send_netIO_button_release_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void register_external_Multiplexer_send_netIO_button_release_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
external_Multiplexer_send_netIO_button_release_listener = _listener;
}
void register_Multiplexer_send_netIO_button_release_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
Multiplexer_send_netIO_button_release_listener = _listener;
}
void Multiplexer_send_netIO_button_release(struct Multiplexer_Instance *_instance, uint8_t but_id){
if (Multiplexer_send_netIO_button_release_listener != 0x0) Multiplexer_send_netIO_button_release_listener(_instance, but_id);
if (external_Multiplexer_send_netIO_button_release_listener != 0x0) external_Multiplexer_send_netIO_button_release_listener(_instance, but_id);
;
}
void (*external_Multiplexer_send_netIO_button_long_press_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void (*Multiplexer_send_netIO_button_long_press_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void register_external_Multiplexer_send_netIO_button_long_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
external_Multiplexer_send_netIO_button_long_press_listener = _listener;
}
void register_Multiplexer_send_netIO_button_long_press_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
Multiplexer_send_netIO_button_long_press_listener = _listener;
}
void Multiplexer_send_netIO_button_long_press(struct Multiplexer_Instance *_instance, uint8_t but_id){
if (Multiplexer_send_netIO_button_long_press_listener != 0x0) Multiplexer_send_netIO_button_long_press_listener(_instance, but_id);
if (external_Multiplexer_send_netIO_button_long_press_listener != 0x0) external_Multiplexer_send_netIO_button_long_press_listener(_instance, but_id);
;
}
void (*external_Multiplexer_send_lcd_print_num_listener)(struct Multiplexer_Instance *, int16_t)= 0x0;
void (*Multiplexer_send_lcd_print_num_listener)(struct Multiplexer_Instance *, int16_t)= 0x0;
void register_external_Multiplexer_send_lcd_print_num_listener(void (*_listener)(struct Multiplexer_Instance *, int16_t)){
external_Multiplexer_send_lcd_print_num_listener = _listener;
}
void register_Multiplexer_send_lcd_print_num_listener(void (*_listener)(struct Multiplexer_Instance *, int16_t)){
Multiplexer_send_lcd_print_num_listener = _listener;
}
void Multiplexer_send_lcd_print_num(struct Multiplexer_Instance *_instance, int16_t num){
if (Multiplexer_send_lcd_print_num_listener != 0x0) Multiplexer_send_lcd_print_num_listener(_instance, num);
if (external_Multiplexer_send_lcd_print_num_listener != 0x0) external_Multiplexer_send_lcd_print_num_listener(_instance, num);
;
}
void (*external_Multiplexer_send_lcd_print_dec_listener)(struct Multiplexer_Instance *, double)= 0x0;
void (*Multiplexer_send_lcd_print_dec_listener)(struct Multiplexer_Instance *, double)= 0x0;
void register_external_Multiplexer_send_lcd_print_dec_listener(void (*_listener)(struct Multiplexer_Instance *, double)){
external_Multiplexer_send_lcd_print_dec_listener = _listener;
}
void register_Multiplexer_send_lcd_print_dec_listener(void (*_listener)(struct Multiplexer_Instance *, double)){
Multiplexer_send_lcd_print_dec_listener = _listener;
}
void Multiplexer_send_lcd_print_dec(struct Multiplexer_Instance *_instance, double num){
if (Multiplexer_send_lcd_print_dec_listener != 0x0) Multiplexer_send_lcd_print_dec_listener(_instance, num);
if (external_Multiplexer_send_lcd_print_dec_listener != 0x0) external_Multiplexer_send_lcd_print_dec_listener(_instance, num);
;
}
void (*external_Multiplexer_send_lcd_print_str_listener)(struct Multiplexer_Instance *, char *)= 0x0;
void (*Multiplexer_send_lcd_print_str_listener)(struct Multiplexer_Instance *, char *)= 0x0;
void register_external_Multiplexer_send_lcd_print_str_listener(void (*_listener)(struct Multiplexer_Instance *, char *)){
external_Multiplexer_send_lcd_print_str_listener = _listener;
}
void register_Multiplexer_send_lcd_print_str_listener(void (*_listener)(struct Multiplexer_Instance *, char *)){
Multiplexer_send_lcd_print_str_listener = _listener;
}
void Multiplexer_send_lcd_print_str(struct Multiplexer_Instance *_instance, char * msg){
if (Multiplexer_send_lcd_print_str_listener != 0x0) Multiplexer_send_lcd_print_str_listener(_instance, msg);
if (external_Multiplexer_send_lcd_print_str_listener != 0x0) external_Multiplexer_send_lcd_print_str_listener(_instance, msg);
;
}
void (*external_Multiplexer_send_lcd_clear_listener)(struct Multiplexer_Instance *)= 0x0;
void (*Multiplexer_send_lcd_clear_listener)(struct Multiplexer_Instance *)= 0x0;
void register_external_Multiplexer_send_lcd_clear_listener(void (*_listener)(struct Multiplexer_Instance *)){
external_Multiplexer_send_lcd_clear_listener = _listener;
}
void register_Multiplexer_send_lcd_clear_listener(void (*_listener)(struct Multiplexer_Instance *)){
Multiplexer_send_lcd_clear_listener = _listener;
}
void Multiplexer_send_lcd_clear(struct Multiplexer_Instance *_instance){
if (Multiplexer_send_lcd_clear_listener != 0x0) Multiplexer_send_lcd_clear_listener(_instance);
if (external_Multiplexer_send_lcd_clear_listener != 0x0) external_Multiplexer_send_lcd_clear_listener(_instance);
;
}
void (*external_Multiplexer_send_lcd_set_cursor_listener)(struct Multiplexer_Instance *, uint8_t, uint8_t)= 0x0;
void (*Multiplexer_send_lcd_set_cursor_listener)(struct Multiplexer_Instance *, uint8_t, uint8_t)= 0x0;
void register_external_Multiplexer_send_lcd_set_cursor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t, uint8_t)){
external_Multiplexer_send_lcd_set_cursor_listener = _listener;
}
void register_Multiplexer_send_lcd_set_cursor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t, uint8_t)){
Multiplexer_send_lcd_set_cursor_listener = _listener;
}
void Multiplexer_send_lcd_set_cursor(struct Multiplexer_Instance *_instance, uint8_t c, uint8_t l){
if (Multiplexer_send_lcd_set_cursor_listener != 0x0) Multiplexer_send_lcd_set_cursor_listener(_instance, c, l);
if (external_Multiplexer_send_lcd_set_cursor_listener != 0x0) external_Multiplexer_send_lcd_set_cursor_listener(_instance, c, l);
;
}
void (*external_Multiplexer_send_lcd_set_bgcolor_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void (*Multiplexer_send_lcd_set_bgcolor_listener)(struct Multiplexer_Instance *, uint8_t)= 0x0;
void register_external_Multiplexer_send_lcd_set_bgcolor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
external_Multiplexer_send_lcd_set_bgcolor_listener = _listener;
}
void register_Multiplexer_send_lcd_set_bgcolor_listener(void (*_listener)(struct Multiplexer_Instance *, uint8_t)){
Multiplexer_send_lcd_set_bgcolor_listener = _listener;
}
void Multiplexer_send_lcd_set_bgcolor(struct Multiplexer_Instance *_instance, uint8_t color){
if (Multiplexer_send_lcd_set_bgcolor_listener != 0x0) Multiplexer_send_lcd_set_bgcolor_listener(_instance, color);
if (external_Multiplexer_send_lcd_set_bgcolor_listener != 0x0) external_Multiplexer_send_lcd_set_bgcolor_listener(_instance, color);
;
}



/*****************************************************/
//                    Serial
/*****************************************************/

#define Serial_BAUDRATE 115200
#define Serial_MAX_LOOP 6
#define Serial_MAX_MSG_SIZE 3
/*OTHER_VARS*/


#define Serial_LISTENER_STATE_IDLE 0
#define Serial_LISTENER_STATE_READING 1
#define Serial_LISTENER_STATE_ESCAPE 2
#define Serial_LISTENER_STATE_ERROR 3


#define Serial_START_BYTE 18
#define Serial_STOP_BYTE 19
#define Serial_ESCAPE_BYTE 125

struct Serial_instance_type {
    uint16_t listener_id;
    //Connector
} Serial_instance;

int fifo_byte_available();
int _fifo_enqueue(byte b);

void Serial_setup() {
  Serial.begin(Serial_BAUDRATE);
}

void Serial_set_listener_id(uint16_t id) {
  Serial_instance.listener_id = id;
}

void Serial_forwardMessage(byte * msg, uint8_t size) {
  Serial.write(Serial_START_BYTE);
  for(uint8_t i = 0; i < size; i++) {
	if(msg[i] == Serial_ESCAPE_BYTE) {
    	Serial.write(Serial_ESCAPE_BYTE);
	}
    Serial.write(msg[i]);
  }
  Serial.write(Serial_STOP_BYTE);
}

void Serial_parser(byte * msg, uint16_t size) {
externalMessageEnqueue((uint8_t *) msg, size, Serial_instance.listener_id);
}


uint8_t Serial_serialListenerState = 0;
uint8_t Serial_msg_buf[Serial_MAX_MSG_SIZE];
uint16_t Serial_msg_index = 0;
uint8_t Serial_incoming = 0;

void Serial_read() {
  byte limit = 0;
  while ((Serial.available()) && (limit < Serial_MAX_LOOP)) {
   limit++;
    Serial_incoming = Serial.read();
    
    switch(Serial_serialListenerState) {
      case Serial_LISTENER_STATE_IDLE:
        if(Serial_incoming == Serial_START_BYTE) {
          Serial_serialListenerState = Serial_LISTENER_STATE_READING;
          Serial_msg_index = 0;
        }
      break;
      
      case Serial_LISTENER_STATE_READING:
        if (Serial_msg_index > Serial_MAX_MSG_SIZE) {
          Serial_serialListenerState = Serial_LISTENER_STATE_ERROR;
        } else {
          if(Serial_incoming == Serial_STOP_BYTE) {
            Serial_serialListenerState = Serial_LISTENER_STATE_IDLE;
            
            
            Serial_parser(Serial_msg_buf, Serial_msg_index);
            
          } else if (Serial_incoming == Serial_ESCAPE_BYTE) {
            Serial_serialListenerState = Serial_LISTENER_STATE_ESCAPE;
          } else {
            Serial_msg_buf[Serial_msg_index] = Serial_incoming;
            Serial_msg_index++;
          }
        }
      break;
      
      case Serial_LISTENER_STATE_ESCAPE:
        if (Serial_msg_index >= Serial_MAX_MSG_SIZE) {
          Serial_serialListenerState = Serial_LISTENER_STATE_ERROR;
        } else {
          Serial_msg_buf[Serial_msg_index] = Serial_incoming;
          Serial_msg_index++;
          Serial_serialListenerState = Serial_LISTENER_STATE_READING;
        }
      break;
      
      case Serial_LISTENER_STATE_ERROR:
        Serial_serialListenerState = Serial_LISTENER_STATE_IDLE;
        Serial_msg_index = 0;
      break;
    }
  }
  
}

/*FORWARDERS*/// Forwarding of messages Serial::Multiplexer::netIO::button_release
void forward_Serial_Multiplexer_send_netIO_button_release(struct Multiplexer_Instance *_instance, uint8_t but_id){
byte forward_buf[3];
forward_buf[0] = (1 >> 8) & 0xFF;
forward_buf[1] =  1 & 0xFF;


// parameter but_id
union u_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_but_id;
u_but_id.p = but_id;
forward_buf[2] =  (u_but_id.bytebuffer[0] & 0xFF);

//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 3);
}

// Forwarding of messages Serial::Multiplexer::netIO::button_press
void forward_Serial_Multiplexer_send_netIO_button_press(struct Multiplexer_Instance *_instance, uint8_t but_id){
byte forward_buf[3];
forward_buf[0] = (0 >> 8) & 0xFF;
forward_buf[1] =  0 & 0xFF;


// parameter but_id
union u_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_but_id;
u_but_id.p = but_id;
forward_buf[2] =  (u_but_id.bytebuffer[0] & 0xFF);

//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 3);
}

// Forwarding of messages Serial::Multiplexer::netIO::button_long_press
void forward_Serial_Multiplexer_send_netIO_button_long_press(struct Multiplexer_Instance *_instance, uint8_t but_id){
byte forward_buf[3];
forward_buf[0] = (2 >> 8) & 0xFF;
forward_buf[1] =  2 & 0xFF;


// parameter but_id
union u_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_but_id;
u_but_id.p = but_id;
forward_buf[2] =  (u_but_id.bytebuffer[0] & 0xFF);

//Forwarding with specified function 
Serial_forwardMessage(forward_buf, 3);
}




/*****************************************************************************
 * Definitions for configuration : testRGBLCD
 *****************************************************************************/

//Declaration of instance variables
//Instance rgblcd
// Variables for the properties of the instance
uint8_t array_rgblcd_Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var[5];
uint8_t array_rgblcd_Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var[5];
struct Adafruit_RGBLCDShield_Instance rgblcd_var;
//Instance application
// Variables for the properties of the instance
struct ArduinoSketch_Instance application_var;
//Instance mux
// Variables for the properties of the instance
struct Multiplexer_Instance mux_var;

// Enqueue of messages Adafruit_RGBLCDShield::buttons::button_long_press
void enqueue_Adafruit_RGBLCDShield_send_buttons_button_long_press(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (2 >> 8) & 0xFF );
_fifo_enqueue( 2 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_buttons >> 8) & 0xFF );
_fifo_enqueue( _instance->id_buttons & 0xFF );

// parameter but_id
union u_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_but_id;
u_but_id.p = but_id;
_fifo_enqueue( u_but_id.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages Adafruit_RGBLCDShield::buttons::button_release
void enqueue_Adafruit_RGBLCDShield_send_buttons_button_release(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (1 >> 8) & 0xFF );
_fifo_enqueue( 1 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_buttons >> 8) & 0xFF );
_fifo_enqueue( _instance->id_buttons & 0xFF );

// parameter but_id
union u_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_but_id;
u_but_id.p = but_id;
_fifo_enqueue( u_but_id.bytebuffer[0] & 0xFF );
}
}
// Enqueue of messages Adafruit_RGBLCDShield::buttons::button_press
void enqueue_Adafruit_RGBLCDShield_send_buttons_button_press(struct Adafruit_RGBLCDShield_Instance *_instance, uint8_t but_id){
if ( fifo_byte_available() > 5 ) {

_fifo_enqueue( (0 >> 8) & 0xFF );
_fifo_enqueue( 0 & 0xFF );

// ID of the source port of the instance
_fifo_enqueue( (_instance->id_buttons >> 8) & 0xFF );
_fifo_enqueue( _instance->id_buttons & 0xFF );

// parameter but_id
union u_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_but_id;
u_but_id.p = but_id;
_fifo_enqueue( u_but_id.bytebuffer[0] & 0xFF );
}
}


//New dispatcher for messages
void dispatch_set_bgcolor(uint16_t sender, uint8_t param_color) {
if (sender == mux_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_set_bgcolor(&rgblcd_var, param_color);

}
if (sender == application_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_set_bgcolor(&rgblcd_var, param_color);

}
if (sender == Serial_instance.listener_id) {
Multiplexer_handle_netIO_set_bgcolor(&mux_var, param_color);

}

}

void sync_dispatch_Multiplexer_send_lcd_set_bgcolor(struct Multiplexer_Instance *_instance, uint8_t color){
dispatch_set_bgcolor(_instance->id_lcd, color);
}
void sync_dispatch_ArduinoSketch_send_lcd_set_bgcolor(struct ArduinoSketch_Instance *_instance, uint8_t color){
dispatch_set_bgcolor(_instance->id_lcd, color);
}

//New dispatcher for messages
void dispatch_print_str(uint16_t sender, char * param_msg) {
if (sender == mux_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_print_str(&rgblcd_var, param_msg);

}
if (sender == application_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_print_str(&rgblcd_var, param_msg);

}

}

void sync_dispatch_Multiplexer_send_lcd_print_str(struct Multiplexer_Instance *_instance, char * msg){
dispatch_print_str(_instance->id_lcd, msg);
}
void sync_dispatch_ArduinoSketch_send_lcd_print_str(struct ArduinoSketch_Instance *_instance, char * msg){
dispatch_print_str(_instance->id_lcd, msg);
}

//New dispatcher for messages
void dispatch_clear(uint16_t sender) {
if (sender == application_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_clear(&rgblcd_var);

}
if (sender == mux_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_clear(&rgblcd_var);

}

}

void sync_dispatch_Multiplexer_send_lcd_clear(struct Multiplexer_Instance *_instance){
dispatch_clear(_instance->id_lcd);
}
void sync_dispatch_ArduinoSketch_send_lcd_clear(struct ArduinoSketch_Instance *_instance){
dispatch_clear(_instance->id_lcd);
}

//New dispatcher for messages
void dispatch_button_long_press(uint16_t sender, uint8_t param_but_id) {
if (sender == rgblcd_var.id_buttons) {
ArduinoSketch_handle_buttons_button_long_press(&application_var, param_but_id);
Multiplexer_handle_buttons_button_long_press(&mux_var, param_but_id);

}

}


//New dispatcher for messages
void dispatch_print_num(uint16_t sender, int16_t param_num) {
if (sender == application_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_print_num(&rgblcd_var, param_num);

}
if (sender == mux_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_print_num(&rgblcd_var, param_num);

}

}

void sync_dispatch_Multiplexer_send_lcd_print_num(struct Multiplexer_Instance *_instance, int16_t num){
dispatch_print_num(_instance->id_lcd, num);
}
void sync_dispatch_ArduinoSketch_send_lcd_print_num(struct ArduinoSketch_Instance *_instance, int16_t num){
dispatch_print_num(_instance->id_lcd, num);
}

//New dispatcher for messages
void dispatch_button_release(uint16_t sender, uint8_t param_but_id) {
if (sender == rgblcd_var.id_buttons) {
Multiplexer_handle_buttons_button_release(&mux_var, param_but_id);
ArduinoSketch_handle_buttons_button_release(&application_var, param_but_id);

}

}


//New dispatcher for messages
void dispatch_button_press(uint16_t sender, uint8_t param_but_id) {
if (sender == rgblcd_var.id_buttons) {
Multiplexer_handle_buttons_button_press(&mux_var, param_but_id);
ArduinoSketch_handle_buttons_button_press(&application_var, param_but_id);

}

}


//New dispatcher for messages
void dispatch_set_cursor(uint16_t sender, uint8_t param_c, uint8_t param_l) {
if (sender == application_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_set_cursor(&rgblcd_var, param_c, param_l);

}
if (sender == mux_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_set_cursor(&rgblcd_var, param_c, param_l);

}

}

void sync_dispatch_Multiplexer_send_lcd_set_cursor(struct Multiplexer_Instance *_instance, uint8_t c, uint8_t l){
dispatch_set_cursor(_instance->id_lcd, c, l);
}
void sync_dispatch_ArduinoSketch_send_lcd_set_cursor(struct ArduinoSketch_Instance *_instance, uint8_t c, uint8_t l){
dispatch_set_cursor(_instance->id_lcd, c, l);
}

//New dispatcher for messages
void dispatch_print_dec(uint16_t sender, double param_num) {
if (sender == mux_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_print_dec(&rgblcd_var, param_num);

}
if (sender == application_var.id_lcd) {
Adafruit_RGBLCDShield_handle_lcd_print_dec(&rgblcd_var, param_num);

}

}

void sync_dispatch_Multiplexer_send_lcd_print_dec(struct Multiplexer_Instance *_instance, double num){
dispatch_print_dec(_instance->id_lcd, num);
}
void sync_dispatch_ArduinoSketch_send_lcd_print_dec(struct ArduinoSketch_Instance *_instance, double num){
dispatch_print_dec(_instance->id_lcd, num);
}

//New dispatcher for messages
void dispatch_4ms_tick(uint16_t sender) {
if (sender == timer2_instance.listener_id) {
Adafruit_RGBLCDShield_handle_clock_4ms_tick(&rgblcd_var);

}

}


int processMessageQueue() {
if (fifo_empty()) return 0; // return 0 if there is nothing to do

byte mbuf[3];
uint8_t mbufi = 0;

// Read the code of the next port/message in the queue
uint16_t code = fifo_dequeue() << 8;

code += fifo_dequeue();

// Switch to call the appropriate handler
switch(code) {
case 3:
while (mbufi < 3) mbuf[mbufi++] = fifo_dequeue();
union u_set_bgcolor_color_t {
uint8_t p;
byte bytebuffer[1];
} u_set_bgcolor_color;
u_set_bgcolor_color.bytebuffer[0] = mbuf[2];
dispatch_set_bgcolor((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_set_bgcolor_color.p /* color */ );
break;
case 2:
while (mbufi < 3) mbuf[mbufi++] = fifo_dequeue();
union u_button_long_press_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_button_long_press_but_id;
u_button_long_press_but_id.bytebuffer[0] = mbuf[2];
dispatch_button_long_press((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_button_long_press_but_id.p /* but_id */ );
break;
case 1:
while (mbufi < 3) mbuf[mbufi++] = fifo_dequeue();
union u_button_release_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_button_release_but_id;
u_button_release_but_id.bytebuffer[0] = mbuf[2];
dispatch_button_release((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_button_release_but_id.p /* but_id */ );
break;
case 0:
while (mbufi < 3) mbuf[mbufi++] = fifo_dequeue();
union u_button_press_but_id_t {
uint8_t p;
byte bytebuffer[1];
} u_button_press_but_id;
u_button_press_but_id.bytebuffer[0] = mbuf[2];
dispatch_button_press((mbuf[0] << 8) + mbuf[1] /* instance port*/,
 u_button_press_but_id.p /* but_id */ );
break;
case 100:
while (mbufi < 2) mbuf[mbufi++] = fifo_dequeue();
dispatch_4ms_tick((mbuf[0] << 8) + mbuf[1] /* instance port*/);
break;
}
return 1;
}

void forward_Multiplexer_send_netIO_button_long_press(struct Multiplexer_Instance *_instance, uint8_t but_id){
if(_instance->id_netIO == mux_var.id_netIO) {
forward_Serial_Multiplexer_send_netIO_button_long_press(_instance, but_id);
}
}
void forward_Multiplexer_send_netIO_button_release(struct Multiplexer_Instance *_instance, uint8_t but_id){
if(_instance->id_netIO == mux_var.id_netIO) {
forward_Serial_Multiplexer_send_netIO_button_release(_instance, but_id);
}
}
void forward_Multiplexer_send_netIO_button_press(struct Multiplexer_Instance *_instance, uint8_t but_id){
if(_instance->id_netIO == mux_var.id_netIO) {
forward_Serial_Multiplexer_send_netIO_button_press(_instance, but_id);
}
}

//external Message enqueue
void externalMessageEnqueue(uint8_t * msg, uint8_t msgSize, uint16_t listener_id) {
if ((msgSize >= 2) && (msg != NULL)) {
uint8_t msgSizeOK = 0;
switch(msg[0] * 256 + msg[1]) {
case 3:
if(msgSize == 3) {
msgSizeOK = 1;}
break;
case 100:
if(msgSize == 2) {
msgSizeOK = 1;}
break;
}

if(msgSizeOK == 1) {
if ( fifo_byte_available() > (msgSize + 2) ) {
	uint8_t i;
	for (i = 0; i < 2; i++) {
		_fifo_enqueue(msg[i]);
	}
	_fifo_enqueue((listener_id >> 8) & 0xFF);
	_fifo_enqueue(listener_id & 0xFF);
	for (i = 2; i < msgSize; i++) {
		_fifo_enqueue(msg[i]);
	}
}
}
}
}

void initialize_configuration_testRGBLCD() {
// Initialize connectors
register_external_Multiplexer_send_netIO_button_press_listener(&forward_Multiplexer_send_netIO_button_press);
register_external_Multiplexer_send_netIO_button_release_listener(&forward_Multiplexer_send_netIO_button_release);
register_external_Multiplexer_send_netIO_button_long_press_listener(&forward_Multiplexer_send_netIO_button_long_press);
register_Multiplexer_send_lcd_print_num_listener(sync_dispatch_Multiplexer_send_lcd_print_num);
register_Multiplexer_send_lcd_print_dec_listener(sync_dispatch_Multiplexer_send_lcd_print_dec);
register_Multiplexer_send_lcd_print_str_listener(sync_dispatch_Multiplexer_send_lcd_print_str);
register_Multiplexer_send_lcd_clear_listener(sync_dispatch_Multiplexer_send_lcd_clear);
register_Multiplexer_send_lcd_set_cursor_listener(sync_dispatch_Multiplexer_send_lcd_set_cursor);
register_Multiplexer_send_lcd_set_bgcolor_listener(sync_dispatch_Multiplexer_send_lcd_set_bgcolor);
register_Adafruit_RGBLCDShield_send_buttons_button_press_listener(&enqueue_Adafruit_RGBLCDShield_send_buttons_button_press);
register_Adafruit_RGBLCDShield_send_buttons_button_release_listener(&enqueue_Adafruit_RGBLCDShield_send_buttons_button_release);
register_Adafruit_RGBLCDShield_send_buttons_button_long_press_listener(&enqueue_Adafruit_RGBLCDShield_send_buttons_button_long_press);
register_ArduinoSketch_send_lcd_print_num_listener(sync_dispatch_ArduinoSketch_send_lcd_print_num);
register_ArduinoSketch_send_lcd_print_dec_listener(sync_dispatch_ArduinoSketch_send_lcd_print_dec);
register_ArduinoSketch_send_lcd_print_str_listener(sync_dispatch_ArduinoSketch_send_lcd_print_str);
register_ArduinoSketch_send_lcd_clear_listener(sync_dispatch_ArduinoSketch_send_lcd_clear);
register_ArduinoSketch_send_lcd_set_cursor_listener(sync_dispatch_ArduinoSketch_send_lcd_set_cursor);
register_ArduinoSketch_send_lcd_set_bgcolor_listener(sync_dispatch_ArduinoSketch_send_lcd_set_bgcolor);

// Init the ID, state variables and properties for external connector Serial
// Init the ID, state variables and properties for external connector timer2

// Network Initilization 


Serial_instance.listener_id = add_instance(&Serial_instance);

Serial_setup();


timer2_instance.listener_id = add_instance(&timer2_instance);

timer2_setup();


// End Network Initilization 

// Init the ID, state variables and properties for instance rgblcd
rgblcd_var.id_clock = add_instance( (void*) &rgblcd_var);
rgblcd_var.id_buttons = add_instance( (void*) &rgblcd_var);
rgblcd_var.id_lcd = add_instance( (void*) &rgblcd_var);
rgblcd_var.Adafruit_RGBLCDShield_RGBLCDShieldSM_State = ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_READBUTTONS_STATE;
rgblcd_var.Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var = array_rgblcd_Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_btime__var;
rgblcd_var.Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var = array_rgblcd_Adafruit_RGBLCDShield_RGBLCDShieldSM_ReadButtons_bstate__var;

Adafruit_RGBLCDShield_RGBLCDShieldSM_OnEntry(ADAFRUIT_RGBLCDSHIELD_RGBLCDSHIELDSM_STATE, &rgblcd_var);
// Init the ID, state variables and properties for instance mux
mux_var.id_netIO = add_instance( (void*) &mux_var);
mux_var.id_buttons = add_instance( (void*) &mux_var);
mux_var.id_lcd = add_instance( (void*) &mux_var);
mux_var.Multiplexer_myChart_State = MULTIPLEXER_MYCHART_ACTIVE_STATE;

Multiplexer_myChart_OnEntry(MULTIPLEXER_MYCHART_STATE, &mux_var);
// Init the ID, state variables and properties for instance application
application_var.id_buttons = add_instance( (void*) &application_var);
application_var.id_lcd = add_instance( (void*) &application_var);
application_var.ArduinoSketch_ArduinoSketchStateChart_State = ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_OFF_STATE;
application_var.ArduinoSketch_ArduinoSketchStateChart_ON_color__var = TEAL;

ArduinoSketch_ArduinoSketchStateChart_OnEntry(ARDUINOSKETCH_ARDUINOSKETCHSTATECHART_STATE, &application_var);
}




void setup() {
initialize_configuration_testRGBLCD();

}

void loop() {

// Network Listener

Serial_read();

timer2_read();
Adafruit_RGBLCDShield_handle_empty_event(&rgblcd_var);

    processMessageQueue();
}
