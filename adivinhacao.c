#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //  imprime o cabecalho do jogo
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |" "  |  |_|  |"  " |                         \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n\n");

    
    int segundos = time(0);
    srand(segundos);
    int numeroGrande = rand();
    int numero_secreto = numeroGrande % 100;
    int chute;
    double pontos = 1000;
    int tentativas = 1;
    int acertou = 0;
    int nivel , numeroDeTentativas = 0;
    printf("Qual nivel quer jogar?\n");
    printf("(1) Facil (2) medio (3) dificil \n\n");
    printf("Escolha:");
    scanf("%d",&nivel);

    switch(nivel){
        case 1:
            numeroDeTentativas = 20;
            break;
        case 2:
            numeroDeTentativas = 15;
            break;
        default:
            numeroDeTentativas = 6;
            break;
    }

    for(int i=1;i<=numeroDeTentativas;i++)
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
        acertou = (chute == numero_secreto); 
        if(acertou){
           
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
        
        double pontosperdidos = abs(chute - numero_secreto) / (double)2;/* Mudando temporariamente para double*/
        pontos = pontos - pontosperdidos;
    }
    
    printf("Fim de jogo \n ");
        if(acertou) {

        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\n\n");

        printf("Parabens! Voce ganhou!\n");
        printf("Voce acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);

        } else {
                printf("Voce perdeu! Tente de novo!\n");

                printf("       \\|/ ____ \\|/    \n");
                printf("        @~/ ,. \\~@      \n");
                printf("       /_( \\__/ )_\\    \n");
                printf("          \\__U_/        \n");
        }
    


}

