#include <stdio.h>
#include <stdlib.h> /* lib para poder usar o abs*/
#include <time.h>
int main(){
    int a = 3;
    int b = 2;
    double prontos = a/(double)b; /* Mudando temporariamente para double*/
    printf("pontos %f \n",prontos);
    double pi = 3.14;
    int piConvertido= (int)pi;
    printf("%f %d \n",pi,piConvertido);

    a = 3;
    b = -3;
    int c = abs(a*b); /*abs deixa em modulo */
    printf("%d %d %d \n", a, b,c );

    int segundos = time(0);
    srand(segundos);
    int n1 = rand();
    int n2 = rand();
    printf("%d %d  \n", n1, n2 );
}