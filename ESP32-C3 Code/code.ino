
#include <BleKeyboard.h>

// Bluetooth keyboard name shown on your Mac
BleKeyboard bleKeyboard("My Macropad", "ESP32-C3", 100);

// Matrix GPIO pins from your schematic
const int rowPins[2] = {5, 6};
const int colPins[3] = {7, 8, 9};

// Key debounce
const unsigned long debounceDelay = 35;

bool lastReading[2][3] = {0};
bool stableState[2][3] = {0};
unsigned long lastDebounceTime[2][3] = {0};

// URLs
const char* youtubeMusic = "https://music.youtube.com";
const char* googleClassroom = "https://classroom.google.com";

// Send a Mac keyboard shortcut
void shortcut(uint8_t modifier, uint8_t key) {
  bleKeyboard.press(modifier);
  bleKeyboard.press(key);
  delay(80);
  bleKeyboard.releaseAll();
  delay(150);
}

// Open macOS Spotlight and launch an application
void openMacApp(const char* appName) {
  // Open Spotlight
  shortcut(KEY_LEFT_GUI, ' ');

  delay(500);

  // Search for application
  bleKeyboard.print(appName);
  delay(300);

  bleKeyboard.press(KEY_RETURN);
  delay(100);
  bleKeyboard.releaseAll();

  delay(1500);
}

// Open a website specifically in Chrome
void openChromeWebsite(const char* url) {
  // Activate Chrome through Spotlight
  openMacApp("Google Chrome");

  // Open address bar
  shortcut(KEY_LEFT_GUI, 'l');

  // Enter website
  bleKeyboard.print(url);
  delay(200);

  bleKeyboard.press(KEY_RETURN);
  delay(100);
  bleKeyboard.releaseAll();
}

// Actions for the six switches
void performAction(int row, int col) {

  if (!bleKeyboard.isConnected()) {
    return;
  }

  // SW1 - Copy
  if (row == 0 && col == 0) {
    shortcut(KEY_LEFT_GUI, 'c');
  }

  // SW2 - Paste
  else if (row == 0 && col == 1) {
    shortcut(KEY_LEFT_GUI, 'v');
  }

  // SW3 - New Chrome tab
  else if (row == 0 && col == 2) {
    shortcut(KEY_LEFT_GUI, 't');
  }

  // SW4 - Open Terminal
  else if (row == 1 && col == 0) {
    openMacApp("Terminal");
  }

  // SW5 - Open YouTube Music
  else if (row == 1 && col == 1) {
    openChromeWebsite(youtubeMusic);
  }

  // SW6 - Open Google Classroom
  else if (row == 1 && col == 2) {
    openChromeWebsite(googleClassroom);
  }
}

void setup() {

  Serial.begin(115200);

  // Configure columns as inputs with pullups
  for (int i = 0; i < 3; i++) {
    pinMode(colPins[i], INPUT_PULLUP);
  }

  // Configure rows as inactive HIGH outputs
  for (int i = 0; i < 2; i++) {
    pinMode(rowPins[i], OUTPUT);
    digitalWrite(rowPins[i], HIGH);
  }

  // Start Bluetooth keyboard
  bleKeyboard.begin();

  Serial.println("Macropad started!");
  Serial.println("Pair My Macropad with your Mac.");
}

void loop() {

  // Scan each row
  for (int row = 0; row < 2; row++) {

    // Activate current row
    digitalWrite(rowPins[row], LOW);
    delayMicroseconds(100);

    for (int col = 0; col < 3; col++) {

      // Read switch state
      bool reading = (digitalRead(colPins[col]) == LOW);

      if (reading != lastReading[row][col]) {
        lastDebounceTime[row][col] = millis();
      }

      if ((millis() - lastDebounceTime[row][col]) > debounceDelay) {

        // Detect new press only
        if (reading != stableState[row][col]) {

          stableState[row][col] = reading;

          if (stableState[row][col]) {
            performAction(row, col);
          }
        }
      }

      lastReading[row][col] = reading;
    }

    // Deactivate row
    digitalWrite(rowPins[row], HIGH);
  }

  delay(1);
}
