# Arduino Revolution: de cero a HÉROE MAKER (¡Edición Express!) 🔥

![Arduino Logo](https://upload.wikimedia.org/wikipedia/commons/thumb/3/38/Arduino_Uno_-_R3.jpg/320px-Arduino_Uno_-_R3.jpg) <!-- Puedes cambiar esta imagen por una tuya o un banner del taller -->

¡Bienvenido/a al repositorio oficial del taller presencial **"Arduino Revolution: de cero a HÉROE MAKER"**!

Este taller intensivo de **2 horas** está diseñado para llevarte desde los conceptos más básicos hasta la creación de tu primer proyecto interactivo con Arduino. Si eres un principiante absoluto, estudiante, artista, o simplemente alguien curioso con ganas de empezar en el **mundo maker**, ¡este es tu lugar!

**Objetivo:** Que al finalizar el taller, comprendas los fundamentos de Arduino (hardware y software) y te sientas capaz y motivado/a para empezar a dar vida a tus propias ideas, ¡convirtiéndote en un verdadero HÉROE MAKER! 🚀

---

## 📋 Prerrequisitos

Para aprovechar al máximo el taller, necesitarás:

**Hardware (Kit Básico de Arduino):**

*   1 x Placa Arduino UNO (o compatible)
*   1 x Cable USB (Tipo A a B)
*   1 x Protoboard (Placa de prototipos)
*   ~5-10 x Cables de conexión (Jumpers Macho-Macho)
*   2-3 x LEDs (colores variados si es posible)
*   2-3 x Resistencias de 220Ω o 330Ω (para los LEDs)
*   1 x Pulsador (Push button)
*   1 x Resistencia de 10kΩ (para el pull-down del pulsador)
*   1 x Potenciómetro de 10kΩ

**Software:**

*   Un ordenador portátil (Windows, macOS o Linux).
*   El **Arduino IDE (Entorno de Desarrollo Integrado) instalado ANTES del taller**.
    *   Descarga la última versión desde: [https://www.arduino.cc/en/software](https://www.arduino.cc/en/software)
    *   ¡Asegúrate de poder abrirlo y que reconoce tu placa Arduino al conectarla! (Esto ahorra mucho tiempo).

---

## 📂 Contenido del Repositorio

Este repositorio contiene todo el material necesario para seguir y repasar el taller:

*   **/Code:** Contiene el código fuente (`.ino`) para cada una de las prácticas realizadas. Cada práctica está en su propia carpeta.
    *   `Práctica_1_Blink/`
    *   `Práctica_2_LED_Externo/`
    *   `Práctica_3_Boton_LED/`
    *   `Práctica_4_Pot_Serial/`
    *   `Práctica_5_Pot_PWM/` (Opcional / Reto)
*   **/Diagrams:** (Opcional - ¡Muy recomendado!) Contiene los esquemas de conexión (diagramas Fritzing o fotos) para cada circuito de las prácticas.
    *   `Diagrama_Practica_2.png`
    *   `Diagrama_Practica_3.png`
    *   `Diagrama_Practica_4.png`
    *   `Diagrama_Practica_5.png`
*   **/Slides:** (Opcional) Contiene la presentación utilizada durante la charla en formato PDF.
    *   `Arduino_Revolution_Taller.pdf`
*   **README.md:** Este archivo que estás leyendo.

---

## 🚀 Cómo Utilizar este Repositorio

1.  **Antes del taller:**
    *   Asegúrate de cumplir los **Prerrequisitos** (¡especialmente instalar el Arduino IDE!).
    *   Puedes clonar o descargar este repositorio (`git clone https://github.com/tu_usuario/tu_repositorio.git` o descargar como ZIP).
2.  **Durante el taller:**
    *   Sigue las explicaciones del instructor.
    *   Abre los archivos `.ino` correspondientes a cada práctica desde la carpeta `/Code` usando el Arduino IDE.
    *   Utiliza los diagramas en `/Diagrams` (si están disponibles) como guía para montar los circuitos en tu protoboard.
    *   ¡Experimenta y pregunta!
3.  **Después del taller:**
    *   Utiliza este repositorio para repasar los conceptos y el código.
    *   Intenta modificar los códigos y circuitos para probar nuevas ideas.
    *   Consulta la sección de **Próximos Pasos**.

---

## ⏱️ Esquema del Taller (2 Horas)

1.  **(20 min) Introducción y Preparación:**
    *   Bienvenida y la chispa Maker.
    *   Arduino Express: Hardware y Software clave.
    *   Configuración rápida del IDE y la placa.
2.  **(75 min) Prácticas Fundamentales:**
    *   **Práctica 1:** ¡La Primera Luz! (Blink Básico - Salida Digital)
    *   **Práctica 2:** ¡Tu Propio Circuito! (LED Externo - Protoboard y Resistencia)
    *   **Práctica 3:** ¡Escuchando al Usuario! (Leer un Pulsador - Entrada Digital, `if/else`)
    *   **Práctica 4:** ¡Control Analógico y Feedback! (Potenciómetro + Monitor Serie - Entrada Analógica, `Serial`)
3.  **(0-15 min) El Momento "HÉROE MAKER" (Opcional / Reto):**
    *   **Práctica 5:** ¡Luz Reactiva! (Potenciómetro controla Brillo LED - PWM, `map()`)
4.  **(10 min) Cierre y Próximos Pasos:**
    *   Resumen y ¡Misión Cumplida!
    *   La Revolución Continúa: Recursos e ideas.
    *   Preguntas y Despedida.

---

## 💡 Próximos Pasos y Recursos

¡Felicidades por completar tu iniciación como HÉROE MAKER! El viaje no ha hecho más que empezar. Aquí tienes algunas ideas y recursos:

*   **Experimenta:** Modifica los códigos de las prácticas. ¿Puedes hacer que el LED parpadee más rápido con el potenciómetro? ¿Puedes usar el botón para cambiar entre dos patrones de parpadeo?
*   **Completa el Reto:** Si no dio tiempo, intenta implementar la Práctica 5 (Control de brillo con PWM).
*   **Nuevos Componentes:** Investiga cómo usar otros sensores (LDR - sensor de luz, TMP36 - temperatura, HC-SR04 - ultrasonidos) y actuadores (servomotores, buzzers).
*   **Recursos Oficiales:**
    *   **Web Oficial Arduino:** [arduino.cc](https://www.arduino.cc/) - ¡Tu fuente principal!
    *   **Referencia Arduino:** [https://www.arduino.cc/reference/en/](https://www.arduino.cc/reference/en/) - Explica todas las funciones.
    *   **Tutoriales Arduino:** [https://docs.arduino.cc/tutorials/](https://docs.arduino.cc/tutorials/)
    *   **Arduino Forum:** [https://forum.arduino.cc/](https://forum.arduino.cc/) - Comunidad para preguntar dudas.
*   **Comunidad Maker:** Busca FabLabs, Makerspaces o grupos de Arduino en tu ciudad.

---

## 📄 Licencia

El código fuente en este repositorio se distribuye bajo la Licencia MIT. Puedes ver el archivo `LICENSE` para más detalles.
El resto del material (presentaciones, diagramas) se distribuye bajo [Creative Commons Attribution-ShareAlike 4.0 International (CC BY-SA 4.0)](https://creativecommons.org/licenses/by-sa/4.0/).

---

¡Gracias por participar en la **Arduino Revolution**! ¡Sigue creando! ✨
