#include<stdio.h>

#define MAX_TAM 4
#define MAX_TAM_NOME 30
#define MAX_RESULTS 3

#define PONTOS_VITORIA 3

int main() {
    //               linha    coluna
    char matrizNomes[MAX_TAM][MAX_TAM_NOME] = {{}};
    int matrizPontos[MAX_TAM][MAX_RESULTS]= {{}};
    int pontosCampeao = 0, pontosVice = 0, somaPontos;
    int indexCampeao = 0, indexVice = 0;

    for(int i=0; i<MAX_TAM; i++){
        printf("Digite o nome do clube: ");
        gets(matrizNomes[i]);

        printf("Digite numero de vitorias do clube %d: ", i + 1);
        scanf("%d", &matrizPontos[i][0]);
        getchar();

        printf("Digite numero de empates do clube %d: ", i + 1);
        scanf("%d", &matrizPontos[i][1]);
        getchar();

        printf("Digite numero de derrotas do clube %d: ", i + 1);
        scanf("%d", &matrizPontos[i][2]);
        getchar();

        //soma os pontos do time
        somaPontos += (matrizPontos[i][0] * PONTOS_VITORIA) + (matrizPontos[i][1]);

        //valida se tem pontuacao maior que a ultima maior
        if(somaPontos >  pontosCampeao){
            pontosVice = pontosCampeao;
            indexVice = indexCampeao;
            pontosCampeao = somaPontos;
            indexCampeao = i;

            //valida se tem pontuacao maior que a ultima segunda maior
        } else if (somaPontos > pontosVice){
            pontosVice = somaPontos;
            indexVice = i;
        }

        //reset da soma
        somaPontos = 0;
    }

    printf("\nTime Campeao: %s", matrizNomes[indexCampeao]);
    printf("\nTime Vice-campeao: %s\n", matrizNomes[indexVice]);

    return 0;
}
