
//declaration of the pin that will be used
const int buzzer = 4; //buzzer to arduino pin 4

void setup(){ 
  pinMode(buzzer, OUTPUT); // set the pin as an OUTPUT
}

void loop(){
  tone(buzzer, 500); // function to control the buzzer (tone(X,Y,Z)),where X:PIN, Y:frequency and Z:delay
  delay(1000);        // delay for 1 sec
  noTone(buzzer);     // Stop sound...
  delay(1000);        // delay for 1 sec
}
