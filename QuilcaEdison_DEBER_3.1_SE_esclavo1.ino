/*UNIVERSIDAD TÉCNICA DEL NORTE
 * FACULTAD DE INGENIERÍA EN CIENCIAS APLICADAS
 * TEMA: Comunicación I2C
 * OBJETIVO: Mediante comunicación I2C configurar 1 maestro y 3 esclavos. Cada esclavo tendrá conectados 4 leds en sus salidas digitales, los cuales deberán encenderse de forma síncrona y ordenada. 
 * Los leds del primer esclavo deberán entran en funcionamiento cuando se ingrese 'Cualquier caracter', luego cuando se ingrese otro 'Cualquier caracter 2' entrará en funcionamiento el esclavo 2, 
 * y después cuando se ingrese otro 'Cualquier caracter 3' entrará en funcionamiento el esclavo 3.
 * NOMBRE: Quilca Edison
 * FECHA: 21 de noviembre del 2021
 * DEBER 3.1
  */

 ////////////////////////////////ESCLAVO 1/////////////////////////////
 
#include <Wire.h>                                      //librería i2c

char dato;                                             // variable de almacenamiento de dato de cx i2c
const int led[4]={8,9,10,11};                          // declaración de pines para leds
int i;                                                  // variable i para el for
void setup() {
  Wire.begin(1);                                        // id de esclavo                        
  Wire.onReceive(receiveEvent);                         // evento de recepción
  Serial.begin(9600);                                   // inicio de comunicación serial

  for(i=0;i<4;i++){                                     //declaración de pines como salidas/uso de for para recorrido 
  pinMode(led[i],OUTPUT);
}}
void loop() {
  delay(200);                                           //tiempo de espera
}
void receiveEvent(int bytes){                           // método de recepción
 
  while(Wire.available()==1){                              //condición que verifica datos
    dato=Wire.read();                                   // lee datos almacenados
        
           for(i=0;i<4;i++){                             //uso de for para encendido de leds
            digitalWrite(led[i],LOW);
            delay(100);
             digitalWrite(led[i],HIGH);
            delay(10000);
             digitalWrite(led[i],LOW);
            delay(100);
           
       
  }  }}
  
