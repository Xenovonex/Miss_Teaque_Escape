#include <FastLED.h>

#define LED_PIN  3
#define BUTTON_ONE  4
#define BUTTON_TWO  5
#define BUTTON_THREE  6

#define COLOR_ORDER GRB
#define CHIPSET     WS2811

#define BRIGHTNESS 64
#define NUM_LEDS 64
CRGB leds_plus_safety_pixel[ NUM_LEDS + 1];
CRGB* const leds( leds_plus_safety_pixel + 1);

// variables for button states
int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0; 

// switching value and max value
int switcher = 0;
int max_switch = 6;

//selector value
int selector = 0;

// time between showing arrows
int tussentijd = 500;

// fader settings
int fade = 0;
int dur = 6;
int up = -1;


void setup() {
  FastLED.addLeds<CHIPSET, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection(TypicalSMD5050);
  FastLED.setBrightness( BRIGHTNESS );
  
  // initialize the pushbutton pin as an input:
  pinMode(BUTTON_ONE, INPUT);
  pinMode(BUTTON_TWO, INPUT);
  pinMode(BUTTON_THREE, INPUT);
}

// Signs
void kreeft_1()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 15) || (i == 16) || (i == 18) || (i == 20) || (i == 21) || (i == 23) || (i == 24) || (i == 28) || (i == 29) || (i == 30) || (i == 31) || (i == 32) || (i == 33) || (i == 34) || (i == 35) || (i == 39) || (i == 40) || (i == 42) || (i == 43) || (i == 45) || (i == 47) || (i == 48) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(136, 10, 228);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 9) || (i == 10) || (i == 11) || (i == 12) || (i == 13) || (i == 14) || (i == 17) || (i == 19) || (i == 22) || (i == 25) || (i == 26) || (i == 27) || (i == 36) || (i == 37) || (i == 38) || (i == 41) || (i == 44) || (i == 46) || (i == 49) || (i == 50) || (i == 51) || (i == 52) || (i == 53) || (i == 54)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void weegschaal_2()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 6) || (i == 7) || (i == 8) || (i == 10) || (i == 11) || (i == 12) || (i == 13) || (i == 15) || (i == 16) || (i == 18) || (i == 19) || (i == 20) || (i == 21) || (i == 23) || (i == 24) || (i == 25) || (i == 27) || (i == 28) || (i == 30) || (i == 31) || (i == 35) || (i == 36) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 44) || (i == 45) || (i == 46) || (i == 47) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(136, 10, 228);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 9) || (i == 14) || (i == 17) || (i == 22) || (i == 26) || (i == 29) || (i == 32) || (i == 33) || (i == 34) || (i == 37) || (i == 38) || (i == 39) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 52) || (i == 53) || (i == 54) || (i == 55)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void steenbok_3()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 19) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 25) || (i == 27) || (i == 29) || (i == 30) || (i == 31) || (i == 32) || (i == 33) || (i == 35) || (i == 39) || (i == 40) || (i == 41) || (i == 43) || (i == 45) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(136, 10, 228);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 9) || (i == 10) || (i == 11) || (i == 12) || (i == 18) || (i == 20) || (i == 26) || (i == 28) || (i == 34) || (i == 36) || (i == 37) || (i == 38) || (i == 42) || (i == 44) || (i == 46) || (i == 52) || (i == 53) || (i == 54) || (i == 59) || (i == 60)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void schorpioen_4()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 13) || (i == 14) || (i == 15) || (i == 17) || (i == 19) || (i == 21) || (i == 22) || (i == 23) || (i == 25) || (i == 27) || (i == 29) || (i == 30) || (i == 31) || (i == 33) || (i == 35) || (i == 37) || (i == 38) || (i == 39) || (i == 41) || (i == 43) || (i == 45) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 63)){leds[i].setRGB(136, 10, 228);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 8) || (i == 9) || (i == 10) || (i == 11) || (i == 12) || (i == 16) || (i == 18) || (i == 20) || (i == 24) || (i == 26) || (i == 28) || (i == 32) || (i == 34) || (i == 36) || (i == 40) || (i == 42) || (i == 44) || (i == 46) || (i == 52) || (i == 53) || (i == 54) || (i == 55) || (i == 62)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void vissen_5()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 8) || (i == 10) || (i == 11) || (i == 12) || (i == 13) || (i == 15) || (i == 16) || (i == 17) || (i == 19) || (i == 20) || (i == 22) || (i == 23) || (i == 24) || (i == 25) || (i == 27) || (i == 28) || (i == 30) || (i == 31) || (i == 40) || (i == 41) || (i == 43) || (i == 44) || (i == 46) || (i == 47) || (i == 48) || (i == 50) || (i == 51) || (i == 52) || (i == 53) || (i == 55) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62)){leds[i].setRGB(136, 10, 228);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 0) || (i == 7) || (i == 9) || (i == 14) || (i == 18) || (i == 21) || (i == 26) || (i == 29) || (i == 32) || (i == 33) || (i == 34) || (i == 35) || (i == 36) || (i == 37) || (i == 38) || (i == 39) || (i == 42) || (i == 45) || (i == 49) || (i == 54) || (i == 56) || (i == 63)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void ram_6()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 4) || (i == 7) || (i == 8) || (i == 10) || (i == 11) || (i == 13) || (i == 14) || (i == 16) || (i == 18) || (i == 19) || (i == 21) || (i == 22) || (i == 24) || (i == 25) || (i == 27) || (i == 29) || (i == 31) || (i == 32) || (i == 33) || (i == 34) || (i == 35) || (i == 37) || (i == 38) || (i == 39) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(136, 10, 228);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 2) || (i == 3) || (i == 5) || (i == 6) || (i == 9) || (i == 12) || (i == 15) || (i == 17) || (i == 20) || (i == 23) || (i == 26) || (i == 28) || (i == 30) || (i == 36) || (i == 44) || (i == 52) || (i == 60)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

