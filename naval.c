#include <stdio.h>

int main () {
    //declarando vetores para fazer colunas e linhas
    char * coluna_tab [10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    
    //impressão das colunas
    for(int c = 0; c <= 9; c++) { 
        printf("  %s ", coluna_tab[c]);
    }

    //declaração da matriz tabuleiro
    int tabuleiro [10][10];
    
}