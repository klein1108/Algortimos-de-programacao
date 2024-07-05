/*
Um programa em C que indica ao consumidor quando é mais vantajoso abastecer
seu veiculo flex em etanol, gasolina comum ou gasolina aditivada
*/

#include<stdio.h>

#define VALOR_MEDIA 0.7F

int main(){
    float valorEtanol, valorGasolinaComum, valorGasolinaAditivada;
    float valorGasolinaMaisBarata;
    float razaoValores;

    printf("Digite o valor do etanol (R$/l): ");
    scanf("%f", &valorEtanol);

    printf("Digite o valor da gasolina comum (R$/l): ");
    scanf("%f", &valorGasolinaComum);

    printf("Digite o valor da gasolina aditivada (R$/l): ");
    scanf("%f", &valorGasolinaAditivada);

    if(valorGasolinaComum > valorGasolinaAditivada){
        valorGasolinaMaisBarata = valorGasolinaAditivada;
    } else {
        valorGasolinaMaisBarata = valorGasolinaComum;
    }

    razaoValores = valorEtanol/valorGasolinaMaisBarata;

    if(razaoValores < VALOR_MEDIA){
        printf("Abastecer com etanol eh mais vantajoso!");
    } else if (razaoValores > VALOR_MEDIA) {
        if(valorGasolinaAditivada <= valorGasolinaComum ){
            printf("Abastecer com a gasolina aditivada eh mais vantajoso!");
        } else {
            printf("Abastecer com a gasolina comum eh mais vantajoso!");
        }

    } else {
        if(valorGasolinaAditivada <= valorGasolinaComum ){
            printf("Abastecer com a gasolina aditivada eh mais vantajoso!");
        } else {
            printf("Nao ha preferencia por combustivel!");
        }

    }

    return 0;
}
