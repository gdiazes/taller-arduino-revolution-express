/*
  Práctica 5: Potenciómetro controla Brillo LED (PWM)
  Objetivo: Usar el valor de un potenciómetro para controlar el brillo de un LED.
  Conceptos: Salida Analógica simulada (analogWrite - PWM), función map().
  Circuito:
  - Potenciómetro: Igual que Práctica 4 (Pin A0).
  - LED: Conectado a un pin PWM (~), por ejemplo, Pin 9.
     GND -> Resistencia (220/330 Ohm) -> Cátodo LED (-) -> Ánodo LED (+) -> Pin ~9 Arduino
  Taller: Arduino Revolution: de cero a HÉROE MAKER (Express)
*/

const int potPin = A0; // Pin analógico del potenciómetro
const int ledPin = 9;  // Pin PWM (con ~) para el LED

int valorPot = 0;    // Valor leído del potenciómetro (0-1023)
int brilloLed = 0;   // Valor de brillo para el LED (0-255)

void setup() {
  // Configura el pin del LED como SALIDA.
  pinMode(ledPin, OUTPUT);

  // (Opcional) Iniciar Serial para ver los valores si quieres depurar.
  // Serial.begin(9600);
}

void loop() {
  // 1. Leer el valor del potenciómetro (0 a 1023).
  valorPot = analogRead(potPin);

  // 2. Mapear (convertir) el rango del potenciómetro (0-1023)
  //    al rango del PWM (0-255).
  brilloLed = map(valorPot, 0, 1023, 0, 255);

  // 3. Escribir el valor de brillo al pin PWM del LED.
  analogWrite(ledPin, brilloLed);

  // (Opcional) Imprimir valores en el Monitor Serie para ver qué está pasando.
  // Serial.print("Pot: ");
  // Serial.print(valorPot);
  // Serial.print(" -> Brillo: ");
  // Serial.println(brilloLed);

  // Pequeña pausa.
  delay(10);
}
