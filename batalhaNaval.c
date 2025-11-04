#include <stdio.h>

#define ROWS  10
#define COLUMNS  10
#define CRUZ 7
#define CONE 4
#define OCTA 1

int main()
{
    int tabuleiro [ROWS] [COLUMNS];

    

    //Loop aninhado para colocar o valor 0 no tabuleiro
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLUMNS; j++){
        tabuleiro[i][j] = 0;
        }
    }

    //Definindo a posição dos navios no tabuleito
    for (int i = 2; i < 5; i++){ 
        tabuleiro [7][i] = 3;
        tabuleiro [i+2][8] = 3;
    }

    //Definindo a posição dos navios diagonais no tabuleiro
    for (int i = 2; i < 5; i++){
        tabuleiro[i][i] = 3;
    }
    
    for (int i = 0; i < 3; i++){
        tabuleiro[i][COLUMNS - 1 - i] = 3; 
    }

    //Definindo a posição da habilidade cruz
    for (int i = -1; i <= 1; i++){
        
        if (tabuleiro[CRUZ + i][CRUZ] == 0 || tabuleiro[CRUZ][CRUZ + i] == 5){
            tabuleiro[CRUZ + i][CRUZ] = 5;
        }else{
            tabuleiro[CRUZ + i][CRUZ] = 1;
        }
    }

    for (int j = -2; j <= 2; j++){
        if (tabuleiro[CRUZ][CRUZ + j] == 0 || tabuleiro[CRUZ][CRUZ + j] == 5){
            tabuleiro[CRUZ][CRUZ + j] = 5;
        }else{
            tabuleiro[CRUZ][CRUZ + j] = 1;
        }
    }


  //Definindo a posição da habilidade de cone
    for (int i = 0; i < 2; i++){
        for (int j = -i; j <= i; j++){
            if (tabuleiro[CONE + i][CONE + j] == 0 || tabuleiro[CONE + i][CONE + j] == 5){
            tabuleiro[CONE + i][CONE + j] = 5;
            }else{
            tabuleiro[CONE + i][CONE + j] = 1;
            }
        }
    }
    
    

//Defininco a posição da habilidade Octaendro

// Pirâmide normal 
for (int i = 0; i < 2; i++){
    for (int j = -i; j <= i; j++){
        if (tabuleiro[OCTA + i][OCTA + j] == 0 || tabuleiro[OCTA + i][OCTA + j] == 5){
            tabuleiro[OCTA + i][OCTA + j] = 5;
        } else{
            tabuleiro[OCTA + i][OCTA + j] = 1;
        }
    }
}

// Pirâmide invertida pra completar o octaendro
for (int i = 1; i >= 0; i--){
    for (int j = -i; j <= i; j++){
        int linha = OCTA + 2 + (0 - i); // começa uma linha abaixo da base
        if (tabuleiro[linha][OCTA + j] == 0 || tabuleiro[linha][OCTA + j] == 5){
            tabuleiro[linha][OCTA + j] = 5;
        } else{
            tabuleiro[linha][OCTA + j] = 1;
        }
    }
}



    //Loop aninhado para imprimir o tabuleiro
    for (int i = 0; i < ROWS; i++){
        printf("\n");
        for (int j = 0; j < COLUMNS; j++){
        printf("%d ", tabuleiro[i][j]);
        }
    }
}