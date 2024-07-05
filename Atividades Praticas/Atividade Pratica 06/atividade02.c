#include<stdio.h>
#include<string.h>

#define MAX_CHARS 25
#define TRUE 1
#define FALSE 0

int main () {
    char palavra[MAX_CHARS]="";
    int palavraLength = 0;
    int isPalindromo = TRUE;

    printf("Digite uma string: ");
    fgets(palavra, MAX_CHARS, stdin);

    palavraLength = strlen(palavra);
    palavra[palavraLength-1] = '\0';

    for(int i=0, j=palavraLength-2; i<=palavraLength && j>=0; i++, j--){
        if(palavra[i] != palavra[j]){
            isPalindromo = FALSE;
        }
    }

    if(isPalindromo){
        printf("\nA string '%s' eh um palindromo!", palavra);
    } else {
        printf("\nA string '%s' nao eh um palindromo!", palavra);
    }

    return 0;
}
