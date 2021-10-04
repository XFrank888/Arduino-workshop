//define input pin for potentiometer
# define Receiver 18
//define pin for LED
#define LED 7
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(Receiver, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogRead(Receiver);
  digitalWrite(LED, HIGH);
  delay(analogRead(Receiver));
  digitalWrite(LED, LOW);
  delay(analogRead(Receiver));
}
