// Inclua a biblioteca do ESP32
#include <WiFi.h>

// Pinos dos sensores analógicos
const int pinSensorLuz = 34;     // Pino A34 para o sensor de luz
const int pinSensorUmidade = 35; // Pino A35 para o sensor de umidade

void setup() {
  // Inicializa a comunicação serial com velocidade de 115200 bps
  Serial.begin(115200);

  // Configuração do Wi-Fi (opcional)
 /* WiFi.begin("ETE-ALUNOS", "etefmc890");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Conectando ao Wi-Fi...");
  }

  Serial.println("Conectado ao Wi-Fi!");*/
}

void loop() {
  // Lê os valores analógicos dos sensores
  int valorLuz = analogRead(pinSensorLuz);
  int valorUmidade = analogRead(pinSensorUmidade);

  // Imprime os valores no Serial Monitor
  Serial.print("Luz: ");
  Serial.print(valorLuz);
  Serial.print(", Umidade: ");
  Serial.println(valorUmidade);

  delay(1000); // Aguarda 1 segundo antes da próxima leitura
}
