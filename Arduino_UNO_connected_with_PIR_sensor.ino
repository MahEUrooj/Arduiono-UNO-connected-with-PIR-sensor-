const int pir = 2;

void setup() {
  pinMode(pir, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int output = digitalRead(pir);

  Serial.println(output);
  delay(100);
}
