#include <stdio.h>
#define numero_de_tentativas 5

int main(){
    //imprime o cabeçalho do jogo
    printf("*******************************\n");
    printf("* meu joguinho de adivinhação *\n");
    printf("*******************************\n");

    int numerosecreto = 42;


    int chute;


    for(int i = 1; i <= numero_de_tentativas; i++) {

        printf("Tentativa %d de %d\n", i, numero_de_tentativas);

        printf("Qual é o seu chute?\n ");
        scanf("%d", &chute);
        printf("seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);

        if(acertou){
            printf("Parabéns Você Acertou!!\n");
            break; //parar de executar
        }
        else{
            int maior = (chute > numerosecreto);
            if(maior){
                printf("Seu Chute Foi Maior Que o numero Secreto\n");
            }else{
                printf("seu chute foi menor que o nuero Secreto\n");}
        }
    }
}
