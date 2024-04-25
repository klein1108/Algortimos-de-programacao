// Um texto é composto de palavras de 10 ou menos caracteres. Escreva um
// programa que lê um texto de até 100 palavras e depois as imprime em ordem
// alfabética.

#include<stdio.h>
#include<string.h>

#define MAX_CARACTERES 10
#define MAX_PALAVRAS 100
#define FINAL_TEXTO '\0'

#define TRUE 1
#define FALSE 0

int main(){
    int contaLetra = 0, contaPalavra = 0, isPalavra = FALSE;
    char texto[MAX_CARACTERES * MAX_PALAVRAS + 1] = "";
    char palavrasDoTexto[MAX_CARACTERES][MAX_PALAVRAS] = {};

    printf("Digite um texto de no maximo %d palavras, com no maximo %d caracteres: \n", MAX_PALAVRAS, MAX_CARACTERES);
    fgets(texto, MAX_CARACTERES * MAX_PALAVRAS + 1, stdin);


    for(int i = 0; texto[i] != FINAL_TEXTO; i++){ // {b,a,n,a,n,a, ,s,l,a,\0}
        //CASO ESPERTINHO: comecar com espaco, virgula e afins.

        //achar o final da palavra
        if(texto[i] == ' ' || texto[i] == '.' || texto[i] == ','){
            if(isPalavra){
                contaLetra = 0;
                contaPalavra++;
                printf("\n");
            }
        } else {
            palavrasDoTexto[contaLetra][contaPalavra] = texto[i];
            contaLetra++;
            printf("%c ", texto[i]);
        }
    }

    /**
    {
        {'a', 'b', 'c'},
        {'a', 'b', 'c'},
        {'a', 'b', 'c'},
        {'a', 'b', 'c'}
    }

    */
    return 0;
}
/**
Um texto � composto de palavras de 10 ou menos caracteres. Escreva um
programa que l� um texto de at� 100 palavras e depois as imprime em ordem
alfab�tica.
*/
