/*
  Práctica 4: Potenciómetro y Monitor Serie
  Objetivo: Leer un valor analógico variable de un potenciómetro y mostrarlo en el PC.
  Conceptos: Entrada analógica (analogRead), rango 0-1023, Monitor Serie.
  Circuito:
  - Potenciómetro: Patas externas a 5V y GND. Pata central al pin Analógico A0.
  - (El LED y el botón pueden seguir conectados pero no se usan en este código).
  Taller: Arduino Revolution: de cero a HÉROE MAKER (Express)
*/

const int potPin = A0; // Pin analógico donde conectamos el potenciómetro

int valorPot = 0;      // Variable para guardar el valor leído (0 a 1023)

void setup() {
  // Inicia la comunicación serie a 9600 bits por segundo (velocidad estándar).
  // Esto nos permite enviar datos al ordenador para verlos en el Monitor Serie.
  Serial.begin(9600);

  // No necesitamos configurar pines analógicos como INPUT, es su función por defecto.
  Serial.println("Monitor Serie Iniciado. Gira el potenciómetro..."); // Mensaje inicial
}

void loop() {
  // Lee el valor del pin analógico A0.
  // El valor estará entre 0 (0V) y 1023 (5V).
  valorPot = analogRead(potPin);

  // Imprime el valor leído en el Monitor Serie.
  // Abre el Monitor Serie en el IDE (Icono de Lupa arriba a la derecha)
  // Asegúrate de que la velocidad (baud rate) en el Monitor Serie esté en 9600.
  Serial.print("Valor del Potenciómetro: "); // Imprime texto
  Serial.println(valorPot);                 // Imprime el valor y salta de línea

  // Espera un poco para no inundar el Monitor Serie con datos.
  delay(100); // 100 milisegundos
}
