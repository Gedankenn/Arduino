void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
//Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, HIGH);
  delay(5000);
  digitalWrite(10, LOW);
  delay(800);
}
