#include <stdio.h>


int main(){
    //  imprime o cabecalho do jogo
    printf("**************************************** \n");
    printf("*Bem vindo ao nosso jogo de adivinhacao* \n");
    printf("**************************************** \n");
    
    int numero_secreto = 42;
    int chute;
   
    int tentativas = 1;
    while (1)
    {
          
        printf("Tentativa %d \n", tentativas);
        printf("Qual e o seu chute? ");
        scanf("%d",&chute);
        printf("Seu chute foi %d \n",chute);
        if (chute < 0 )
        {
            printf("Voce nao pode chutar numeros negativos \n"); 
            
            continue;
            // continue pula todo o bloco do codigo e volta para o inicio do for
        }      
        int maior = chute > numero_secreto;
        int acertou = (chute == numero_secreto); 
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
        tentativas++;     
    }
    
    printf("Fim de jogo \n ");
    printf("Voce acertou em %d tentativas ! \n", tentativas);
    system("pause");


}