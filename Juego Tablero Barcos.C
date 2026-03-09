#include <stdio.h>
#include <windows.h>

void Mostrar_Tablero(int Tablero[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("[%d]", Tablero[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void Crear_Tablero(int Tablero[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
           Tablero[i][j] = 0;
        }
    }
}

int Poner_Barco(int Tablero[3][3]) {
    int origen_x_barco; int fila_barco;
    printf("Columna de origen [X] del Barco grande: ");
    scanf("%d", &origen_x_barco);
    if (origen_x_barco < 0) {origen_x_barco *= -1;}
    if (origen_x_barco > 1) {origen_x_barco = 1;}
    printf("Fila [Y] del Barco grande: ");
    scanf("%d", &fila_barco);
    int coordenadas_x_barco[2] = {origen_x_barco, origen_x_barco + 1};
    for (int x = 0; x < 2; x++) {
        if (Tablero[fila_barco][coordenadas_x_barco[x]] != 0) {
            printf("No puede estar encima del bote pequeño");
            if (x > 0) {Tablero[fila_barco][coordenadas_x_barco[x] - 1] = 0;}
            return 0;
        }
        Tablero[fila_barco][coordenadas_x_barco[x]] = 1;
    }
    return 1;
}

void configurar_Tablero(int Tablero[3][3]) {
    int X; int Y; int fila_barco; int origen_x_barco;
    printf("Columna [Posicion X] del Bote pequeño: ");
    scanf("%d", &X);
    printf("Fila [Posicion Y] del Bote pequeño: ");
    scanf("%d", &Y);
    Tablero[X][Y] = 1; int Posicion_Bote[2] = {X, Y};
    while (1) {
        int exito = Poner_Barco(Tablero);
        if (exito == 1) {break;}
    }
}

int main() {
    SetConsoleOutputCP(65001);
    int Tablero_1[3][3]; int Tablero_2[3][3];
    Crear_Tablero(Tablero_1);
    configurar_Tablero(Tablero_1);
    Mostrar_Tablero(Tablero_1);
    return 0;
}

