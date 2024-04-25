/*
Esse é um programa que le um numero inteiro e converte na
representacao da quantidade de horas, minutos e segundo
*/

#include<stdio.h>

int main(){

    int valorInserido;
    int horas, restoHoras;
    int minutos, segundos;
    printf("Insira um valor para ser convertido no formato hh:mm:ss ao finalizar: ");
    scanf("%d", &valorInserido);

    horas = valorInserido/3600;
    restoHoras = valorInserido%3600;
    minutos = restoHoras/60;
    segundos = restoHoras%60;

    printf("Resultado: %d:%d:%d\n", horas, minutos, segundos);

return 0;
}


