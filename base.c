#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função Principal:
int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("***********************\n");
    printf("//JOGO DE ADIVINHAÇÃO//\n");
    printf("***********************\n");
    
    int secreto = 52;

    int chute;

    printf("Bem Vindo ao jogo onde seu objetivo seré acertar o número secreto!\n");
    printf("Qual é seu Chute?: ");
    scanf("%d" , &chute);//Colocar o "&" antes da variavel é importante.
    printf("Seu chute foi %d.\n", chute);
    
    if(secreto == chute){
        printf("Parabens, Você acertou!");
    }
    else {

        int chuteMenor = chute < secreto;
        if(chuteMenor){
            printf("O número é maior.\n");
        }
        else{
            printf("O núumero é menor.\n");
        }

        printf("Você errou, tente novamente!");
    }

    return 0;
}
