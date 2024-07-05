#include<stdio.h>

#define PORCENTO 100;

int main(){
    float valorInserido = 0;
    float receita = 0, despesas = 0, balanco = 0, porcentagemDespesas = 0;

    do{
        printf("Digite uma quantidade em reais: ");
        scanf("%f", &valorInserido);

        if(valorInserido < 0){
            despesas = despesas + valorInserido;
        } else {
            receita = receita + valorInserido;
        }

    } while(valorInserido != (float)0);

    balanco = receita + despesas;
    if(despesas < 0){
        despesas = -despesas; //estou invertendo o sinal para mostrar o valor positivo
    }

    printf("\nO total de receitas no periodo foi R$%.2f", receita);
    printf("\nO total de despesas no periodo foi R$%.2f", despesas);
    printf("\nO balanco no periodo foi R$%.2f", balanco);

    if(receita != 0) {
         porcentagemDespesas = (despesas / receita) * PORCENTO;
        printf("\nAs despesas equivalem a %.2f%% das receitas do periodo", porcentagemDespesas);
    } else {
        printf("\nNao houveram receitas");
    }


return 0;
}
