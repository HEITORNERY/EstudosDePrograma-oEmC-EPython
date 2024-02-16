#include<stdio.h>
int main(void){
    // Criar uma string em c é criar um vetor com um tamanho, que corresponde ao tamanho da string, ou seja, um vetor de caracteres
    char nome[23] = "Jose Heitor Nery Viana";
    /* Para exibir uma string use o printf, mas passe o %s para saber que vai inserir uma string ali na frase*/
    printf("O nome e %s\n", nome);
    return 0;
}