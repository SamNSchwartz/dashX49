void canInit(int pin1,pin2){
	Can0.begin();
	pinMode(pin1,OUTPUT);
	pinMode(pin2,OUTPUT);
	digitalWrite(pin1,HIGH);
	digitalWrite(pin2,HIGH);
	Serial.println("Teensy 3.6 MCP 2562 Receiving...");
}
int canRead(int id, char[] name){
	if(Can0.available(){
	
	}
}
