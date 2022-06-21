const int pin = 2;            // digital input
 
void setup() {
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}
 
void loop(){
  digitalWrite(pin, HIGH);   // set Pin HIGH
  delay(5000);
  digitalWrite(pin, LOW);    // set Pin LOW
  delay(5000);
}
