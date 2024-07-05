#include<stdio.h>
#include<math.h>

#define MIL 1000;
#define CEM 100;

int main(){
    double massa, altura, imc;

    printf("Informe a massa do sujeito (gramas): \n");
    scanf("%lf", &massa);

    printf("Informe a altura do sujeito (centimetros): \n");
    scanf("%lf", &altura);

    massa = massa/MIL;
    altura = altura/ CEM;

    imc = massa/((pow(altura, 2)));

    printf("O IMC do sujeito eh: %.2lf\n", imc);

    if(imc > 0 && imc < 16){
        printf("O sujeito tem subpeso severo\n");
    }
    if(imc >= 16 && imc < 20) {
        printf("O sujeito tem subpeso\n");
    }

    if(imc >= 20 && imc < 25) {
        printf("O sujeito tem peso normal\n");
    }

    if(imc >= 25 && imc < 30) {
        printf("O sujeito tem sobrepeso\n");
    }

    if(imc >= 30 && imc < 40) {
        printf("O sujeito tem obesidade\n");
    }

    if(imc >=40) {
        printf("O sujeito tem obesidade severa\n");
    }

    if(imc <= 0){
        printf("Valores invalidos");
    }

    return 0;
}
