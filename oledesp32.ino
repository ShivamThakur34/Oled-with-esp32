// OLED with esp32
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128  // OLED width
#define SCREEN_HEIGHT 64  // OLED height
#define OLED_RESET    -1  // Reset pin (not needed for I2C)
#define SCREEN_ADDRESS 0x3C  // Default I2C address for 1.3-inch OLED

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);

  // Initialize OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 initialization failed"));
    for (;;);
}

  Serial.println(F("OLED Initialized"));
  
  display.clearDisplay();  // Clear the buffer

  // Display "Hello"
  display.setTextSize(1.9);      // Text size
  display.setTextColor(WHITE); // Text color
  display.setCursor(10, 25);   // Position (x, y)
  display.print("Har Har Mahadev");
  display.display();           // Show on OLED
}

void loop() {
  // Nothing to do in loop
}
