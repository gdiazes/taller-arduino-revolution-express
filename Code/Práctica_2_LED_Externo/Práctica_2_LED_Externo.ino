/*
  Práctica 2: LED Externo
  Objetivo: Hacer parpadear un LED conectado a un pin digital externo.
  Conceptos: Uso de pines digitales, protoboard, circuito LED + resistencia.
  Circuito: GND -> Resistencia (220/330 Ohm) -> Cátodo LED (-) -> Ánodo LED (+) -> Pin 8 Arduino
  Taller: Arduino Revolution: de cero a HÉROE MAKER (Express)
*/

// Definimos una variable para guardar el número del pin donde conectamos el LED.
// Esto hace más fácil cambiarlo si decidimos usar otro pin.
const int ledPin = 8;

void setup() {
  // Configura el pin digital 'ledPin' (pin 8) como SALIDA.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Enciende el LED externo.
  digitalWrite(ledPin, HIGH);
  delay(500); // Parpadeo más rápido esta vez (medio segundo)

  // Apaga el LED externo.
  digitalWrite(ledPin, LOW);
  delay(500);

  // El loop se repite.
}
