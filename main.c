#include <stdio.h>
int main(void){
    int puertos = 6;
    int canal = 4;
    float potencia = 3.5f;
    float division = (float)puertos/canal;

    char zona ='B';

    printf("Puertos: %d\n", puertos);
    printf("");
    printf("Número puertos: %d y Número de canales: %d\n", puertos, canal);
    printf("Division: %f\n", division);


    return 0;
}