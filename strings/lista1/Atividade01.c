// Faça um programa que recebe um texto de até 40 caracteres e gera, em um vetor, a
// distribuição de freqüência de comprimento de palavras. Considere que no texto
// podem aparecer palavras de até 10 caracteres. As palavras podem estar separadas por
// espaços em branco ou pelos caracteres vírgula e ponto. O final do texto é sinalizado
// pelo caracter #. 

#include<stdio.h>
#include <string.h>

#define TEXT_MAX_SIZE 40
#define WORD_MAX_SIZE 10
#define TEXT_END '#'

#define TRUE 1
#define FALSE 0

int main(){
    int i=0;
    int contaLetras = 0;
    char texto[TEXT_MAX_SIZE] = {};
    int isPalavra = FALSE;
    int numCharFreq[WORD_MAX_SIZE - 1] = {};

    printf("Digite um texto de no maximo 40 caracteres:\n");
    fgets(texto, TEXT_MAX_SIZE, stdin);
    int textLength = strlen(texto) - 2;
    char textLastChar = texto[textLength];

    if(textLastChar != '#'){
        printf("ERRO: Voce deve finalizar o texto com o marcador #");
    } else {
        while(texto[i] != TEXT_END){
            //conta o numero de letras
            if(texto[i] == ' ' || texto[i] == ',' ||texto[i] == '.') {   //verifica fim de uma palavra
                printf("ENTROU AQUI");
                if(isPalavra){
                    numCharFreq[contaLetras - 1] += 1;  //armazena o numero de letras no array
                    /** contaLetras -> 5
                        [0, 1, 2, 3, 4, 5, 6, 7, 8, 9 ] posicao
                        [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] letras
                        numCharFreq[contaLetras - 1] += 1;  */

                        isPalavra = FALSE;
                        contaLetras = 0;
                } else {
                    isPalavra != isPalavra;
                }
            } else {
                if(!isPalavra){
                    isPalavra = TRUE;
                }
                contaLetras++;

            }
            i++;
        }

        for(int j = 0; j < WORD_MAX_SIZE; j++){
            printf ("\nPalavras com %d caracteres: %d", j + 1, numCharFreq[j]);
        }
    }

    return 0;
}

