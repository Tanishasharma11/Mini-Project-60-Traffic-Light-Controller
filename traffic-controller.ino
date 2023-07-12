int green=13;
int yellow=12;
int red=11;
int ldr=A0;
void setup(){
  Serial.begin(9600);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(ldr,INPUT);
}
void loop(){
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  int c= analogRead(ldr) ;
  Serial.println(c);
  if(c<=800){
    night();
  }
}
void night(){
  digitalWrite(red,HIGH);
  digitalWrite(yellow,HIGH);
  digitalWrite(green,HIGH);
  delay(5000);
  digitalWrite(red,LOW);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
}
