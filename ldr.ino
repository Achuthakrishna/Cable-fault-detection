int LDR1 = A0; // select the input pin for LDR
int val1 = 0; // variable to store the sensor value 
int LDR2 = A1;
int val2 = 0;
void setup() {
Serial.begin(9600); //set serial port for communication
}
void loop() {
val1=analogRead(LDR1);
val1 = map(val1,0,1023,0,15);
if (val1>=10 && val1 <=13)
  {
    Serial.print("LDR1:Connection is good and analog value for ldr 1 is : ");

  }
  else if (val1>= 14 && val1<=15)
  {
    Serial.print("LDR1: no connection :Change the cable between 1 and 2 and analog value for ldr1 :n");
  }
Serial.print(val1);
Serial.print("\n");
delay(500);
val2=analogRead(LDR2);
val2 = map(val2,0,1023,0,15);
if (val2>=10 && val2 <=13)
  {
    Serial.print("LDR2 :Connection is good: and analog value for ldr 2 is :  ");

  }
  else if (val2>= 14 && val2<=15)
  {
    Serial.print("LDR2: no connection: Change the cable between 3 and 4 and analog value for ldr2 :");
  }
Serial.print(val2);
Serial.print("\n");
delay(500);

