#include<stdio.h>
int main(void){
    int a, b, adicao, subtracao, multiplicacao, divisao;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    adicao = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    float resto = (float)a / b;
    printf("O valor da soma é %d, o valor da subtração é %d, a multiplicação é %d, a divisão é %d e o resto da divisão é %.2f\n", adicao, subtracao, multiplicacao, divisao, resto);
    return 0;
}