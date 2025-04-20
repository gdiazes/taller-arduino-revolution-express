/*
  Práctica 1: Blink Básico
  Objetivo: Hacer parpadear el LED integrado en la placa Arduino (normalmente en el pin 13).
  Conceptos: pinMode, OUTPUT, digitalWrite, HIGH, LOW, delay.
  Circuito: Solo la placa Arduino conectada al PC.
  Taller: Arduino Revolution: de cero a HÉROE MAKER (Express)
*/

void setup() {
  // Configura el pin del LED integrado como una SALIDA (OUTPUT).
  // LED_BUILTIN es una constante que representa el pin del LED en la placa.
  pinMode(LED_BUILTIN, OUTPUT);
  // Nota: En la mayoría de las placas Arduino UNO, LED_BUILTIN es el pin 13.
}

void loop() {
  // Enciende el LED (pone el voltaje en HIGH - alto).
  digitalWrite(LED_BUILTIN, HIGH);

  // Espera 1000 milisegundos (1 segundo).
  delay(1000);

  // Apaga el LED (pone el voltaje en LOW - bajo).
  digitalWrite(LED_BUILTIN, LOW);

  // Espera otro segundo.
  delay(1000);

  // El loop se repite automáticamente.
}
