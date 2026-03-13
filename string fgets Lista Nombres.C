#include <stdio.h>
#include <string.h>

void Mostrar_Lista(char Lista[3][16]) {
    for (int i = 0; i < 3; i++) {
        printf("Alumno %d: ", i+1);
        for (int j = 0; j < 16; j++) {
            printf("%c", Lista[i][j]);
        }
    }
    printf("\n");
}

void Crear_Lista(char Lista[3][16]) {
    char Nombres_Alumnos[3][16];
    for (int i = 0; i < 3; i++) {
        printf("Nombre del alumno %d: ", i+1);
        fgets(Nombres_Alumnos[i], sizeof(Nombres_Alumnos[i]), stdin);
    }
    for (int x = 0; x < 3; x++) {
        for (int n = 0; n < 16; n++) {
            Lista[x][n] = Nombres_Alumnos[x][n];
        }
    }
    printf("\n");
}

int main() {
    char Lista[3][16];
    Crear_Lista(Lista);
    Mostrar_Lista(Lista);
}
