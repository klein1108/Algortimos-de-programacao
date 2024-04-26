/*
Um programa em C que faz a conversao entre dolar, euro e real
*/

#include<stdio.h>

#define UM_REAL_EM_DOLAR 0.19132101F
#define UM_REAL_EM_EURO 0.18119005F
#define UM_DOLAR_EM_EURO 0.94704732F

int main() {
    char moedaOrigem, moedaDestino;
    float valorParaConversao, valorConvertido;
    printf("Digite a moeda de origem (use R/r para real, D/d para dolar e E/e para euro): ");
    scanf(" %c",&moedaOrigem);
    printf("\nDigite a moeda de destino (use R/r para real, D/d para dolar e E/e para euro): ");
    scanf(" %c",&moedaDestino);

    switch(moedaOrigem){
        case 'r':
        case 'R':
            printf("\nDigite um montante em reais: ");
            switch(moedaDestino){
                case 'd':
                case 'D':
                    scanf("%f", &valorParaConversao);
                    valorConvertido = valorParaConversao*UM_REAL_EM_DOLAR;
                    printf("\nO montante corresponde a %.2f dolares", valorConvertido);
                    break;
                case 'e':
                case 'E':
                    scanf("%f", &valorParaConversao);
                    valorConvertido = valorParaConversao*UM_REAL_EM_EURO;
                    printf("\nO montante corresponde a %.2f euros", valorConvertido);
                    break;
            }
        break;

        case 'd':
        case 'D':
            printf("\nDigite um montante em dolares: ");
            switch(moedaDestino){
                case 'r':
                case 'R':
                    scanf("%f", &valorParaConversao);
                    valorConvertido = valorParaConversao/UM_REAL_EM_DOLAR;
                    printf("\nO montante corresponde a %.2f reais", valorConvertido);
                    break;

                case 'e':
                case 'E':
                    scanf("%f", &valorParaConversao);
                    valorConvertido = valorParaConversao*UM_DOLAR_EM_EURO;
                    printf("\nO montante corresponde a %.2f euros", valorConvertido);
                    break;
                }
        break;

        case 'e':
        case 'E':
            printf("\nDigite um montante em euro: ");
            switch(moedaDestino){
                case 'r':
                case 'R':
                    scanf("%f", &valorParaConversao);
                    valorConvertido = valorParaConversao/UM_REAL_EM_EURO;
                    printf("\nO montante corresponde a %.2f reais", valorConvertido);
                    break;

                case 'd':
                case 'D':
                    scanf("%f", &valorParaConversao);
                    valorConvertido = valorParaConversao/UM_DOLAR_EM_EURO;
                    printf("\nO montante corresponde a %.2f dolares", valorConvertido);
                    break;
                }
        break;
    }



    return 0;
}
