#include <Adafruit_NeoPixel.h>
#include <DHT.h>
#include <Adafruit_Sensor.h>

#define PIXEL_PIN      2    // RGB LED pin
#define LDR_PIN       A0    // LDR pin
#define DHT_PIN       13    // DHT Sensor pin
#define BUTTON_PIN    12    // Button pin

#define NUM_PIXELS    30    // Total number of Pixel LEDs
#define DHT_TYPE    DHT11   // DHT 11

//initiate NEOPIXEL LEDs
Adafruit_NeoPixel pixels(NUM_PIXELS, PIXEL_PIN, NEO_GRB + NEO_KHZ800);
//initiate DHT sensor
DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(115200);
  pixels.begin();
  dht.begin();
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  Serial.println("Pixel LED Testing...");
  for (int i = 0; i < NUM_PIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 0,  0));
    pixels.show();
    delay(100);
    pixels.clear();
    pixels.setPixelColor(i, pixels.Color(0, 255,  0));
    pixels.show();
    delay(100);
    pixels.clear();
    pixels.setPixelColor(i, pixels.Color(0,  0, 255));
    pixels.show();
    delay(100);
    pixels.clear();
  }

  int sensor_val = analogRead(LDR_PIN);
  Serial.print("LDR : ");
  Serial.print(sensor_val);
  Serial.println();
  delay(1000);

  int Temperature = dht.readTemperature();
  Serial.print("Temperature : ");
  Serial.print(Temperature);
  Serial.println();
  delay(1000);

  if (digitalRead(BUTTON_PIN) == HIGH) {
    Serial.println("Button Pressed");
    delay(1000);
  }
  else {
    Serial.println("Button Not pressed");
    delay(1000);
  }
  
  Serial.println("Test Finish");
  Serial.println();
}
