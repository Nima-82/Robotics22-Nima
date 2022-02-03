void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
   for (int myLoop = 0; myLoop < 3; myLoop++ ){ 
        digitalWrite(LED_BUILTIN, 0); 
        delay(150); 
        digitalWrite(LED_BUILTIN, 1); 
        delay(150); 
    } 
       for (int myLoop = 0; myLoop < 3; myLoop++ ){ 
        digitalWrite(LED_BUILTIN, 0); 
        delay(500); 
        digitalWrite(LED_BUILTIN, 1); 
        delay(1000); 
    } 
       for (int myLoop = 0; myLoop < 3; myLoop++ ){ 
        digitalWrite(LED_BUILTIN, 0); 
        delay(150); 
        digitalWrite(LED_BUILTIN, 1); 
        delay(150); 
    } 
    delay(5000); 
}
