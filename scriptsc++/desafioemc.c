#include<stdio.h>
int main(void){
    int a, b, c;
    printf("Insira o valor de a: ");
    scanf("%d", &a);
    printf("Insira o valor de b: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("O valor de a agora é %d e o de b agora é %d\n", a, b);
    return 0;
}