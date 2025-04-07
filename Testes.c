#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    int jogador, computador;
    srand(time(0));

    printf("****   Jokenpô   ****\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");
    printf("Escolha:\n");
    scanf("%d", &jogador);

    computador = rand() % 3 + 1;

    switch (jogador)
    {
    case 1:
        printf("O jogador escolheu Pedra\n");
        break;
    case 2:
        printf("O jogador escolheu Papel\n");
        break;
    case 3:
        printf("O jogador escolheu Tesoura\n");
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }
    switch (computador)
    {
    case 1:
        printf("O computador escolheu Pedra\n");
        break;
    case 2:
        printf("O computador escolheu Papel\n");
        break;
    case 3:
        printf("O computador escolheu Tesoura\n");
        break;
    }
        if (jogador == computador)
        {
            printf("Empate\n");
        }
        else if (jogador == 1 && computador == 2)
        {
            printf("O computador ganhou\n");
        }
        else if (jogador == 2 && computador == 3)
        {
            printf("O computador ganhou\n");
        }
        else if (jogador == 2 && computador == 1)
        {
            printf("O jogador ganhou\n");
        }
        else if (jogador == 3 && computador == 2)
        {
            printf("O jogador ganhou\n");
        }
        else if (jogador == 1 && computador == 3)
        {
            printf("O jogador ganhou\n");
        }
        else if (jogador == 3 && computador == 1)
        {
            printf("O computador ganhou\n");
        }
    


    }











