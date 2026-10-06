#include <stdio.h>
#include <math.h>

int main (){
float medidas, canales; //variables tipo float donde se van a almacenar los datos
printf("Mete medidas: "); //imprime por pantalla la petición
scanf(" %f", &medidas); //escanea la medida y con el operador & lo almacena en la variable solicitada
printf("Mete Nº Canales: ");
scanf(" %f", &canales);

float media = medidas/canales;
printf ("La media es: %.2f (en Nº entero) ",media);
    return 0;
}