// End signs

void lilidee_inv()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 18) || (i == 20) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 26) || (i == 28) || (i == 30) || (i == 32) || (i == 34) || (i == 36) || (i == 38) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 44) || (i == 46) || (i == 47) || (i == 52) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 31) || (i == 39)){leds[i].setRGB(72, 205, 255);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 48) || (i == 49) || (i == 50) || (i == 51)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 29) || (i == 37) || (i == 45) || (i == 53)){leds[i].setRGB(255, 127, 39);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 11) || (i == 19) || (i == 27) || (i == 35)){leds[i].setRGB(255, 201, 14);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 25) || (i == 33)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}


void kleur() {
  for(int i = 0; i < NUM_LEDS; i++ ){
  if((i == 29)){leds[i].setRGB(0, 162, 232);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 25)){leds[i].setRGB(34, 177, 76);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 21) || (i == 22) || (i == 23) || (i == 30) || (i == 31) || (i == 38) || (i == 39) || (i == 45) || (i == 46)){leds[i].setRGB(112, 146, 190);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 10) || (i == 11) || (i == 37) || (i == 43) || (i == 47) || (i == 54) || (i == 55) || (i == 62) || (i == 63)){leds[i].setRGB(136, 0, 21);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 0)){leds[i].setRGB(163, 73, 164);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 53) || (i == 58) || (i == 59) || (i == 60) || (i == 61)){leds[i].setRGB(200, 191, 231);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 19) || (i == 20) || (i == 27) || (i == 34) || (i == 41) || (i == 42) || (i == 48) || (i == 49)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 28) || (i == 35) || (i == 50) || (i == 56) || (i == 57)){leds[i].setRGB(255, 127, 39);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 1) || (i == 2) || (i == 8) || (i == 9) || (i == 16) || (i == 17) || (i == 18) || (i == 24) || (i == 26) || (i == 32) || (i == 33) || (i == 40)){leds[i].setRGB(255, 174, 201);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 36) || (i == 44) || (i == 51) || (i == 52)){leds[i].setRGB(255, 242, 0);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void vorm() {
  for(int i = 0; i < NUM_LEDS; i++ ){
  if((i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 15) || (i == 18) || (i == 21) || (i == 26) || (i == 28) || (i == 29) || (i == 30) || (i == 34) || (i == 36) || (i == 38) || (i == 43) || (i == 44) || (i == 46) || (i == 54) || (i == 56) || (i == 59) || (i == 60)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 12) || (i == 13) || (i == 14) || (i == 19) || (i == 20) || (i == 22) || (i == 23) || (i == 27) || (i == 31) || (i == 35)){leds[i].setRGB(34, 177, 76);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 0) || (i == 1) || (i == 8) || (i == 16) || (i == 24) || (i == 32) || (i == 39) || (i == 40) || (i == 47) || (i == 48) || (i == 49) || (i == 55) || (i == 57) || (i == 58) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(63, 72, 204);leds[i].fadeLightBy(BRIGHTNESS);}
  else if((i == 9) || (i == 10) || (i == 11) || (i == 17) || (i == 25) || (i == 33) || (i == 37) || (i == 41) || (i == 42) || (i == 45) || (i == 50) || (i == 51) || (i == 52) || (i == 53)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void rwbo()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 24) || (i == 25) || (i == 26) || (i == 27) || (i == 28) || (i == 29) || (i == 30) || (i == 31) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(63, 72, 204);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 44) || (i == 45) || (i == 46) || (i == 47)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 16) || (i == 17) || (i == 18) || (i == 19) || (i == 20) || (i == 21) || (i == 22) || (i == 23)){leds[i].setRGB(255, 127, 39);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 8) || (i == 9) || (i == 10) || (i == 11) || (i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 32) || (i == 33) || (i == 34) || (i == 35) || (i == 36) || (i == 37) || (i == 38) || (i == 39) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 52) || (i == 53) || (i == 54) || (i == 55)){leds[i].setRGB(255, 255, 255);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void lilidee()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 48) || (i == 49) || (i == 50) || (i == 51)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 29) || (i == 37) || (i == 45) || (i == 53)){leds[i].setRGB(72, 205, 255);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 18) || (i == 20) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 26) || (i == 28) || (i == 30) || (i == 32) || (i == 34) || (i == 36) || (i == 38) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 44) || (i == 46) || (i == 47) || (i == 52) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(195, 195, 195);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 31) || (i == 39)){leds[i].setRGB(233, 12, 67);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 11) || (i == 19) || (i == 27) || (i == 35)){leds[i].setRGB(255, 127, 39);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 25) || (i == 33)){leds[i].setRGB(255, 201, 14);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

// pijlen
void pijl_b()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 22) || (i == 23) || (i == 24) || (i == 31) || (i == 32) || (i == 33) || (i == 34) || (i == 37) || (i == 38) || (i == 39) || (i == 40) || (i == 41) || (i == 42) || (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 11) || (i == 12) || (i == 18) || (i == 19) || (i == 20) || (i == 21) || (i == 25) || (i == 26) || (i == 27) || (i == 28) || (i == 29) || (i == 30) || (i == 35) || (i == 36) || (i == 43) || (i == 44) || (i == 51) || (i == 52)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void pijl_l()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 20) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 31) || (i == 32) || (i == 39) || (i == 40) || (i == 41) || (i == 44) || (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 52) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 11) || (i == 18) || (i == 19) || (i == 25) || (i == 26) || (i == 27) || (i == 28) || (i == 29) || (i == 30) || (i == 33) || (i == 34) || (i == 35) || (i == 36) || (i == 37) || (i == 38) || (i == 42) || (i == 43) || (i == 51)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void pijl_lb()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 19) || (i == 20) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 26) || (i == 28) || (i == 29) || (i == 30) || (i == 31) || (i == 32) || (i == 34) || (i == 35) || (i == 37) || (i == 38) || (i == 39) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 44) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 52) || (i == 53) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 9) || (i == 10) || (i == 11) || (i == 12) || (i == 17) || (i == 18) || (i == 25) || (i == 27) || (i == 33) || (i == 36) || (i == 45) || (i == 54)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}


