#include <Arduino.h>
#include <WiFi.h>
#include <esp_bt.h>

void disableWireless() {
  WiFi.mode(WIFI_OFF);
  WiFi.setSleep(true);
  if (btStarted()) btStop();
  esp_bt_controller_disable();
}

bool checkSerial() {
  Serial.begin(115200);
  uint32_t t0 = millis();
  while (!Serial && millis() - t0 < 2000) {}
  Serial.println("Serial OK ✅");
  return true;
}