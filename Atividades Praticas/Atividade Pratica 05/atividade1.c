#include<stdio.h>
#include<math.h>


#define QUARENTA_PORCENTO 0.4f
#define VINTE_PORCENTO 0.2f
#define NUMERO_ALUNOS_PADRAO 50

int main(){
    int numeroAlunos = 0;
    float notaPrimeiraProva = 0, notaSegundaProva= 0, notaTrabalho = 0;
    float mediaDasNotas[NUMERO_ALUNOS_PADRAO] = {0};
    float notaFinalAtual = 0;
    float maiorNotaFinal = 0;
    float mediaDasNotasTotal = 0;
    double somatorioDesvioPadrao = 0;
    double desvioPadrao = 0;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &numeroAlunos);

    for(int i = 0; i<numeroAlunos; i++){
        printf("Digite a nota da prova %d do aluno %d: ", 1, i+1);
        scanf("%f", &notaPrimeiraProva);

        printf("Digite a nota da prova %d do aluno %d: ", 2,i+1);
        scanf("%f", &notaSegundaProva);

        printf("Digite a nota do trabalho do aluno %d: ", i+1);
        scanf("%f", &notaTrabalho);

        notaFinalAtual =
        (notaPrimeiraProva*QUARENTA_PORCENTO) +
        (notaSegundaProva*QUARENTA_PORCENTO) +
        (notaTrabalho*VINTE_PORCENTO);

        mediaDasNotas[i] = notaFinalAtual;

        if(notaFinalAtual > maiorNotaFinal){
            maiorNotaFinal = notaFinalAtual;
        }
        mediaDasNotasTotal = mediaDasNotasTotal + mediaDasNotas[i];
    }

    printf("\nA maior nota final da turma foi: %.1f", maiorNotaFinal);
    if(numeroAlunos > 0){
        mediaDasNotasTotal = mediaDasNotasTotal/numeroAlunos;
        printf("\nA media das notas finais da turma foi: %.1f", mediaDasNotasTotal);

        for(int j = 1; j<=numeroAlunos; j++){
           somatorioDesvioPadrao = somatorioDesvioPadrao + pow(mediaDasNotas[j-1] - mediaDasNotasTotal, 2);
        }
        desvioPadrao = sqrt(somatorioDesvioPadrao/numeroAlunos);

        printf("\nDesvio Padrao: %.2lf", desvioPadrao);


    } else {
        printf("\nValor de alunos incorreto, divisao invalida");
    }

    return 0;
}

