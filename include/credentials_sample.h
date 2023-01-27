// This EUI must be in little-endian format, so least-significant-byte
// first. When copying an EUI from hellium console output, this means to reverse
// the bytes. 
static const u1_t PROGMEM APPEUI[8]={ FILL_IN_LSB };
void os_getArtEui (u1_t* buf) { memcpy_P(buf, APPEUI, 8);}

// This should also be in little endian format, see above.
static const u1_t PROGMEM DEVEUI[8]={ FILL_IN_LSB };
void os_getDevEui (u1_t* buf) { memcpy_P(buf, DEVEUI, 8);}

// This key should be in big endian format (or, since it is not really a
// number but a block of memory, endianness does not really apply). In
// practice, a key taken from hellium console can be copied as-is.
// The key shown here is the semtech default key.
static const u1_t PROGMEM APPKEY[16] = { FILL_IN_MSB };
void os_getDevKey (u1_t* buf) {  memcpy_P(buf, APPKEY, 16);}
