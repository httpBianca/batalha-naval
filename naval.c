#include <stdio.h>

#define linhas 10
#define colunas 10

int main () {
    //declaração da matriz tabuleiro matriz (10x10)
    int tabuleiro [linhas][colunas];

    //inicialização da matriz com tudo água (0)
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {//colocando navio na diagonal
            if(i == j && i>6){ //diagonal principal
                tabuleiro[i][j] = 3;
            }
            else if(i==j && i<3){
                tabuleiro[i][j] = 3;
            }
            else if(i+j == 9 && i<3){ //diagonal secundaria
                tabuleiro[i][j] = 3;
            }
            else{
                tabuleiro[i][j] = 0; //água (0)
            }
        }
    }


    //Colunas de letras A-J
    printf(" ");
    for(int j = 0; j < colunas; j++){
        printf(" %c", 'A' + j); // 'A' + 0 = A, 'A' + 1 = B ...
    }
    printf("\n");

    //impressão da matriz
    for (int i=0; i<linhas; i++) {
        printf("%d", i + 1);
        for (int j=0; j<colunas; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n"); //espaçamento entre colunas e linhas
    }
    return 0;
}