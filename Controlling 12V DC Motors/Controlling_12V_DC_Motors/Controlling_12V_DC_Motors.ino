//Coded by: Mohamed Badawi
//github:"https://github.com/MohamedBadawi32"

int in1 = 8, in2 = 7, ena = 9, in3 = 13, in4 = 12, enb = 11;  //declaring inputs, enable, and potentiometer pins
int vpot;
    
void setup() {
  pinMode(in1, OUTPUT); //set as an outputs to change direction of rotation
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ena, INPUT);  //set as an input to upload the potentiometer position to achieve speed altering
  pinMode(enb, INPUT);
  }

void loop() {
  
  vpot = analogRead(A0); //reads the potentiometer's position from A0 analog pin
  
    if(vpot<512){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  vpot = map(0, vpot, 1023, 0, 255);
  analogWrite(ena, vpot);
  analogWrite(enb, vpot);
  }
     
    else{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  vpot = map(vpot, 0, 1023, 0, 512);
  analogWrite(ena, vpot);
  analogWrite(enb, vpot);
  }
}   
//the if function was added to set a range for either moving forwards and backwards
