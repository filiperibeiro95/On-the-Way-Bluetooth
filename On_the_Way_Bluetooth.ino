//1.ligar o arduino, 2.passar o código 3.passar para a powerbank
#include <SoftwareSerial.h>
#include <FastLED.h>

#define LED_PIN     6
#define NUM_LEDS    64
#define BRIGHTNESS 10

CRGB leds[NUM_LEDS];




SoftwareSerial Bluetooth(10, 11); // Arduino(RX, TX) - Bluetooth (TX, RX)
int dataIn = 0;
int aux = 0;

void setup() {

  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(10);
  Serial.begin(9600);

}

//ligar o arduino, passar o código e depois desligar
void loop() {


  if (Serial.available() > 0) {

    dataIn = Serial.parseInt();

    Serial.println(Serial.available());

    // badge "Explorador"
    if (dataIn == 3)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      Serial.println("explorador");
      leds[3] = CRGB(18, 32, 219);
      FastLED.show();
      leds[4] = CRGB(18, 32, 219);
      FastLED.show();
      leds[11] = CRGB(18, 32, 219);
      FastLED.show();
      leds[12] = CRGB(18, 32, 219);
      FastLED.show();
      leds[13] = CRGB(18, 32, 219);
      FastLED.show();
      leds[16] = CRGB(18, 32, 219);
      FastLED.show();
      leds[17] = CRGB(18, 32, 219);
      FastLED.show();
      leds[18] = CRGB(18, 32, 219);
      FastLED.show();
      leds[19] = CRGB(18, 32, 219);
      FastLED.show();
      leds[20] = CRGB(18, 32, 219);
      FastLED.show();
      leds[21] = CRGB(18, 32, 219);
      FastLED.show();
      leds[22] = CRGB(18, 32, 219);
      FastLED.show();
      leds[23] = CRGB(18, 32, 219);
      FastLED.show();
      leds[24] = CRGB(18, 32, 219);
      FastLED.show();
      leds[25] = CRGB(18, 32, 219);
      FastLED.show();
      leds[26] = CRGB(18, 32, 219);
      FastLED.show();
      leds[27] = CRGB(18, 32, 219);
      FastLED.show();
      leds[28] = CRGB(18, 32, 219);
      FastLED.show();
      leds[29] = CRGB(18, 32, 219);
      FastLED.show();
      leds[30] = CRGB(18, 32, 219);
      FastLED.show();
      leds[31] = CRGB(18, 32, 219);
      FastLED.show();
      leds[35] = CRGB(83, 92, 229);
      FastLED.show();
      leds[36] = CRGB(83, 92, 229);
      FastLED.show();
      leds[43] = CRGB(83, 92, 229);
      FastLED.show();
      leds[44] = CRGB(83, 92, 229);
      FastLED.show();
      leds[51] = CRGB(83, 92, 229);
      FastLED.show();
      leds[52] = CRGB(83, 92, 229);
      FastLED.show();
      aux = dataIn;

    }
    // badge "Viciado"
    if (dataIn == 4)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      Serial.println('viciado');
      leds[3] = CRGB(18, 32, 219);
      FastLED.show();
      leds[5] = CRGB(18, 32, 219);
      FastLED.show();
      leds[8] = CRGB(18, 32, 219);
      FastLED.show();
      leds[9] = CRGB(18, 32, 219);
      FastLED.show();
      leds[10] = CRGB(18, 32, 219);
      FastLED.show();
      leds[11] = CRGB(18, 32, 219);
      FastLED.show();
      leds[12] = CRGB(18, 32, 219);
      FastLED.show();
      leds[13] = CRGB(18, 32, 219);
      FastLED.show();
      leds[14] = CRGB(18, 32, 219);
      FastLED.show();
      leds[15] = CRGB(18, 32, 219);
      FastLED.show();
      leds[19] = CRGB(18, 32, 219);
      FastLED.show();
      leds[21] = CRGB(18, 32, 219);
      FastLED.show();
      leds[24] = CRGB(18, 32, 219);
      FastLED.show();
      leds[25] = CRGB(18, 32, 219);
      FastLED.show();
      leds[26] = CRGB(18, 32, 219);
      FastLED.show();
      leds[27] = CRGB(18, 32, 219);
      FastLED.show();
      leds[29] = CRGB(18, 32, 219);
      FastLED.show();
      leds[37] = CRGB(18, 32, 219);
      FastLED.show();
      leds[40] = CRGB(18, 32, 219);
      FastLED.show();
      leds[41] = CRGB(18, 32, 219);
      FastLED.show();
      leds[42] = CRGB(18, 32, 219);
      FastLED.show();
      leds[45] = CRGB(18, 32, 219);
      FastLED.show();
      leds[46] = CRGB(18, 32, 219);
      FastLED.show();
      leds[47] = CRGB(18, 32, 219);
      FastLED.show();
      leds[50] = CRGB(18, 32, 219);
      FastLED.show();
      leds[58] = CRGB(18, 32, 219);
      FastLED.show();
      aux = dataIn;

    }


    // badge "Exemplar"
    if (dataIn == 5)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      leds[14] = CRGB(0, 255, 0);
      FastLED.show();
      leds[17] = CRGB(0, 255, 0);
      FastLED.show();
      leds[21] = CRGB(0, 255, 0);
      FastLED.show();
      leds[26] = CRGB(0, 255, 0);
      FastLED.show();
      leds[28] = CRGB(0, 255, 0);
      FastLED.show();
      leds[35] = CRGB(0, 255, 0);
      FastLED.show();
      aux = dataIn;
    }

      // badge "Disponibilidade"
    if (dataIn == 7)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
        leds[19] = CRGB(0, 255, 0);
      FastLED.show();
        leds[27] = CRGB(0, 255, 0);
      FastLED.show();
      leds[35] = CRGB(0, 255, 0);
      FastLED.show();
      leds[43] = CRGB(0, 255, 0);
      FastLED.show();
      leds[44] = CRGB(0, 255, 0);
      FastLED.show();
      leds[45] = CRGB(0, 255, 0);
      FastLED.show();
      leds[50] = CRGB(0, 255, 0);
      FastLED.show();
      leds[51] = CRGB(0, 255, 0);
      FastLED.show();
      leds[52] = CRGB(0, 255, 0);
      FastLED.show();
      leds[53] = CRGB(0, 255, 0);
      FastLED.show();
      leds[58] = CRGB(0, 255, 0);
      FastLED.show();
      leds[59] = CRGB(0, 255, 0);
      FastLED.show();
      leds[60] = CRGB(0, 255, 0);
      FastLED.show();
      leds[61] = CRGB(0, 255, 0);
      FastLED.show();
      }
     
    }

    // badge "Satisfação"
    if (dataIn == 11)  {

      if (aux != dataIn) {
        FastLED.clear();
      }
      leds[0] = CRGB(244, 179, 37);
      FastLED.show();
      leds[1] = CRGB(247, 206, 116);
      FastLED.show();
      leds[2] = CRGB(247, 206, 116);
      FastLED.show();
      leds[3] = CRGB(244, 179, 37);
      FastLED.show();
      leds[8] = CRGB(244, 179, 37);
      FastLED.show();
      leds[9] = CRGB(247, 206, 116);
      FastLED.show();
      leds[10] = CRGB(247, 206, 116);
      FastLED.show();
      leds[11] = CRGB(244, 179, 37);
      FastLED.show();
      leds[16] = CRGB(244, 179, 37);
      FastLED.show();
      leds[17] = CRGB(244, 179, 37);
      FastLED.show();
      leds[18] = CRGB(244, 179, 37);
      FastLED.show();
      leds[19] = CRGB(244, 179, 37);
      FastLED.show();
      leds[24] = CRGB(244, 179, 37);
      FastLED.show();
      leds[25] = CRGB(244, 179, 37);
      FastLED.show();
      leds[26] = CRGB(244, 179, 37);
      FastLED.show();
      leds[27] = CRGB(244, 179, 37);
      FastLED.show();
      leds[36] = CRGB(244, 179, 37);
      FastLED.show();
      leds[37] = CRGB(247, 206, 116);
      FastLED.show();
      leds[38] = CRGB(247, 206, 116);
      FastLED.show();
      leds[39] = CRGB(244, 179, 37);
      FastLED.show();
      leds[44] = CRGB(244, 179, 37);
      FastLED.show();
      leds[45] = CRGB(247, 206, 116);
      FastLED.show();
      leds[46] = CRGB(247, 206, 116);
      FastLED.show();
      leds[47] = CRGB(244, 179, 37);
      FastLED.show();
      leds[52] = CRGB(244, 179, 37);
      FastLED.show();
      leds[53] = CRGB(244, 179, 37);
      FastLED.show();
      leds[54] = CRGB(244, 179, 37);
      FastLED.show();
      leds[55] = CRGB(244, 179, 37);
      FastLED.show();
      leds[60] = CRGB(244, 179, 37);
      FastLED.show();
      leds[61] = CRGB(244, 179, 37);
      FastLED.show();
      leds[62] = CRGB(244, 179, 37);
      FastLED.show();
      leds[63] = CRGB(244, 179, 37);
      FastLED.show();
      aux = dataIn;
    }

    // badge "Leal"
    if (dataIn == 9)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      leds[9] = CRGB(0, 255, 0);
      FastLED.show();
      leds[10] = CRGB(0, 255, 0);
      FastLED.show();
      leds[11] = CRGB(0, 255, 0);
      FastLED.show();
      leds[12] = CRGB(0, 255, 0);
      FastLED.show();
      leds[13] = CRGB(0, 255, 0);
      FastLED.show();
      leds[14] = CRGB(0, 255, 0);
      FastLED.show();
      leds[16] = CRGB(0, 255, 0);
      FastLED.show();
      leds[17] = CRGB(0, 255, 0);
      FastLED.show();
      leds[18] = CRGB(0, 255, 0);
      FastLED.show();
      leds[19] = CRGB(0, 255, 0);
      FastLED.show();
      leds[20] = CRGB(0, 255, 0);
      FastLED.show();
      leds[21] = CRGB(0, 255, 0);
      FastLED.show();
      leds[22] = CRGB(0, 255, 0);
      FastLED.show();
      leds[23] = CRGB(0, 255, 0);
      FastLED.show();
      leds[24] = CRGB(0, 255, 0);
      FastLED.show();
      leds[26] = CRGB(0, 255, 0);
      FastLED.show();
      leds[27] = CRGB(0, 255, 0);
      FastLED.show();
      leds[28] = CRGB(0, 255, 0);
      FastLED.show();
      leds[29] = CRGB(0, 255, 0);
      FastLED.show();
      leds[31] = CRGB(0, 255, 0);
      FastLED.show();
      leds[34] = CRGB(0, 255, 0);
      FastLED.show();
      leds[35] = CRGB(0, 255, 0);
      FastLED.show();
      leds[36] = CRGB(0, 255, 0);
      FastLED.show();
      leds[37] = CRGB(0, 255, 0);
      FastLED.show();
      leds[42] = CRGB(0, 255, 0);
      FastLED.show();
      leds[43] = CRGB(0, 255, 0);
      FastLED.show();
      leds[44] = CRGB(0, 255, 0);
      FastLED.show();
      leds[45] = CRGB(0, 255, 0);
      FastLED.show();
      leds[51] = CRGB(0, 255, 0);
      FastLED.show();
      leds[52] = CRGB(0, 255, 0);
      FastLED.show();
      
      aux = dataIn;




    }

    // badge "Pontualidade"
    if (dataIn == 10)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      leds[2] = CRGB(0, 255, 0);
      FastLED.show();
      leds[3] = CRGB(0, 255, 0);
      FastLED.show();
      leds[4] = CRGB(0, 255, 0);
      FastLED.show();
      leds[5] = CRGB(0, 255, 0);
      FastLED.show();
      leds[9] = CRGB(0, 255, 0);
      FastLED.show();
      leds[14] = CRGB(0, 255, 0);
      FastLED.show();
      leds[16] = CRGB(0, 255, 0);
      FastLED.show();
      leds[19] = CRGB(0, 255, 0);
      FastLED.show();
      leds[23] = CRGB(0, 255, 0);
      FastLED.show();
      leds[24] = CRGB(0, 255, 0);
      FastLED.show();
      leds[27] = CRGB(0, 255, 0);
      FastLED.show();
      leds[31] = CRGB(0, 255, 0);
      FastLED.show();
      leds[32] = CRGB(0, 255, 0);
      FastLED.show();
      leds[35] = CRGB(0, 255, 0);
      FastLED.show();
      leds[36] = CRGB(0, 255, 0);
      FastLED.show();
      leds[37] = CRGB(0, 255, 0);
      FastLED.show();
      leds[39] = CRGB(0, 255, 0);
      FastLED.show();
      leds[40] = CRGB(0, 255, 0);
      FastLED.show();
      leds[47] = CRGB(0, 255, 0);
      FastLED.show();
      leds[49] = CRGB(0, 255, 0);
      FastLED.show();
      leds[54] = CRGB(0, 255, 0);
      FastLED.show();
      leds[58] = CRGB(0, 255, 0);
      FastLED.show();
      leds[59] = CRGB(0, 255, 0);
      FastLED.show();
      leds[60] = CRGB(0, 255, 0);
      FastLED.show();
      leds[61] = CRGB(0, 255, 0);
      FastLED.show();
      aux = dataIn;
    }

    // badge "Entregas"
    if (dataIn == 8)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      leds[60] = CRGB(0, 255, 0);
      FastLED.show();
      leds[59] = CRGB(0, 255, 0);
      FastLED.show();
      leds[52] = CRGB(0, 255, 0);
      FastLED.show();
      leds[51] = CRGB(0, 255, 0);
      FastLED.show();
      leds[44] = CRGB(0, 255, 0);
      FastLED.show();
      leds[43] = CRGB(0, 255, 0);
      FastLED.show();
      leds[36] = CRGB(0, 255, 0);
      FastLED.show();
      leds[35] = CRGB(0, 255, 0);
      FastLED.show();
      leds[28] = CRGB(0, 255, 0);
      FastLED.show();
      leds[27] = CRGB(0, 255, 0);
      FastLED.show();
      leds[26] = CRGB(0, 255, 0);
      FastLED.show();
      leds[25] = CRGB(0, 255, 0);
      FastLED.show();
      leds[20] = CRGB(0, 255, 0);
      FastLED.show();
      leds[19] = CRGB(0, 255, 0);
      FastLED.show();
      leds[18] = CRGB(0, 255, 0);
      FastLED.show();
      leds[12] = CRGB(0, 255, 0);
      FastLED.show();
      leds[11] = CRGB(0, 255, 0);
      FastLED.show();
      leds[4] = CRGB(0, 255, 0);
      FastLED.show();
      aux = dataIn;
    }
     // badge "Distância"
 if (dataIn == 12)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      leds[0] = CRGB(244, 179, 37);
      FastLED.show();
      leds[1] = CRGB(247, 206, 116);
      FastLED.show();
      leds[8] = CRGB(244, 179, 37);
      FastLED.show();
      leds[9] = CRGB(247, 206, 116);
      FastLED.show();
      leds[16] = CRGB(244, 179, 37);
      FastLED.show();
      leds[17] = CRGB(244, 179, 37);
      FastLED.show();
      leds[24] = CRGB(244, 179, 37);
      FastLED.show();
      leds[25] = CRGB(244, 179, 37);
      FastLED.show();
      leds[26] = CRGB(244, 179, 37);
      FastLED.show();
      leds[27] = CRGB(244, 179, 37);
      FastLED.show();
      leds[28] = CRGB(244, 179, 37);
      FastLED.show();
      leds[32] = CRGB(244, 179, 37);
      FastLED.show();
      leds[33] = CRGB(244, 179, 37);
      FastLED.show();
      leds[34] = CRGB(244, 179, 37);
      FastLED.show();
      leds[35] = CRGB(244, 179, 37);
      FastLED.show();
      leds[36] = CRGB(244, 179, 37);
      FastLED.show();
      leds[43] = CRGB(244, 179, 37);
      FastLED.show();
      leds[44] = CRGB(244, 179, 37);
      FastLED.show();
      leds[51] = CRGB(244, 179, 37);
      FastLED.show();
      leds[52] = CRGB(244, 179, 37);
      FastLED.show();
      leds[53] = CRGB(244, 179, 37);
      FastLED.show();
      leds[54] = CRGB(244, 179, 37);
      FastLED.show();
      leds[55] = CRGB(244, 179, 37);
      FastLED.show();
      leds[59] = CRGB(244, 179, 37);
      FastLED.show();
      leds[60] = CRGB(244, 179, 37);
      FastLED.show();
      leds[61] = CRGB(244, 179, 37);
      FastLED.show();
      leds[62] = CRGB(244, 179, 37);
      FastLED.show();
      leds[63] = CRGB(244, 179, 37);
      FastLED.show();
      aux = dataIn;

    // badge "Volume"
   if (dataIn == 13)  {
      if (aux != dataIn) {
        FastLED.clear();
      }
      leds[3] = CRGB(244, 179, 37);
      FastLED.show();
      leds[4] = CRGB(247, 206, 116);
      FastLED.show();
      leds[11] = CRGB(244, 179, 37);
      FastLED.show();
      leds[12] = CRGB(244, 179, 37);
      FastLED.show();
      leds[19] = CRGB(244, 179, 37);
      FastLED.show();
      leds[20] = CRGB(244, 179, 37);
      FastLED.show();
      leds[40] = CRGB(244, 179, 37);
      FastLED.show();
      leds[41] = CRGB(244, 179, 37);
      FastLED.show();
      leds[48] = CRGB(244, 179, 37);
      FastLED.show();
      leds[49] = CRGB(244, 179, 37);
      FastLED.show();
      aux = dataIn;
  
    }
  }
}













//83,92,229 RGB do azul claro
