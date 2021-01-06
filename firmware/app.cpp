#include <application.h>

#include "oled.hpp"
#include "state.hpp"

system_tick_t last = 0;
int delay_interval = 1000;
Adafruit_SSD1306 oled(128, 32);

void setup() {
   display::prepare(oled);
}

void loop() {
   const system_tick_t now = millis();
   if(now > last + delay_interval) {
      auto rssi = Cellular.RSSI();
      State state;
      state.quality = static_cast<byte>(rssi.getQuality());
      state.strength = static_cast<byte>(rssi.getStrength());

      display::update(state, oled);
      last = now;
   }
}
