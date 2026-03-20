#include <stdio.h>
#include <windows.h>
#include <string.h>

void Listar_Nombres(char Nombres[10][20]) {
    for (int i = 0; i < 10; i++) {
            printf("%d ", strlen(Nombres[i]));
            if (strlen(Nombres[i]) <= 0) {printf("\nNo hay nombre\n"); break;}
            printf("%s", Nombres[i]);
    }
}

void Insertar_Nombre(char Nombres[10][20], char Nombre[20], int index) {
    for (int n = 0; n < 20; n++) {
        Nombres[index][n] = Nombre[n];
    }
}

void Crear_Lista_Nombres(char Nombres[10][20]) {
    int n_Nombres; char Nombre[20];
    printf("¿Cuántos nombres vas a ingresar (El máximo es 10): ");
    scanf("%d", &n_Nombres);
    if (n_Nombres > 10) {n_Nombres = 10;}
    for (int i = 0; i < n_Nombres; i++) {
            printf("Nombre %d: ", i+1);
            fgets(Nombre, sizeof(Nombre), stdin);
            Insertar_Nombre(Nombres, Nombre, i);
            printf("\n");
    }
}

int main() {
    SetConsoleOutputCP(65001);
    char Nombres[10][20];
    Crear_Lista_Nombres(Nombres);
    Listar_Nombres(Nombres);
    return 0;
}
