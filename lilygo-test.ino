// This script is for linux machines. It is to test a Lily Go BadUSB
// This script will open your terminal and echo hello world

#include <Keyboard.h>  // You need this

void setup() {
  Keyboard.begin(); //Start keyboard
  delay(5000); // Delay
  
  Keyboard.press(KEY_LEFT_ALT); // Press Alt
  delay(500); 
  
  Keyboard.press('t'); // Press t button to open Terminal
  delay(500); 
  
  Keyboard.release(KEY_LEFT_ALT); // Release Alt
  Keyboard.release('t'); // Release t
  
  Keyboard.println("echo hello world"); // says hello
  Keyboard.press(KEY_RETURN);
  
  Keyboard.release(KEY_RETURN);
  
  Keyboard.end(); 
}
void loop()
{
}
