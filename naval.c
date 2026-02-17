#include <stdio.h>

#define linhas 10
#define colunas 10

//declaração da matriz tabuleiro matriz (10x10)
int tabuleiro [linhas][colunas];

//função contendo a habilidade cone/triangulo
void habilidadeCone (){
    for(int i =0; i<3; i++){
        for(int j=0; j<5; j++){
            if(j >= 2 - i && j <=2 +i){
                tabuleiro[i][j] = 2;
            }
        }
    }
}

//função contendo a habilidade octaedro

void habilidadeOctaedro (){
    int linha = 5;   // linha central do octaedro
    int coluna = 1;  // coluna lateral esquerda

    // vertical
    if(linha - 1 >= 0) {
        tabuleiro[linha - 1][coluna] = 4;
        tabuleiro[linha][coluna] = 4;
    }

    if(linha + 1 < 10){
        tabuleiro[linha + 1][coluna] = 4;
    }

    // horizontal
    if(coluna - 1 >= 0){
        tabuleiro[linha][coluna - 1] = 4;
    }
    if(coluna + 1 < 10) {
        tabuleiro[linha][coluna + 1] = 4;
    }
}

void habilidadeCruz (){
    int linha = 6;   // linha central
    int coluna = 6;  // coluna central

    // linha do meio (horizontal completa)
    for(int j = -2; j <= 2; j++) {
        if(coluna + j >= 0 && coluna + j < 10)
            tabuleiro[linha][coluna + j] = 3;
    }

    // parte vertical (apenas 1 acima e 1 abaixo)
    if(linha - 1 >= 0){
        tabuleiro[linha - 1][coluna] = 3;
    }
    
    if(linha + 1 < 10){
        tabuleiro[linha + 1][coluna] = 3;
    }
}


int main () {

    //inicialização da matriz com tudo água (0)
    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            tabuleiro[i][j] = 0;
        }
    }


    //Colunas de letras A-J
    printf(" ");
    for(int j = 0; j < colunas; j++){
        printf(" %c", 'A' + j); // 'A' + 0 = A, 'A' + 1 = B ...
    }
    printf("\n");


    //chamada de funções - Habilidades
    habilidadeCone();
    habilidadeOctaedro();
    habilidadeCruz();

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