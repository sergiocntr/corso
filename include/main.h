#pragma once
#ifndef _main_h
#define _main_h
// QUI TUTTI I FILE .h
// PRIMA LE LIBRERIE 
# include <Arduino.h>

// QUI VANNO LIBRERIE SPECIFICHE PER ESP 8266
#ifdef ESP8266
  #include <ESP8266WiFi.h>
  
#endif //ESP8266
// QUI VANNO LIBRERIE SPECIFICHE PER ESP 8266
#ifdef ESP32
  #include <WiFi.h>

#endif  //ESP32
// POI I FILE .h DELLO SKETCH
#include <password.h>
#include <impostazioni.h>


#endif //MAIN