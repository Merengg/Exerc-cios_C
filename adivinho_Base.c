#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Função Principal:
int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
     #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("***********************\n");
    printf("|| JOGO DE ADIVINHAÇÃO ||\n");
    printf("***********************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    
    int secreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    printf("Bem-vindo ao jogo onde seu objetivo é acertar o número secreto!\n");

    while(1) {
        printf("Tentativa %d.\n", tentativas);
        printf("Qual é o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d.\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos.\n");
            continue; // Volta ao início do loop
        }
        
        int acerto = (chute == secreto);
        int chutemenor = (chute < secreto);

        if(acerto) {
            printf("Parabéns, você acertou!\n");
            break;
        } else if(chutemenor) {
            printf("O número é maior.\n");
            printf("Você errou, tente novamente!\n");
        } else {
            printf("O número é menor.\n");
            printf("Você errou, tente novamente!\n");
        }

        
        tentativas++;
        double pontosperdidos = abs(chute - secreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }   

    printf("Fim de jogo.\n");
    printf("Você acertou em %d tentativas.\n", tentativas);
    printf("Total de pontos: %.1f.", pontos);

    return 0;
}