void pijl_lo()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 11) || (i == 12) || (i == 13) || (i == 15) || (i == 16) || (i == 17) || (i == 18) || (i == 19) || (i == 20) || (i == 22) || (i == 23) || (i == 24) || (i == 26) || (i == 27) || (i == 29) || (i == 30) || (i == 31) || (i == 32) || (i == 34) || (i == 36) || (i == 37) || (i == 38) || (i == 39) || (i == 40) || (i == 43) || (i == 44) || (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 14) || (i == 21) || (i == 25) || (i == 28) || (i == 33) || (i == 35) || (i == 41) || (i == 42) || (i == 49) || (i == 50) || (i == 51) || (i == 52)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void pijl_o()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 18) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 25) || (i == 26) || (i == 29) || (i == 30) || (i == 31) || (i == 32) || (i == 39) || (i == 40) || (i == 41) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 11) || (i == 12) || (i == 19) || (i == 20) || (i == 27) || (i == 28) || (i == 33) || (i == 34) || (i == 35) || (i == 36) || (i == 37) || (i == 38) || (i == 42) || (i == 43) || (i == 44) || (i == 45) || (i == 51) || (i == 52)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void pijl_r()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 11) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 18) || (i == 19) || (i == 22) || (i == 23) || (i == 24) || (i == 31) || (i == 32) || (i == 39) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 12) || (i == 20) || (i == 21) || (i == 25) || (i == 26) || (i == 27) || (i == 28) || (i == 29) || (i == 30) || (i == 33) || (i == 34) || (i == 35) || (i == 36) || (i == 37) || (i == 38) || (i == 44) || (i == 45) || (i == 52)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void pijl_rb()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 9) || (i == 10) || (i == 15) || (i == 16) || (i == 17) || (i == 18) || (i == 19) || (i == 20) || (i == 23) || (i == 24) || (i == 25) || (i == 26) || (i == 27) || (i == 29) || (i == 31) || (i == 32) || (i == 33) || (i == 34) || (i == 36) || (i == 37) || (i == 39) || (i == 40) || (i == 41) || (i == 43) || (i == 44) || (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 50) || (i == 51) || (i == 52) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 11) || (i == 12) || (i == 13) || (i == 14) || (i == 21) || (i == 22) || (i == 28) || (i == 30) || (i == 35) || (i == 38) || (i == 42) || (i == 49)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

