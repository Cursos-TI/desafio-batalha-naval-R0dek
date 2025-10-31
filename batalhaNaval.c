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
    tabuleiro [2][2] = 3,tabuleiro [2][3] = 3,tabuleiro [2][4] = 3;
    tabuleiro [5][8] = 3,tabuleiro [6][8] = 3,tabuleiro [7][8] = 3;


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