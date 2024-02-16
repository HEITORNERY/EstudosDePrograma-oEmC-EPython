#include<iostream>
using namespace std;
int main(void){
    /* CRiar um menu de pedidos*/
    /*Cada pedido vai ter um número correspondente e um número encerra o pedido*/
    int numero;
    while (numero != 4)
    {
        cout<<"Escolha seu pedido dentre as opções abaixo"<<endl;
        cout<<"1. Pizza"<<endl;
        cout<<"2. Churrasco"<<endl;
        cout<<"3. Refrigerante"<<endl;
        cout<<"4. Encerrar pedido!"<<endl;
        cout<<"Insira o número do pedido aqui: ";
        cin>>numero;
    }
    
    return 0;
}