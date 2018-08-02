int i=0;
unsigned long currentTime;
unsigned long interval = 1000;

void setup() {
    Serial.begin(115200);
}
void loop() {
    while (Serial.available() > 0) {
        Serial.print("Received: ");
        Serial.println(Serial.read());
    }

    if (interval < millis() - currentTime) {
        Serial.println(i++);
        currentTime = millis();
    }
}
