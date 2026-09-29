#include <stdio.h>
int main(void){
    int puertos = 6;
    int canal = 4;
    float potencia = 12.5863;
    float division = (float)puertos/canal;
    printf("Número puertos: %d y Número de canales: %d\n", puertos, canal);
    printf("Division: %f", division);
    return 0;
}