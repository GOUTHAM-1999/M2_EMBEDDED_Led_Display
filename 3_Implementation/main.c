#include <Wire.h>                         //library;

int flag=1,m=0,n=0;                       //preset conditions;
byte arr[6]={0,0,0,0,0,0};                //initial buffer;
int segment[8]={0,1,2,3,4,5,6,7};         //segment/LED a,b,c,d,e,f,g,h;               
int select[6]={13,12,11,10,9,8};          //digit number 1,2,3,4,5,6;
byte LUTmap=B11111111;                    //initial state – all LEDs off;

void setup() {
    for(int i=0;i<=13;i++)
        pinMode(i,OUTPUT);                //all pins are output;
    callforsegment(B00000000); flag++;    //select digit 1;
    callforsegment(B11111100); flag++;    //display 0;
    callforsegment(B00000010); flag++;    //select digit 3;
    callforsegment(B11110010); flag++;    //display 3;
    callforsegment(B00000011); flag++;    //select digit 4;
    callforsegment(B11111110); flag++;    //display 8;
    callforsegment(B00000100); flag++;    //select digit 5;
    callforsegment(B01101110); flag++;    //display H(hex address);
    Wire.begin(0x38);                 //i2c slave address for the driver;
    Wire.onReceive(receiveEvent);     //action on receiving data via i2c bus;
}

void segWrite(byte a) {
    LUTmap=~a;                        //convert to common anode logic;
    for(int i=0;i<8;i++)
        //display to each segment in a digit;
        digitalWrite(segment[i],bitRead(LUTmap,7-i));  
}

void loop() {
    for(int i=0;i<6;i++) {
        digitalWrite(select[i],HIGH);   //selecting one of the digits;
        segWrite((byte)arr[i]);         //writing data to the digit;
        delay(5);                       //ON time;
        digitalWrite(select[i],LOW);    //deactivating the selected digit;
    }
}

void callforsegment(int a) {
    if(flag%2==1 && a<=7 && a>=0)
        m=a;                        //first byte about digit location;
    else {
        n=a;                        //second byte about data for the digit;
        flag=0;
    }
    arr[m]=(byte)n;                 //store data to the buffer space;
}

void receiveEvent(int howMany) {
    while (1 < Wire.available())    //loop through all except last;
    char c = Wire.read();           //receive byte as a character;
    int x = Wire.read();            //receive byte as an integer;
    callforsegment(x);
    flag++;
}
