#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimirMatriz(int matriz[][100], int f, int c) {
    // Aqui el programa imprime los elementos de la matriz
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void calcularTranspuesta(int matriz[][100], int transpuesta[][100], int f, int c) {
    /* En esta parte del programa, se realiza el cálculo de la matriz 
    transpuesta mediante el intercambio de filas por columnas utilizando punteros */
    for (int i = 0; i < f; i++) {
        for (int j = 0; j < c; j++) {
            *(*(transpuesta + j) + i) = *(*(matriz + i) + j);
        }
    }
}

int main() {
    int f, c;

    printf("Por favor ingrese el número de filas: ");
    scanf("%d", &f);

    printf("Por favor ingrese el número de columnas: ");
    scanf("%d", &c);

    /*Aquí tenemos la declaración tanto para la matriz original 
    como para la matriz transpuesta.*/
    int matriz[100][100];
    int transpuesta[100][100];

    /* rand() es una función en el lenguaje de programación C 
    que genera números pseudoaleatorios.*/
    srand(time(NULL));

    // Aquí se generan valores aleatorios entre 0 y 100 para completar la matriz.
   for (int i = 0; i < f; i++) {
    for (int j = 0; j < c; j++) {
        int r = rand() % 101;
        matriz[i][j] = r;
    }
}
    // ESte codigo es para mostrar la matriz inicial
printf("Matriz original:\n");
for (int i = 0; i < f; i++) {
    for (int j = 0; j < c; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
    // Se determina la matriz transpuesta
    calcularTranspuesta(matriz, transpuesta, f, c);

// Se solicita al programa que muestre en pantalla la matriz transpuesta
printf("Matriz transpuesta:\n");
for (int i = 0; i < c; i++) {
    for (int j = 0; j < f; j++) {
        printf("%d ", transpuesta[i][j]);
    }
    printf("\n");
}


    return 0;
}
