#include<iostream>
using namespace std;
int main(void){
    float valor;
    cout<<"Insira um valor: ";
    cin>>valor;
    if (valor < 0)
        cout<<"O valor é negativo\n";
    if (valor > 0)
        if (valor < 1000)
            cout<<"O número tem um tamanho normal\n";
        else
            cout<<"Esse número é muito grande\n";
    return 0;
}