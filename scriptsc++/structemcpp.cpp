#include<iostream>
#include<string>
using namespace std;
/*Uma estrutura é uma lista com dados, só que esses dados podem ser diferentes, ou seja, pode ter como elementos de uma struct uma string e um inteiro e um float*/
struct cliente{int cliente_id; string nome; int idade;};

int main(void){
    /*Aqui vou atribuir uma variável para receber como características os dados de cliente*/
    cliente meu_cliente[10]; /*Posso ter até 10 clientes*/
    /*Preencher as informações de cada cliente*/
    for (int i = 0; i < 10 ; i++)
    {
        cout<<"Informe o id do cliente: ";
        cin>>meu_cliente[i].cliente_id;
        cout<<"Informe o nome do cliente: ";
        cin>>meu_cliente[i].nome;
        cout<<"Informe a idade do cliente: ";
        cin>>meu_cliente[i].idade;
    }
    return 0;
}