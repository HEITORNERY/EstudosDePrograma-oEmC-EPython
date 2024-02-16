#include<iostream>
using namespace std;
int main(void){
    /* Existem dois tipod de memória a HEAP (MONTE) e a STACK(PILHA)*/
    /*A memória do tipo HEAP é uma memória que não é acessivel diretamente, senão usando ponteiros*/
    /*Quando cria-se uma variável ou função ela é criada na STACK, que como o nome diz vai empilhando elas, assim o novo vai ficar sobre o velho*/
    /*Quando um ponteiro é criado ele vai apontar para um enedereço de memória que está na HEAP, assim você aloca memória dinamicamente*/
    /* para criar um ponteiro basta dizer o tipo do dado que o espaço de memória que ele aponta vai armazenar e colocar um *ponteiro*/
    int numero = 5;
    int *ponteiro;
    ponteiro = &numero;
    int *pointer;
    cout<<"Espaço de memória de numero: "<<&numero<<endl;
    cout<<"Espaço de memória para onde o ponteiro aponta: "<<ponteiro<<endl;
    cout<<"Valor aramazenado no espaço de memória que o ponteiro aponta: "<<*ponteiro<<endl;
    cout<<"Espaço de memória para onde o ponteiro apontava no começo: "<<pointer<<endl;
    return 0;
}