#include <stdio.h>

/*
  Gabriel Antonio Neri Reyes
  222559699
  Programación Estructurada:
  Arreglos 1
*/

int main() {
    float Temperaturas[24];
    for (int i = 0 ; i < 24; i++) {
        printf("Temperatura %d: ", i);
        scanf("%f", &Temperaturas[i]);
    }
    for (int i = 0; i < 24; i++) {
        printf("\nTemperatura %d = %f\n Puntero %d: %p. ", i, Temperaturas[i], i, &Temperaturas[i]);
    }
    return 0;
}
