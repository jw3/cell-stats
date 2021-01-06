#pragma once

#include <Adafruit_SSD1306.h>

#include "state.hpp"

namespace display
{
   void prepare(Adafruit_SSD1306& oled) {
      oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);

      oled.clearDisplay();
      oled.setTextColor(WHITE);
      oled.setTextSize(1);
      oled.setCursor(0, 10);
      oled.println("ready");
      oled.display();
   }

   void update(const State& state, Adafruit_SSD1306& oled) {
      oled.clearDisplay();
      oled.setCursor(0, 5);
      oled.printlnf("S: %i", state.strength);
      oled.setCursor(0, 15);
      oled.printlnf("Q: %i", state.quality);
      oled.setCursor(0, 25);
      oled.printlnf("%s", state.ready ? "OK" : "XX");

      oled.display();
   }
}
