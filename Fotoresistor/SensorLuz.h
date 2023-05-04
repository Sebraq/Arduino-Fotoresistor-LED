
class SensorLuz {
private:
  int lightpin, lightval, led, value;

public:
  void mode(int lightpin, int led) {
    pinMode(lightpin, INPUT);  //A5
    pinMode(led, OUTPUT);      //3
  }
  int sensor(int lightpin) {
    lightval = analogRead(lightpin);  //Lee el valor del sensor
    Serial.println(lightval);
    delay(100);
    return lightval;
  }

  void ledG(int led) {
    value = sensor(lightpin);
    if (value < 500) {
      digitalWrite(led, HIGH);
    } else if (value >= 500) {
      digitalWrite(led, LOW);
    }
  }
};

//Help Source:https://youtu.be/xZ3EehV-Ggk