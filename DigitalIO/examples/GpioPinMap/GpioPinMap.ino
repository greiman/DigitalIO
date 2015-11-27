// Create content of a GpioPinMap file.
void setup() {
  Serial.begin(9600);
  while(!Serial);
  Serial.println(
    "#ifndef BoardGpioPinMap_h\r\n"
    "#define BoardGpioPinMap_h\r\n"
    "static const GpioPinMap_t GpioPinMap[] = {");

  for (int i = 0; i < NUM_DIGITAL_PINS; i++) {
    Serial.print("  GPIO_PIN(");
    Serial.print((char)('A' - 1 + digitalPinToPort(i)));
    Serial.write(", ");
   
    int m = digitalPinToBitMask(i);
    int b = 0;
    for (b = 0; (1 << b) != m; b++) {}
     Serial.print(b);
    if (i < (NUM_DIGITAL_PINS - 1)) {
      Serial.print("),");
    } else {
    Serial.print(") ");
    }
    Serial.print("  // D");
    Serial.println(i);
  }
  Serial.println(
    "};\r\n"
    "#endif  // BoardGpioPinMap_h");
}

void loop() {
}
