#include<stdio.h>
#include<math.h>

#define FATORIAL_DE_ZERO 1;

int main(){
    int numeroIteracoes = 0;
    float valorRad = 0.0F;
    int fatorial = 1;
    float powDeValorRad = 0.0f;
    float soma = 0;
    float somatorio = 0.0f;

    printf("Digite um valor em radianos: ");
    scanf("%f", &valorRad);
    printf("Digite o numero de iteracoes da serie:");
    scanf("%d", &numeroIteracoes);

    for(int i = 0; i < numeroIteracoes; i++){

       powDeValorRad = pow(valorRad, 2*i);

        //fatorial
        fatorial = 1;
        for(int j = 0; j <= 2*i; j++){
            if(j == 0){
                fatorial = fatorial * FATORIAL_DE_ZERO;
            } else {
                fatorial = fatorial * j;
            }
        }

        soma = pow(-1, i);
        somatorio = somatorio + ((float)(soma/fatorial) * powDeValorRad);
    }

    printf("Cosseno de %.2f eh aproximadamente: %f",valorRad ,somatorio);
    printf("\n\nCOS: %f", cos(valorRad));

    return 0;
}
