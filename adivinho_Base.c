#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUMERO_DE_TENTATIVAS 6 // basicamente uma constante;

//Função Principal:
int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("***********************\n");
    printf("//JOGO DE ADIVINHAÇÃO//\n");
    printf("***********************\n");
    
    int secreto = 52;

    int chute;

    printf("Bem Vindo ao jogo onde seu objetivo seré acertar o número secreto!\n");

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {//Necessito estudar mais sobre esses lops. aplicado mas não entendido.
        
        printf("Tentativas %d de %d.\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual é seu Chute?: ");
        scanf("%d" , &chute);//Colocar o "&" antes da variavel é importante.
        printf("Seu chute foi %d.\n", chute);
        
        int acerto = (chute == secreto);
        int chutemenor = chute < secreto;

        if(acerto){
            printf("Parabens, Você acertou!\n");
            break;
        }
       
           else if(chutemenor){
                printf("O número é maior.\n");
            }

          else{
                printf("O núumero é menor.\n");
            }

            printf("Você errou, tente novamente!\n");

        } 

    printf("Fim de Jogo.");

    return 0;

}