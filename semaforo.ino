int verde1 = 4;
int amarelo1 = 5;
int red1 = 6;
int verde2 = 11;
int amarelo2 = 12;
int red2 = 13;
int tempo = 2000;
int leds [2][3] = {
  {verde1, amarelo1, red1},
  {verde2, amarelo2, red2}
};

void setup(){
  for (int n = 0; n<=5; n++){
  	for(int i = 0; i <= 2; i++){
  		pinMode(leds[n][i], OUTPUT);
  	}
  }
}

void loop(){
  for(int n = 0; n <= 1; n++){
      for(int i = 0; i <= 2; i++){
          if ((n == 0 && i == 2)){
              digitalWrite(leds[n][i], HIGH);
              digitalWrite(leds[n+1][i], LOW);
              delay(500);
          }
     	  if ((n == 1 && i == 2)){
              digitalWrite(leds[n][i], HIGH);
              digitalWrite(leds[n-1][i], LOW);
              delay(500);
          }
          if (!((n == 0 && i == 2) || (n == 1 && i == 2))){
              digitalWrite(leds[n][i], HIGH);
          	  delay(tempo);
              digitalWrite(leds[n][i], LOW);
          }
      }
  }
 
}