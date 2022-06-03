//4 pinos: 
// GND VCC WORKING (WE) AUX
//OP1 WE OP2 AUX
//OP1 LARANJA
//OP2 AMARELO

// Entrada para leitura analógica
int CO_pin_WE = 15;
int CO_pin_AUX = 14;

float CO_WE_Read;
float CO_AUX_Read;
float CO_concentration;
float WE_Sensitivity = 336;




void setup() {
  Serial.begin (9600);
  Serial.print("Alphasense CO sensor Test");
  
}

void loop() {

  CO_WE_Read = analogRead(CO_pin_WE);
  CO_AUX_Read = analogRead(CO_pin_AUX);


  
  CO_concentration = (CO_WE_Read - CO_AUX_Read) / WE_Sensitivity;

  Serial.print("CO concentration: ");
  Serial.print(CO_concentration);  
  Serial.print("\n");
  delay(1000);
  
  

  
}
