#include <stdio.h>

int main () {
    //declaração da matriz tabuleiro matriz (10x10)
    int tabuleiro [10][10];

    //inicialização da matriz com tudo água (0)
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            tabuleiro[i][j] = 0; //água (0)
        }
    }

    //navios (3)
    tabuleiro[1][2] = 3; //linha 2, coluna C
    tabuleiro[1][3] = 3;
    tabuleiro[4][6] = 3; //linha 5, coluna G
    tabuleiro[4][7] = 3; 

    //Colunas de letras A-J
    printf(" ");
    for(int j = 0; j < 10; j++){
        printf(" %c", 'A' + j); // 'A' + 0 = A, 'A' + 1 = B ...
    }
    printf("\n");

    //impressão da matriz
    for (int i=0; i<10; i++) {
        printf("%d", i + 1);
        for (int j=0; j<10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n"); //espaçamento entre colunas e linhas
    }
    return 0;
}