#include <stdio.h> //librería standard input-output
#include <math.h> //librería para matemáticas
int main(void){
float potencia, energia, tiempo; //variables tipo float donde se van a almacenar los números
printf("Mete potencia en vatios: "); //imprime por pantalla la petición de número
scanf(" %f", &potencia); //escanea el número metido y con el operador & lo almacena en la variable solicitada
printf("Mete tiempo en horas: ");
scanf(" %f", &tiempo);

float resultado = potencia*tiempo;

printf("El resultado es: %.2f Vatios/hora (Wh) ",resultado);
return 0;
}