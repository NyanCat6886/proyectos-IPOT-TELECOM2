#include <stdio.h>

int main(void) {
    int opcion = 0;
    float tension;
    // VARIABLE PASO 5: Contador para acumular las comprobaciones de tension
    int contador_tensiones = 0; 

    do {
        printf("\n1. Comprobar tension\n");
        printf("2. Salir\n");
        printf("Elige una opcion: ");
        
        // CORRECCIÓN 1 (Ejecución): Se añade '&' para dar la dirección de memoria a scanf
        scanf(" %d", &opcion); 

        switch (opcion) {
            case 1:
                printf("Tension (V): ");
                scanf(" %f", &tension);
                
                if (tension < 11.5f) {
                    printf("Tension baja\n");
                } else if (tension > 12.5f) {
                    printf("Tension alta\n");
                } else {
                    printf("Tension correcta\n");
                }
                
                // PASO 5: Incrementamos el contador cada vez que se comprueba la tensión
                contador_tensiones++; 
                
                // CORRECCIÓN 2 (Lógico): Se añade el break que faltaba para no arrastrar al case 2
                break; 
                
            case 2:
                printf("Fin del diagnostico\n");
                // PASO 5: Mostramos el total acumulado justo al seleccionar la salida
                printf("Se han realizado un total de %d comprobaciones de tension.\n", contador_tensiones);
                break;
                
            default:
                printf("Opcion no valida\n");
                break;
        }
        
    // CORRECCIÓN 3 (Sintaxis): Se añade ';' al final de la línea 5 original y se corrige el operador '!='
    } while (opcion != 2); 

    return 0;
}
