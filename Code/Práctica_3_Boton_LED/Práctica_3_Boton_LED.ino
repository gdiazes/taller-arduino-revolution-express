/*
  Práctica 3: Botón y LED
  Objetivo: Encender un LED externo solo cuando se presiona un pulsador.
  Conceptos: Entrada digital (INPUT), digitalRead, if/else (toma de decisiones).
  Circuito:
  - LED: Igual que Práctica 2 (Pin 8).
  - Botón (Pull-down):
    * Pin 2 -> Pata 1 del pulsador
    * Pata 1 del pulsador -> Resistencia 10k Ohm -> GND
    * Pata 2 del pulsador -> 5V
  Taller: Arduino Revolution: de cero a HÉROE MAKER (Express)
*/

const int ledPin = 8;     // Pin para el LED
const int botonPin = 2;   // Pin para el pulsador

int estadoBoton = 0;      // Variable para guardar el estado del botón (0 o 1 / LOW o HIGH)

void setup() {
  // Configura el pin del LED como SALIDA.
  pinMode(ledPin, OUTPUT);

  // Configura el pin del botón como ENTRADA.
  // Con la resistencia pull-down, leerá LOW cuando no se presiona y HIGH cuando se presiona.
  pinMode(botonPin, INPUT);

  // (Opcional) Apagar el LED al inicio.
  digitalWrite(ledPin, LOW);
}

void loop() {
  // Lee el estado del pin del botón (HIGH si está presionado, LOW si no).
  estadoBoton = digitalRead(botonPin);

  // Comprueba si el botón está presionado (estado es HIGH).
  if (estadoBoton == HIGH) {
    // Si está presionado, enciende el LED.
    digitalWrite(ledPin, HIGH);
  } else {
    // Si no está presionado (estado es LOW), apaga el LED.
    digitalWrite(ledPin, LOW);
  }

  // Pequeña pausa para estabilizar la lectura (opcional, pero buena práctica).
  delay(10);
}
