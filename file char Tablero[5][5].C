#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Mostrar_Tablero(char Tablero[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("[%c]", Tablero[i][j]);
        }
        printf("\n");
    }
}

void Crear_Tablero(char Tablero[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            Tablero[i][j] = '~';
        }
    }
}

void Configurar_Tablero(char Tablero[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Valor en [%d][%d]: ", i, j);
            scanf(" %c", &Tablero[i][j]);
        }
    }
}

void Escribir_archivo(FILE *archivo, char Tablero[5][5]) {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			fprintf(archivo, "[%c]", Tablero[i][j]);
		}
		fprintf(archivo, "\n");
	}
}

int main() {
    FILE *archivo; char Tablero[5][5];
    archivo = fopen("tablero.txt", "w");
    Crear_Tablero(Tablero);
    Mostrar_Tablero(Tablero);
    Escribir_archivo(archivo, Tablero);
    fclose(archivo);
    return 0;
}
