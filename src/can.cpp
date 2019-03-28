void canInit(int pin1,int pin2){
	Can0.begin();
	pinMode(pin1,OUTPUT);
	pinMode(pin2,OUTPUT);
	digitalWrite(pin1,HIGH);
	digitalWrite(pin2,HIGH);
	Serial.println("Teensy 3.6 MCP 2562 Receiving...");
}
int canRead(int id, string name){
	if(Can0.available(){
		CAN_message_t inMsg;
		Can0.read(inMsg);
		if(inMsg.id == id){
			volatile uint16_t rpm = (inMsg.buf[6] << 8) | inMsg.buf[7];
			Serial.println(rpm, DEC);
			Serial.println(rpm == 4935);
		}
	}
}