void pijl_ro()
{
for(int i = 0; i < NUM_LEDS; i++ ){
if((i == 0) || (i == 1) || (i == 2) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 10) || (i == 11) || (i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 16) || (i == 17) || (i == 19) || (i == 20) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 25) || (i == 26) || (i == 28) || (i == 29) || (i == 31) || (i == 32) || (i == 33) || (i == 34) || (i == 35) || (i == 37) || (i == 39) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 44) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(0, 0, 0);leds[i].fadeLightBy(BRIGHTNESS);}
else if((i == 9) || (i == 18) || (i == 27) || (i == 30) || (i == 36) || (i == 38) || (i == 45) || (i == 46) || (i == 51) || (i == 52) || (i == 53) || (i == 54)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS);}
}
}

// End Pijlen


// Start positions
void green()
{
for(int i = 0; i < NUM_LEDS; i++ ){
leds[i].setRGB(34, 177, 76);leds[i].fadeLightBy(BRIGHTNESS);
}
}


void start_lb()
{
  for(int j = 0; j < dur; j++){
    for(int i = 0; i < NUM_LEDS; i++ ){
    if((i == 1) || (i == 3) || (i == 4) || (i == 5) || (i == 6) || (i == 7) || (i == 8) || (i == 10) || (i == 11) || (i == 12) || (i == 13) || (i == 14) || (i == 15) || (i == 17) || (i == 19) || (i == 20) || (i == 21) || (i == 22) || (i == 23) || (i == 24) || (i == 25) || (i == 26) || (i == 27) || (i == 28) || (i == 29) || (i == 30) || (i == 31) || (i == 32) || (i == 33) || (i == 34) || (i == 35) || (i == 36) || (i == 37) || (i == 38) || (i == 39) || (i == 40) || (i == 41) || (i == 42) || (i == 43) || (i == 44) || (i == 45) || (i == 46) || (i == 47) || (i == 48) || (i == 49) || (i == 50) || (i == 51) || (i == 52) || (i == 53) || (i == 54) || (i == 55) || (i == 56) || (i == 57) || (i == 58) || (i == 59) || (i == 60) || (i == 61) || (i == 62) || (i == 63)){leds[i].setRGB(9, 45, 19);leds[i].fadeLightBy(BRIGHTNESS);}
    else if((i == 0) || (i == 2) || (i == 9) || (i == 16) || (i == 18)){leds[i].setRGB(237, 28, 36);leds[i].fadeLightBy(BRIGHTNESS+fade);}
    }
    FastLED.show();
    if (up == -1){
      fade = fade - 64;
    }
    else {
      fade = fade + 64;
    }    
    // reverse the direction of the fading at the ends of the fade: 
    if(BRIGHTNESS+fade == 0 || BRIGHTNESS+fade == 64)
    {
      up = -up;
      delay(500); 
    }    
    delay(500);  // This delay sets speed of the fade. I usually do from 5-75 but you can always go higher.
  }
  fade = 0;
  up = -1;
}


