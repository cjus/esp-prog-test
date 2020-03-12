#include <Arduino.h>
#include <SSD1306Wire.h>

SSD1306Wire display(0x3c, SDA, SCL);

void setup() {
  Serial.begin(115200);
  Serial.setDebugOutput(true);

  display.init();
  display.flipScreenVertically();
}

void loop() {
  display.clear();
  display.setTextAlignment(TEXT_ALIGN_LEFT);
  display.setFont(ArialMT_Plain_16);
  display.drawString(20, 0, F("Hello JTAG"));
  display.drawString(20, 20, F("Debugging3"));
  display.display();
}
