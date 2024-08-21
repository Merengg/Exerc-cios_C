#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o Principal:
int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
     #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    printf("***********************\n");
    printf("// JOGO DE ADIVINHA��O //\n");
    printf("***********************\n");
    
    int secreto = 52;
    int chute;
    int tentativas = 1;

    printf("Bem-vindo ao jogo onde seu objetivo � acertar o n�mero secreto!\n");

    while(1) {
        printf("Tentativa %d.\n", tentativas);
        printf("Qual � o seu chute? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d.\n", chute);

        if(chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos.\n");
            continue; // Volta ao in�cio do loop
        }
        
        int acerto = (chute == secreto);
        int chutemenor = (chute < secreto);

        if(acerto) {
            printf("Parab�ns, voc� acertou!\n");
            break;
        } else if(chutemenor) {
            printf("O n�mero � maior.\n");
            printf("Voc� errou, tente novamente!\n");
        } else {
            printf("O n�mero � menor.\n");
            printf("Voc� errou, tente novamente!\n");
        }

        
        tentativas++;
    }

    printf("Fim de jogo.\n");
    printf("Voc� acertou em %d tentativas.", tentativas);

    return 0;
}