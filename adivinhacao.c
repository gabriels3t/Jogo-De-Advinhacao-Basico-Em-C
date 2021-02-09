#include <stdio.h>
// Constante 
#define NUMERO_DE_TENTATIVAS 5

int main(){
    //  imprime o cabecalho do jogo
    printf("**************************************** \n");
    printf("*Bem vindo ao nosso jogo de adivinhacao* \n");
    printf("**************************************** \n");
    
    int numero_secreto = 42;
    int chute;
    int maior = chute > numero_secreto;
    int menor = chute < numero_secreto;
    int acertou = (chute == numero_secreto);

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    { 
        printf("Tentativa  %d de %d \n",i ,NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? ");
        scanf("%d",&chute);
        printf("Seu chute foi %d \n",chute);
        if (chute < 0 )
        {
            printf("Voce nao pode chutar numeros negativos \n"); 
            i--;
            continue;
            // continue pula todo o bloco do codigo e volta para o inicio do for
        }       
        if(acertou){
            printf("Voce acertou \n");
            break;
        }
            
        else if(maior)
        {
            printf("Seu Chute foi maior que o numero secreto\n");
        }
        else 
        {
            printf("Seu Chute foi menor que o numero secreto\n");
        }
        printf("Voce errou \n");
         
    }
    
    printf("Fim de jogo");
    system("pause");

}