/*
	Programador....: (c) 2025 Pedro Monteiro
	Data...........: 07/01/2025
  Observações....: Simulação com led alusias ao carro "KITT" da série "Knight Rider"
*/
const byte LED_PIN[] = {4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
const byte DELAY = 250;

void setup(void)	{
  for(byte i = 0; i <= 9;i++)	{
    pinMode(LED_PIN[i], OUTPUT);
  }
}

void loop(void)	{
  
  for(byte i = 9; ((i >= 0) && (i <= 9));i--){
    digitalWrite(LED_PIN[i], HIGH);
    delay(250);
    digitalWrite(LED_PIN[i], LOW);
    delay(250);
  }
  for(byte i = 0; ((i >= 0) && (i <= 9));i++){
    digitalWrite(LED_PIN[i], HIGH);
    delay(250);
    digitalWrite(LED_PIN[i], LOW);
    delay(250);
  }
}
