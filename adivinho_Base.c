#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUMERO_DE_TENTATIVAS 6 // basicamente uma constante;

//Fun��o Principal:
int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("***********************\n");
    printf("//JOGO DE ADIVINHA��O//\n");
    printf("***********************\n");
    
    int secreto = 52;

    int chute;

    printf("Bem Vindo ao jogo onde seu objetivo ser� acertar o n�mero secreto!\n");

    for(int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {//Necessito estudar mais sobre esses lops. aplicado mas n�o entendido.
        
        printf("Tentativas %d de %d.\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual � seu Chute?: ");
        scanf("%d" , &chute);//Colocar o "&" antes da variavel � importante.
        printf("Seu chute foi %d.\n", chute);
        
        int acerto = (chute == secreto);
        int chutemenor = chute < secreto;

        if(acerto){
            printf("Parabens, Voc� acertou!\n");
            break;
        }
       
           else if(chutemenor){
                printf("O n�mero � maior.\n");
            }

          else{
                printf("O n�umero � menor.\n");
            }

            printf("Voc� errou, tente novamente!\n");

        } 

    printf("Fim de Jogo.");

    return 0;

}