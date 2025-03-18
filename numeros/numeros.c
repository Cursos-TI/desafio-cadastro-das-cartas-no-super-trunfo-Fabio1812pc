#include <stdio.h>

int main(){
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;
     
    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o nuero 2: \n");
    scanf("%d", &numero2);

     //Operacao soma
    soma = numero1 + numero2;

     //Operacao subtracao 
    subtracao = numero1 - numero2;

     //Operacao multiplicacao
    multiplicacao = numero1 * numero2;

     //Operacao divisao
    divisao = numero1 / numero2;

    printf("A soma e: %d\n, soma");

    printf("A subtracao e: %d\n, subitracao");

    printf("A multiplicacao e: %d\n, multiplicacao");

    printf("A divisao e: %d\n, divisao");

}
