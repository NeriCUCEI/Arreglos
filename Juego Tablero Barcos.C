#include <stdio.h>


void Crear_Tablero(int filas, int columnas, int Tablero[]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
           Tablero[i][j] = 0;
        }
    }
}

void Poner_Barco(int Tablero[]) {
    int origen_x_barco; int fila_barco;
    printf("Origen en X del Barco grande: "); 
    scandf("%d", &origen_x_barco);
    printf("Fila [Y] del Barco grande: ");
    scanf("%d", &fila_barco);
    int coordenadas_barco[2][2] = {{origen_x_barco, fila_barco}, {(origen_x_barco + 1), fila_barco}};
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            if (Tablero[coordenadas_barco[x,y], y])
            Tablero[coordenadas_barco[x,y]
        }
    }
}

void configurar_Tablero(int filas, int columnas, int Tablero[]) {
    int X, int Y; int fila_barco; int origen_x_barco; //int coordenadas_barco[2];
    for (int i = 0; i < filas; i++) {
        printf("Posicion X del Bote pequeño: ");
        scanf("%d", &X);
        printf("Posicion Y del Bote pequeño: ");
        scanf("%d", &Y);
        Tablero[X, Y] = 1;
        printf("Origen en X del Barco grande: "); 
        scandf("%d", &origen_x_barco);
        printf("Fila del Barco grande: ");
        scanf("%d", &fila_barco);
        int coordenadas_barco[2][2] = {{origen_x_barco, fila_barco}, {(origen_x_barco + 1), fila_barco}};
        for (int x = 0; x < 2; x++) {
            Tablero 
            for (int y = 0; y < 2; y++) {
                Tab
            }
        }
    }
}

int main() {
    int Filas = 3; int Columnas = 3;
    int Tablero_1 = [Filas, Columnas]; int Tablero_2 = [Filas, Columnas];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[Fila %d, Columna %d] =  %d\n", i, j, Tablero[i][j]);
        }
    }
    return 0;
}
