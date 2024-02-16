#include<stdio.h>
// A biblioteca para lidar com entrada e saída é a string.h
#include<string.h>
int main(void){
    char nome[40];
    char *identidade = "Antônio"; // Outra maneira de criar strings é criar um ponteiro e passar o valor da string para ele
    printf("O seu nome é ? ");
    // Use fgets para pegar a entrada do usuário, passe o tamanho da string e termine com stdin
    fgets(nome, 40, stdin);
    printf("O seu nome é %s", nome);
    printf("O outro nome é %s\n", identidade);
    return 0;
}