#include "../inc/can.h"
void setup(){
	canInit(2,35);
}
void loop(){
	canRead(0x5F0);
}
