#include <stdio.h>

int main() {
    // Declaração do tabuleiro 10x10
    int tabuleiro[10][10] = {0};

    // Posicionamento do navio vertical (coluna 2, linhas 2 a 5)
    for (int i = 2; i <= 5; i++) {
        tabuleiro[i][2] = 3; // Marca as posições do navio vertical
    }

    // Posicionamento do navio horizontal (linha 6, colunas 4 a 8)
    for (int j = 4; j <= 8; j++) {
        tabuleiro[6][j] = 3; // Marca as posições do navio horizontal
    }

    // Posicionamento do navio diagonal (diagonal principal, posições (1,1) a (4,4))
    for (int i = 1; i <= 4; i++) {
        tabuleiro[i][i] = 3; // Marca as posições do navio diagonal
    }

    // Posicionamento do navio diagonal inversa (diagonal secundária, posições (5,9) a (8,6))
    for (int i = 5, j = 9; i <= 8; i++, j--) {
        tabuleiro[i][j] = 3; // Marca as posições do navio diagonal inversa
    }

    // Exibição das coordenadas dos navios
    printf("Coordenadas dos navios:\n");

    printf("\nNavio vertical:\n");
    for (int i = 2; i <= 5; i++) {
        printf("(%d, %d)\n", i, 2);
    }

    printf("\nNavio horizontal:\n");
    for (int j = 4; j <= 8; j++) {
        printf("(%d, %d)\n", 6, j);
    }

    printf("\nNavio diagonal principal:\n");
    for (int i = 1; i <= 4; i++) {
        printf("(%d, %d)\n", i, i);
    }

    printf("\nNavio diagonal inversa:\n");
    for (int i = 5, j = 9; i <= 8; i++, j--) {
        printf("(%d, %d)\n", i, j);
    }

    // Exibição do tabuleiro completo
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
