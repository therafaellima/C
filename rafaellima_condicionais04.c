/*04 - Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado
• A raiz quadrada do numero digitado*/
#include <stdio.h>
#include <math.h>

int main () {
    //declaração das variáveis
    float num1, quadnum, raiznum;
    //entrada de dados
    printf("Digite um numero qualquer: ");
    scanf("%f", &num1);
    //condição para o calculo
    if (num1 >= 0) {
        quadnum = pow(num1,2);
        raiznum = sqrt (num1);
        printf("O numero %.2f digitado ao quadrado: %.2f\n", num1, quadnum);
        printf("A raiz quadrada do numero %.2f digitado: %.2f\n", num1, raiznum);
    }
    else {
        printf("Numero digitado invalido");
    }
    return 0;
}