/*
Implementacao de um programa em C que calcula a posicao final e a velocidade final de um movel simulando um MRUV.
Para seu funcionamento, o usuario deve informar a posicao inicial, velocidade inicial, tempo e aceleracao do movel.
*/
#include<stdio.h>
#include<math.h>

int main(){
    double posicaoFinal, velocidadeFinal;
    float posicaoInicial, velocidadeInicial, aceleracao;
    double tempo;

    printf("Esse programa vai calcular o resultado da posicao final e velocidade final de um movel, simulando um MRUV");

    printf("\nDigite o valor da posicao inicial do movel (m): ");
    scanf("%f", &posicaoInicial);

    printf("\nDigite o valor da velocidade inicial do movel (m/s): ");
    scanf("%f", &velocidadeInicial);

    printf("\nDigite o valor da aceleracao do movel (m/s%c): ", 0xfd);
    scanf("%f", &aceleracao);

    printf("\nDigite o valor do tempo (s): ");
    scanf("%lf", &tempo);

    posicaoFinal = posicaoInicial + (velocidadeInicial*tempo) + (aceleracao*(pow(tempo, 2))/2);
    velocidadeFinal = velocidadeInicial + aceleracao * tempo;

    printf("\nA posicao final calculada sera = %.2lf m", posicaoFinal);
    printf("\nA velocidade final calculada sera = %.2lf m/s", velocidadeFinal);

    return 0;
}
