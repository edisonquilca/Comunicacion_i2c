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
 ///////////////////////////MAESTRO//////////////////////
#include<Wire.h>                                        // librería i2c 
char dato;                                               // variable de almancenamiento de datos

  int i;                                                     
void setup() {
  Wire.begin();           //inicia comunicacion i2c
  Serial.begin(9600);     // inicia comunicacion serial
}
 
void loop() {
   if(Serial.available()>0){       //Verificar que exista datos
i++;
    if(i==1){
      dato=Serial.read();           //Almacena el dato en la variable
      Wire.beginTransmission(1);    //Empieza la comunicacion I2C
      Wire.write(dato);             //Envio dato
      Wire.endTransmission();       //Termina la comunicacion I2C
    }else{if(i==2){
      
      dato=Serial.read();           //Almacena el dato en la variable
      Wire.beginTransmission(2);    //Empieza la comunicacion I2C
      Wire.write(dato);             //Envio dato
      Wire.endTransmission();       //Termina la comunicacion I2C
      
      }else{if(i==3){
        
      dato=Serial.read();           //Almacena el dato en la variable
      Wire.beginTransmission(3);    //Empieza la comunicacion I2C
      Wire.write(dato);             //Envio dato
      Wire.endTransmission();       //Termina la comunicacion I2C    
      } }}}
    }
      
