#include<iostream>
using namespace std;
int main(void){
    /*Um arrray é o memso que um vetor, ele armazena dados, com base no índice, ou seja sua posição é possível modificar esses valores*/
    /*Pode ser um array de inteiros ou uma string, que é um array de carcteres*/
    int matriz[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    /*Para mudar um valor dessa matriz, basta dizer seu índice, lembrando que começa da esquerda para direita e do 0*/
    matriz[2] = 333;
    /*Percorrer essa matriz e exibir cada elemento*/
    for(int i = 0; i < 10; i++){
        cout<<matriz[i]<<", ";
    }
    cout<<endl;
    /*No caso de array de caracteres o tamanho deve ser maior em uma unidade*/
    char frase[13] = "Curso de C++";
    /*Outra maneira de saber o tamanho de um array é usando o sizeoff*/
    /*O sizeoff -1 pode ser usado como parâmetro para o for*/
    char nome[] = "Jose Heitor Nery Viana";
    for (int i = 0; i < sizeof(nome) - 1; i++)
    {
        cout<<nome[i]<<endl;
    }
    cout<<"O tamanho do array é "<<sizeof(nome)<<endl;
    return 0;
}