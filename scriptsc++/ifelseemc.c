#include<stdio.h>
int main(void){
    int valor;
    printf("Insira um número: ");
    scanf("%d", &valor);
    int resto = valor%2;
    if (valor < 0){
        printf("O número é negativo!\n");
        if (resto == 0){
            printf("O número é par\n");
        }
        else{
            printf("O número é ímpar\n");
        }
    }
    if (valor > 0){
        printf("O número é positivo!\n");
        if (resto == 0){
            printf("O número é par\n");
        }
        else{
            printf("O número é ímpar\n");
        }
    }
    return 0;
}