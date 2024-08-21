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

    for(int i = 1; i <= 3; i++) {//Necessito estudar mais sobre esses lops. aplicado mas não entendido.
        
        printf("Tentativas %d de 3.\n", i);
        printf("Qual é seu Chute?: ");
        scanf("%d" , &chute);//Colocar o "&" antes da variavel é importante.
        printf("Seu chute foi %d.\n", chute);
        
        int acerto = (chute == secreto);


        if(acerto){
            printf("Parabens, Você acertou!\n");
            i = 4;
        }
        else {

            int chuteMenor = chute < secreto;
            if(chuteMenor){
                printf("O número é maior.\n");
            }
            else{
                printf("O núumero é menor.\n");
            }

            printf("Você errou, tente novamente!\n");

        } 
    }

    printf("Fim de Jogo.");

    return 0;
}
