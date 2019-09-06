/**
   Leitura Analógica
   @author Fabio Dias
*/

void setup() {
  Serial.begin(9600);
  pinMode (2,OUTPUT);
}

void loop() {
  int leitura;
  leitura = analogRead (A0); // leitura varia de 0 a 1023
  Serial.println (leitura);
if (leitura <=750){
  digitalWrite (2, HIGH);
}else{
  digitalWrite (2, LOW);
}
}
