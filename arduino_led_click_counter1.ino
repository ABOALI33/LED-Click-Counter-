int led1=7;
int led2=9;
int led3=8;
int button=10;
int x=0;
int read=0;
void setup() {

pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(button,INPUT);
  
}

void loop() {
  read=digitalRead(button);
  if(read==HIGH){
  
x++;
  if(x==1){
  digitalWrite(led1,HIGH);
  delay(250);
  
}

else if(x==2){
digitalWrite(led2,HIGH);
  delay(250);
 
  
}

else if(x==3){
digitalWrite(led3,HIGH);
  delay(250);
  }



else if(x==4){
  digitalWrite(led1,LOW);
  
  digitalWrite(led2,LOW);
  
  digitalWrite(led3,LOW);
  delay(250);x=0;
}


}



}