char t;
 
#include <Adafruit_NeoPixel.h>

#define LEDS 8
#define PIN 8

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LEDS, PIN, NEO_GRB + NEO_KHZ800);

int speed = 100; // Speed of blinking

void setup() {
pinMode(8,OUTPUT);   //left motors  forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(11,OUTPUT);   //right  motors forward
pinMode(10,OUTPUT);   //right motors reverse
pinMode(8,OUTPUT);   //Led
Serial.begin(9600);
strip.begin();
strip.setBrightness(255); // Set brightness to maximum (255)
strip.clear();
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == 'F'){            //move  forward(all motors rotate in forward direction)
  digitalWrite(13,HIGH);
  digitalWrite(11,HIGH);
}
 
else if(t == 'B'){      //move reverse (all  motors rotate in reverse direction)
  digitalWrite(12,HIGH);
  digitalWrite(10,HIGH);
}
  
else if(t == 'L'){      //turn right (left side motors rotate in forward direction,  right side motors doesn't rotate)
  digitalWrite(11,HIGH);
}
 
else  if(t == 'R'){      //turn left (right side motors rotate in forward direction, left  side motors doesn't rotate)
  digitalWrite(13,HIGH);
}

else if(t ==  'W'){    //turn led on or off)
  policeSiren();
}
else if(t == 'w'){
  poff();
  
}
 
else if(t == 'S'){      //STOP (all motors stop)
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
}

delay(10);
}
void policeSiren() {
  for (int i = 0; i < LEDS; i++) {
    if (i % 2 == 0) {
      strip.setPixelColor(i, strip.Color(255, 0, 0)); // Red
    } else {
      strip.setPixelColor(i, strip.Color(0, 0, 255)); // Blue
    }
  }
  strip.show();
  delay(speed);

  for (int i = 0; i < LEDS; i++) {
    if (i % 2 == 0) {
      strip.setPixelColor(i, strip.Color(0, 0, 255)); // Blue
    } else {
      strip.setPixelColor(i, strip.Color(255, 0, 0)); // Red
    }
  }
  strip.show();
  delay(speed);
}
void poff() {
  for (int i = 0; i < strip.numPixels(); i++) {
    strip.setPixelColor(i, strip.Color(0, 0, 0)); // Set all pixels to 'off'
  }
  strip.show(); // Update the strip
}