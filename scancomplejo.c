#include <stdio.h>
int main(void) {
float potencia_w, horas, energia_wh;
printf("Potencia (W): ");
scanf(" %f", &potencia_w);
printf("Tiempo (h): ");
scanf(" %f", &horas);
energia_wh = potencia_w * horas;
printf("Energia: %.2f Wh\n", energia_wh);
return 0;
}