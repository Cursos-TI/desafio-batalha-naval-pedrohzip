#include <stdio.h>

int main() {
    // Declaração do tabuleiro 5x5
    int tabuleiro[5][5] = {0};

    // Posicionamento do navio vertical (coluna 1, linhas 1 a 3)
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][1] = 1; // Marca as posições do navio vertical
    }

    // Posicionamento do navio horizontal (linha 3, colunas 2 a 4)
    for (int j = 2; j <= 4; j++) {
        tabuleiro[3][j] = 1; // Marca as posições do navio horizontal
    }

    // Exibição das coordenadas dos navios
    printf("Coordenadas do navio vertical:\n");
    for (int i = 1; i <= 3; i++) {
        printf("(%d, %d)\n", i, 1);
    }

    printf("\nCoordenadas do navio horizontal:\n");
    for (int j = 2; j <= 4; j++) {
        printf("(%d, %d)\n", 3, j);
    }

    // Exibição do tabuleiro
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
