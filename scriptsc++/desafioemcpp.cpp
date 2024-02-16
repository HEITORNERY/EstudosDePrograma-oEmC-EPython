#include<iostream>
using namespace std;
int main(void){
    /* Criar duas variáveis para armazenar dois valores e uma temporária*/
    int a, b, c;
    /* Você vai receber os valores de a e b*/
    cout<< "Digite o valor de A: ";
    cin >> a;
    cout<<"Digite o valor de B: ";
    cin >> b;
    /*Armazenar o valor de a na variável temporária e depois passar esse valor para b, fazendo assim a troca de valores */
    c = a;
    a = b;
    b = c;
    cout<<"O valor de A é "<<a<<" o valor de b é "<<b<<endl;
    return 0;
}
