#include<stdio.h>

#define NOTA_MINIMA 0.0f
#define NOTA_MAXIMA 10.0f

#define FREQ_MINIMA 0
#define FREQ_MAXIMA 100


#define MIN_CONCEITO_A 9
#define MAX_CONCEITO_A 10

#define MIN_FREQ_CONCEITO_A 75

#define TRUE 1
#define FALSE 0

int main(){
    int contagemAlunos = 1;
    float notaFinalAluno = 0, somaNotasFinais = 0, mediaNotasFinais = 0;
    int frequenciaAluno, alunosComMaxConceito = 0;
    char respostaUsuario = 'S';
    int possuiAlunoComNotaDez = FALSE;

    while(respostaUsuario == 'S' || respostaUsuario == 's'){
        printf("Digite a nota final e frequencia do aluno %d: ", contagemAlunos);
        scanf("%f %d", &notaFinalAluno, &frequenciaAluno);

        if((notaFinalAluno >= NOTA_MINIMA && notaFinalAluno <= NOTA_MAXIMA) &&
            (frequenciaAluno >= FREQ_MINIMA && frequenciaAluno <= FREQ_MAXIMA)){
                somaNotasFinais = somaNotasFinais + notaFinalAluno;

                if((notaFinalAluno >= MIN_CONCEITO_A && notaFinalAluno <= MAX_CONCEITO_A) &&
                   (frequenciaAluno >= MIN_FREQ_CONCEITO_A)){
                    alunosComMaxConceito++;
                }
                if(notaFinalAluno == MAX_CONCEITO_A){
                    possuiAlunoComNotaDez = TRUE;
                }
                printf("\nVoce quer digitar a nota final e frequencia de outro aluno?: ");
                scanf(" %c", &respostaUsuario);
                if(respostaUsuario != 'n' && respostaUsuario != 'n'){
                    contagemAlunos++;
                }

        }
    }

    mediaNotasFinais = somaNotasFinais / contagemAlunos;


    printf("\nA media das notas finais da turma foi: %.2f", mediaNotasFinais);
    printf("\nO numero de alunos com conceito A foi: %d", alunosComMaxConceito);

    if(possuiAlunoComNotaDez){
        printf("\nAo menos um aluno teve nota 10!");
    }

    return 0;
}
