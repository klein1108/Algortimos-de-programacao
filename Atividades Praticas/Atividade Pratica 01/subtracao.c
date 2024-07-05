/* Este programa define dois inteiros, subtrai seus valores e exibe o resultado na tela
Entradas: dois valores inteiros (definidos no programa)
Saida: a subtracao dos dois valores lidos */

#include <stdio.h>
int main() {
    float primeiroValor, segundoValor;
    float resultado;

    printf("Insira dois valores que serao subtraidos: ");
    scanf("%f%f", &primeiroValor, &segundoValor);
    resultado = primeiroValor - segundoValor;
    printf("Resultado da subtracao: %.2f - %.2f  = %.2f\n",primeiroValor, segundoValor, resultado);
return 0;
}
