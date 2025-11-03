#include <stdio.h>

int main()
{
    int tabuleiro [10] [10];

    //Loop aninhado para colocar o valor 0 no tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
        tabuleiro[i][j] = 0;
        }
    }

    //Definindo a posição dos navios no tabuleito
    for (int i = 2; i < 5; i++)
    {
    tabuleiro [7][2] = 3,tabuleiro [7][i] = 3,tabuleiro [7][i] = 3;
    tabuleiro [4][8] = 3,tabuleiro [i+2][8] = 3,tabuleiro [i+3][8] = 3;
    }

    for (int i = 4; i < 7; i++){
        tabuleiro[i][i] = 3;    
    }
    
    for (int i = 0; i < 3; i++){
            tabuleiro[0+i][8-i] = 3;
    }
    
    //Loop aninhado para imprimir o tabuleiro
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        for (int j = 0; j < 10; j++)
        {
        printf("%d ", tabuleiro[i][j]);
        }
    }
}