// Patterns
void lilidee_sel()
{
        lilidee_inv();
        FastLED.show();
        delay(tussentijd);
        lilidee();
        FastLED.show();
        delay(tussentijd);
        lilidee_inv();
        FastLED.show();
        delay(tussentijd);
        lilidee();
        FastLED.show();
        delay(tussentijd);
        lilidee_inv();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void kreeft_1_sel()
{
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_b();
        FastLED.show();
        delay(tussentijd);
        pijl_o();
        FastLED.show();
        delay(tussentijd);
        pijl_ro();
        FastLED.show();
        delay(tussentijd);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void weegschaal_2_sel()
{
        pijl_rb();
        FastLED.show();
        delay(tussentijd);
        pijl_ro();
        FastLED.show();
        delay(tussentijd);
        pijl_o();
        FastLED.show();
        delay(tussentijd);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void steenbok_3_sel()
{
        pijl_ro();
        FastLED.show();
        delay(tussentijd);
        pijl_rb();
        FastLED.show();
        delay(tussentijd);
        pijl_b();
        FastLED.show();
        delay(tussentijd);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        FastLED.clear();
        FastLED.show();
        delay(250);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void schorpioen_4_sel()
{
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        FastLED.clear();
        FastLED.show();
        delay(250);
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_lb();
        FastLED.show();
        delay(tussentijd);
        pijl_o();
        FastLED.show();
        delay(tussentijd);
        FastLED.clear();
        FastLED.show();
        delay(250);
        pijl_o();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void vissen_5_sel()
{
        pijl_rb();
        FastLED.show();
        delay(tussentijd);
        pijl_ro();
        FastLED.show();
        delay(tussentijd);
        pijl_lo();
        FastLED.show();
        delay(tussentijd);
        pijl_lb();
        FastLED.show();
        delay(tussentijd);
        pijl_ro();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void ram_6_sel()
{
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_b();
        FastLED.show();
        delay(tussentijd);
        pijl_o();
        FastLED.show();
        delay(tussentijd);
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}


void kleur_sel()
{
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_rb();
        FastLED.show();
        delay(tussentijd);
        pijl_b();
        FastLED.show();
        delay(tussentijd);
        pijl_lb();
        FastLED.show();
        delay(tussentijd);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        pijl_lo();
        FastLED.show();
        delay(tussentijd);
        pijl_o();
        FastLED.show();
        delay(tussentijd);
        pijl_ro();
        FastLED.show();
        delay(tussentijd);
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void vorm_sel()
{
        start_lb();
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_o();
        FastLED.show();
        delay(tussentijd);
        pijl_ro();
        FastLED.show();
        delay(tussentijd);
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        selector = 0;
  
}

void rwbo_sel()
{
        start_lb();
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        pijl_r();
        FastLED.show();
        delay(tussentijd);
        pijl_l();
        FastLED.show();
        delay(tussentijd);
        pijl_r();
        FastLED.show();
        delay(tussentijd); 
        selector = 0;   
  
}

/*
void loop()
{
    kleur();
    FastLED.show();
    delay(10000);
    FastLED.clear();
    vorm();
    FastLED.show();
    delay(10000);
    FastLED.clear();
    rwbo();
    FastLED.show();
    delay(10000);
    FastLED.clear();

}
*/

/*
void loop()
{ 
    lilidee();
    FastLED.show();
    delay(10000);
    FastLED.clear();
    rwbo();
    FastLED.show();
    delay(10000);
    FastLED.clear();
    lilidee();
    FastLED.show();
    delay(10000);
    FastLED.clear();

}
*/


void loop()
{ 
    // read the state of the pushbutton value:
    buttonState1 = digitalRead(BUTTON_ONE);
    buttonState2 = digitalRead(BUTTON_TWO);
    buttonState3 = digitalRead(BUTTON_THREE);

    // check if the pushbutton one is pressed. If it is, the buttonState is HIGH:
    if (buttonState1 == HIGH) {
      // wait 500ms and change the switcher value
      switcher += 1;
      if (switcher > max_switch){
        switcher = 0;
      }
      delay(500);
     }

     // check if the pushbutton two is pressed. If it is, the buttonState is HIGH:
    if (buttonState2 == HIGH) {
      // wait 500ms and change the switcher value
      switcher -= 1;
      if (switcher < 0){
        switcher = max_switch;
      }
      delay(500);
     }

     // check if the pushbutton two is pressed. If it is, the buttonState is HIGH:
    if (buttonState3 == HIGH) {
      // wait 500ms and change the switcher value
      selector = 1;
      delay(500);
     }

     // depending on switcher value, change image on LEDs
     switch (switcher) {
      case 0:
        if(selector == 0){
          lilidee();
        }
        else {
          lilidee_sel();
        }
        break;
      case 1:
        if(selector == 0){
          kreeft_1();
        }
        else {
          kreeft_1_sel();
        }
        break;
      case 2:
        if(selector == 0){
          weegschaal_2();
        }
        else {
          weegschaal_2_sel();
        }
        break;
      case 3:
        if(selector == 0){
          steenbok_3();
        }
        else {
          steenbok_3_sel();
        }
        break;
      case 4:
        if(selector == 0){
          schorpioen_4();
        }
        else {
          schorpioen_4_sel();
        }
        break;
      case 5:
        if(selector == 0){
          vissen_5();
        }
        else {
          vissen_5_sel();
        }
        break;
      case 6:
        if(selector == 0){
          ram_6();
        }
        else {
          ram_6_sel();
        }
        break;
      default:
        lilidee();
        break;
      }

      // Show LEDs
      FastLED.show();
}
