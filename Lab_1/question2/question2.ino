// lab 1 -Question 2

// Date 01/21/24


// description of code and commments
#include <math.h>

void setup() {
  Serial.begin(9600); // Set the baud rate for Serial Monitor

  // Calculate cosine for degrees from 0 to 360
  for (int deg = 0; deg <= 360; deg++) {
    double radians = deg * PI / 180.0; // Convert degrees to radians
    double cosine_value = cos(radians);

    // Print the result to the Serial Monitor
    Serial.print("Cos(");
    Serial.print(deg);
    Serial.print(") = ");
    Serial.println(cosine_value);
  }
}

void loop() {

  //idle
}
