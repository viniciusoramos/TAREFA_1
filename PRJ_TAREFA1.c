/*FAÇA UM PROGRAMA QUE RECEBA 4 NUMEROS INTEIROS,
CALCULE E MOSTRE A SOMA DESSES NÚMEROS*/
#include <stdio.h>
#include <stdlib.h>
int main(){
int n1 = 0,n2 = 0,n3 = 0,n4 = 0, soma;
    printf("Digite quatro numeros:");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
    soma = n1+n2+n3+n4;
    printf("\nO valor da soma dos numeros e: %d", soma);

//USANDO FOR

int num = 0, somafor = 0, i;
    for(i = 1; i<=4; i++){
        printf("\n(FOR)Digite um numero:");
        fflush(stdout);
        scanf("%d", &num);
        somafor = somafor+num;
    }
    printf("A soma e: %d", somafor);
/*FAÇA UM PROGAMA QUE RECEBA 3 NOTAS, CALCULE E MOSTRE
A MÉDIA ARITIMÉTICA ENTRE ELAS*/
float nota1, nota2, nota3, media;
    printf("\nDigite 3 notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) /3;

    printf("\nA media dos numeros e: %.2f", media);

/*FAÇA UM PROGRAMA QUE RECEBA O SALARIO DE UM FUNCIONARIO
CACULE E MOSTRE O NOVO SALARIO, SABENDO SE QUE ESTE SOFREU
UM AUMENTO DE 25%*/
float salario, novosalario;
    printf("\nDigite seu salario: ");
    scanf("%f", &salario);
    novosalario = salario + salario*0.25;
    printf("\nSeu novo salario e: %.2f", novosalario);

    return 0;
}