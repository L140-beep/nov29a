#include "wifi.h"
#include "Server.h"

#define echoPin 5
#define trigPin 4

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  WiFi_init(true);
  server_init();
}

void loop() {
  server.handleClient();
  
}