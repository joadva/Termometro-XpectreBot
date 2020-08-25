
#include <Wire.h>
#include <Adafruit_MLX90614.h>

// Instanciar objeto
Adafruit_MLX90614 termometroIR = Adafruit_MLX90614();

void setup() {   
  // Iniciar comunicación serie
  Serial.begin(9600);
  
  //En la función setup() hay que iniciar el objeto llamando a la función termometroIR.begin().
  // Iniciar termómetro infrarrojo con Arduino
  termometroIR.begin();   //

}

void loop() {
  // Obtener temperaturas grados Celsius
  float temperaturaAmbiente = termometroIR.readAmbientTempC(); //La función termometroIR.readAmbientTempC() obtiene la temperatura ambiente en grados Celsius.
  float temperaturaObjeto = termometroIR.readObjectTempC(); //La función termometroIR.readObjectTempC() obtiente la temperatura del objeto en grados Celsius.

  // Mostrar información
  Serial.print("Temp. ambiente => ");
  Serial.print(temperaturaAmbiente);
  Serial.println("ºC");

  Serial.print("Temp. objeto => ");
  Serial.print(temperaturaObjeto);
  Serial.println("ºC");
  
  delay(2000);

  // Si quieres mostrar la información en grados Fahrenheit utiliza las funciones
  // readAmbientTempF() para temperatura ambiente
  // readObjectTempF() para temperatura del objeto

}
