// --- tiny I2C helpers ---
static bool i2cWriteByte(TwoWire* bus, uint8_t addr, uint8_t reg, uint8_t val) {
  bus->beginTransmission(addr);
  bus->write(reg);
  bus->write(val);
  return bus->endTransmission() == 0;
}
static bool i2cReadBytes(TwoWire* bus, uint8_t addr, uint8_t reg, uint8_t* buf, size_t n) {
  bus->beginTransmission(addr);
  bus->write(reg);
  if (bus->endTransmission(false) != 0) return false; // repeated start
  size_t got = bus->requestFrom((int)addr, (int)n);
  if (got != n) return false;
  for (size_t i = 0; i < n; ++i) buf[i] = bus->read();
  return true;
}
static inline int16_t make16(uint8_t hi, uint8_t lo) { return (int16_t)((hi << 8) | lo); }