#include <stdio.h>
#include <locale.h>
#include <string.h>

void Listar_Nombres(char Nombres[10][20]) {
    printf("\n");
    for (int i = 0; i < 10; i++) {
        if (strlen(Nombres[i]) <= 0) {break;}
        printf("[%d] %s", i+1, Nombres[i]);
    }
}

void Insertar_Nombre(char Nombres[10][20], char Nombre[20], int index) {
    for (int n = 0; n < 20; n++) {
        Nombres[index][n] = Nombre[n];
    }
}

void Default_Lista_Nombres(char Nombres[10][20]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            Nombres[i][j] = '\0';
        }
    }
}

void Crear_Lista_Nombres(char Nombres[10][20]) {
    int n_Nombres; char Nombre[20];
    printf("¿Cuántos nombres vas a ingresar (El máximo es 10): ");
    scanf("%d", &n_Nombres); getchar();
    if (n_Nombres > 10) {n_Nombres = 10;}
    for (int i = 0; i < n_Nombres; i++) {
        printf("Nombre %d: ", i+1);
        fgets(Nombre, sizeof(Nombre), stdin);
        Insertar_Nombre(Nombres, Nombre, i);
    }
}

int main() {
    setlocale(LC_ALL, "");
    char Nombres[10][20]; Default_Lista_Nombres(Nombres);
    Crear_Lista_Nombres(Nombres);
    Listar_Nombres(Nombres);
    return 0;
}
