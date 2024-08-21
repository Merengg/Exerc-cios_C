#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função Principal:
int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
     #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("***********************\n");
    printf("// JOGO DE ADIVINHAÇÃO //\n");
    printf("***********************\n");
    
    int secreto = 52;
    int chute;
    int tentativas = 1;

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
    }

    printf("Fim de jogo.\n");
    printf("Você acertou em %d tentativas.", tentativas);

    return 0;
}