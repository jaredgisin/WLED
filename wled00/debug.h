// enable additional debug output
#ifdef WLED_DEBUG
  #ifndef ESP8266
  #include <rom/rtc.h>
  #endif
  #define DEBUG_PRINT(x) Serial.print(x)
  #define DEBUG_PRINTLN(x) Serial.println(x)
  #define DEBUG_PRINTF(x...) Serial.printf(x)
#else
  #define DEBUG_PRINT(x)
  #define DEBUG_PRINTLN(x)
  #define DEBUG_PRINTF(x...)
#endif

#ifdef WLED_DEBUG_FS
  #define DEBUGFS_PRINT(x) Serial.print(x)
  #define DEBUGFS_PRINTLN(x) Serial.println(x)
  #define DEBUGFS_PRINTF(x...) Serial.printf(x)
#else
  #define DEBUGFS_PRINT(x)
  #define DEBUGFS_PRINTLN(x)
  #define DEBUGFS_PRINTF(x...)
#endif
