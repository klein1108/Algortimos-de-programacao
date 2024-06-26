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
    int contaLetra = 0, contaPalavra = 0, tamanhoTexto = 0;
    int isPalavra = FALSE;
    char texto[MAX_CARACTERES * MAX_PALAVRAS + 1] = "";
    char palavrasDoTexto[MAX_PALAVRAS][MAX_CARACTERES] = {{}};
    char menorPalavra[MAX_CARACTERES];

    printf("Digite um texto de no maximo %d palavras, com no maximo %d caracteres: \n", MAX_PALAVRAS, MAX_CARACTERES);
    fgets(texto, MAX_CARACTERES * MAX_PALAVRAS + 1, stdin);

    tamanhoTexto= strlen(texto) - 1;

    for(int i = 0; i < tamanhoTexto; i++){
        if(texto[i] == ' ' || texto[i] == '.' || texto[i] == ','){
            if(isPalavra){
                contaLetra = 0;
                contaPalavra++;
                isPalavra = FALSE;
            }
        } else {
            palavrasDoTexto[contaPalavra][contaLetra] = texto[i];
            contaLetra++;
            isPalavra = TRUE;
        }
    }


//  ordenar palavras em ordem alfabetica
    for(int i = 0; i <= contaPalavra; i++){
        for(int j = i; j<=contaPalavra; j++){
            int comparacao = strcmp(palavrasDoTexto[i], palavrasDoTexto[j]);
            if(comparacao > 0 ){
                strcpy(menorPalavra, palavrasDoTexto[j]);
                strcpy(palavrasDoTexto[j], palavrasDoTexto[i]);
                strcpy(palavrasDoTexto[i], menorPalavra);
            }
        }

    }

    for(int i = 0; i<= contaPalavra; i++){
        printf("%d: %s  -> length: %d\n",i, palavrasDoTexto[i], strlen(palavrasDoTexto[i]));
        /**
        {
            {'a', 'b', 'c'}, == string
            {'g', 'h', 'i'}, == string
            {'d', 'e', 'f'}, == string
            {'j', 'k', 'l'}, == string
            ...
        }
        */
    }
    return 0;
}

