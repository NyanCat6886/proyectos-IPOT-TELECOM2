#include <stdio.h>

int main() {
    int opcion;
    float tension, temperatura;
    int salida =1;

    do {
        // Mostrar menú de diagnóstico básico
        printf("\n--- MENU DE DIAGNOSTICO ---\n");
        printf("1. Comprobar tension.\n");
        printf("2. Comprobar temperatura.\n");
        printf("3. Salir.\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        // Estructura de control para decidir la accion
        switch (opcion) {
            case 1:
                printf("Introduzca la medida de tension en voltios (V): ");
                scanf("%f", &tension);
                
                // Evaluacion de la tension de forma ordenada
                if (tension < 11.5) {
                    printf("Tension baja\n");
                } else if (tension > 12.5) {
                    printf("Tension alta\n");
                } else {
                    printf("Tension correcta\n");
                }
                break;

            case 2:
                printf("Introduzca la temperatura en grados Celsius (C): ");
                scanf("%f", &temperatura);
                
                // Evaluacion de la temperatura
                if (temperatura > 60.0) {
                    printf("Temperatura alta\n");
                } else {
                    printf("Temperatura aceptable\n");
                }
                break;

            case 3:
                printf("Saliendo del programa de diagnostico...\n");
                break;

            default:
                printf("Opcion no valida. Por favor, intente de nuevo.\n");
                break;
        }

    } while (opcion != 3 &&salida==0); // El bucle se repite mientras no se elija salir

    return 0;
}
