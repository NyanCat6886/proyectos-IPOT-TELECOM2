#include <stdio.h>

int main(void) {
float tension = 12.0f;
int tension_correcta = tension >= 11.5f && tension <= 12.5f;
printf("Tension correcta? %d\n", tension_correcta);
return 0;
}