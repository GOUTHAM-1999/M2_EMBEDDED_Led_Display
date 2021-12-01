#include <Wire.h>
#include <SSDmaster.h>                        //include library;
SSDmaster device(0x38);                       //address of slave driver;
void setup() {
    Wire.begin();
}
void loop() {    
    int ldrval=analogRead(A0);                //variable to store ADC data;                     
    device.ssdDisplay(1,B00011100);           //display L;
    device.ssdDisplay(2,B01111010);           //display D;
    device.ssdDisplay(3,B00001010);           //display R;
    device.ssdDisplaynum(4,(byte)ldrval);     //display ADC value;
    delay(250);                               //rate of updation;
}
