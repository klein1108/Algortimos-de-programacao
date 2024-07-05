#include<stdio.h>

#define MAX_PARTIDO 8
#define MIN_PARTIDO 1
#define CEM 100

int main() {
    int i = 0;
    int voto = 0;
    int nVotos=0;
    int nVotosInvalidos = 0, nVotosValidos = 0;
    int votosPorPartido[MAX_PARTIDO] = {};
    float porcentVotos = 0;
    /** voto [0] = voto no partido 1;
        voto[1] = voto no partido 2;
        ...
    */

    do{
        printf("Digite o numero do partido para o qual vai o voto a seguir: ");
        scanf("%d", &voto);
        if(voto != 0){
                nVotos++;
            if(voto > MAX_PARTIDO || voto < MIN_PARTIDO){
                nVotosInvalidos++;
            } else {
                nVotosValidos++;
                votosPorPartido[voto-1] += 1;
            }
        }

    }while(voto != 0);

    if(nVotos == 0){
        printf("Nao houveram votos");
    } else {
        printf("O numero total de votos foi %d!\n", nVotos);
        printf("O numero de votos validos foi %d!\n", nVotosValidos);
        printf("O numero de votos invalidos foi %d!\n", nVotosInvalidos);

        for(int j = 0; j< MAX_PARTIDO; j++){
            porcentVotos = (float) votosPorPartido[j]/nVotosValidos * 100;
            printf("O partido %d teve %.2f%% dos votos validos!\n", j+1, porcentVotos);
        }
    }


    return 0;
}
