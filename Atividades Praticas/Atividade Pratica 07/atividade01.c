/**
Implemente um programa em C que solicita que o usuario informe os elementos de
uma matriz quadrada N × N. Em seus testes, considere N como uma constante que vale 3.
Seu programa deve exibir a norma da matriz, que é computada da seguinte maneira:
*/

#include<stdio.h>
#include<math.h>

#define MAX_SIZE 3
#define POW_DOIS 2

int main(){
    int matriz[MAX_SIZE][MAX_SIZE] = {};
    int valorPow = 0, soma = 0;
    float resultado;
    for(int linha=0; linha<MAX_SIZE; linha++){
        for(int coluna=0; coluna<MAX_SIZE; coluna++){
            printf("Digite o elemento da posicao (%d,%d): ", linha  + 1, coluna + 1);
            scanf("%d", &matriz[linha][coluna]);
            valorPow = pow(matriz[linha][coluna], POW_DOIS);
            soma += valorPow;
        }
    }

    resultado = (float)sqrt(soma);

    printf("O traco da matriz eh %.2f", resultado);

    return 0;
}
