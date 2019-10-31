int sensorPin=A0;
int sensorPin1=A2;
int sensorPin2=A4;

int val =0;
int val1 =0;
int val2 =0;

int pushButton1 = 2;
int pushButton2 = 3;
int pushButton3 = 4;




void setup(){
 
  pinMode(sensorPin, INPUT); 
  pinMode(sensorPin1, INPUT); 
  pinMode(sensorPin2, INPUT);
  
  pinMode(pushButton1, INPUT);
  pinMode(pushButton2, INPUT);
  pinMode(pushButton3, INPUT);
  
  Serial.begin (9600);

 }
  
void loop (){
  
     
    int buttonState1 = digitalRead(pushButton1);
  Serial.print("Button1: ");
  Serial.println(buttonState1);
  delay(0); 

     int buttonState2 = digitalRead(pushButton2);
  Serial.print("Button2: ");
  Serial.println(buttonState2);
  delay(0); 

   int buttonState3 = digitalRead(pushButton3);
  Serial.print("Button3: ");
  Serial.println(buttonState3);
  delay(0); 
  
  val =analogRead(sensorPin);
  val1 =analogRead(sensorPin1);
  val2 =analogRead(sensorPin2);
  Serial.print("Mikker 1: ");
  Serial.println (val);
  Serial.print("Mikker 2: ");
  Serial.println (val1);
  Serial.print("Mikker 3: ");
  Serial.println (val2);
  delay(1);
  
  
  



  // when the sensor detects a signal above the threshold value
  if (val>=35 /*&& val>val1 && val>val2*/) {
    if (buttonState1 == 1) {
    tone(8, 2000, 20);
    } else {
    tone(8, 500, 20);  
    }}
  
  if (val1>=35 /*&& val1>val && val>val2*/){
    if (buttonState2 == 1){
    tone(8, 2500, 20);
    } else {  
    tone(8, 1000, 20);
  }}
  
  if (val2>=35 /*val2>val1 && val2>val*/){
     if (buttonState3 == 1){
     tone(8, 3000, 20);
     } else {
    tone(8, 1500, 20);
    
  
  }
  }  }
