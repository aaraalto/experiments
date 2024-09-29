#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Define the screen dimensions
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

// Define the I2C address of the display (commonly 0x3C for these OLEDs)
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  // Initialize the display
  if(!display.begin(0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

  // Clear the buffer
  display.clearDisplay();
  
  // Set text size and color
  display.setTextSize(1);      // Normal 1:1 pixel scale
  display.setTextColor(SSD1306_WHITE); // Draw white text

  // Set cursor position for the first line
  display.setCursor(0, 0);
  // Display first line of text
  display.println(F("Open for Work!"));

  // Set cursor position for the second line
  display.setCursor(0, 10);
  // Display second line of text
  display.println(F("aaraalto.com"));

  // Update the display with the buffer
  display.display();
}

void loop() {
  // Do nothing here
}