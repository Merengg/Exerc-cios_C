#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o Principal:
int main(){

    setlocale(LC_ALL,"Portuguese_Brazil");

    printf("***********************\n");
    printf("//JOGO DE ADIVINHA��O//\n");
    printf("***********************\n");
    
    int secreto = 52;

    int chute;

    printf("Bem Vindo ao jogo onde seu objetivo ser� acertar o n�mero secreto!\n");

    for(int i = 1; i <= 3; i++) {//Necessito estudar mais sobre esses lops. aplicado mas n�o entendido.
        
        printf("Tentativas %d de 3.\n", i);
        printf("Qual � seu Chute?: ");
        scanf("%d" , &chute);//Colocar o "&" antes da variavel � importante.
        printf("Seu chute foi %d.\n", chute);
        
        int acerto = (chute == secreto);


        if(acerto){
            printf("Parabens, Voc� acertou!\n");
            i = 4;
        }
        else {

            int chuteMenor = chute < secreto;
            if(chuteMenor){
                printf("O n�mero � maior.\n");
            }
            else{
                printf("O n�umero � menor.\n");
            }

            printf("Voc� errou, tente novamente!\n");

        } 
    }

    printf("Fim de Jogo.");

    return 0;
}
