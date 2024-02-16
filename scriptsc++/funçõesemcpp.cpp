#include<iostream>
#include<string>
using namespace std;
/* Antes da main fica o protótipo da função e depois da main fica o corpo da função, ou seja, sua implementação*/
/*Para criar uma função basta definir seu tipo e dizer o que ela retorna pro sistema*/
/*Funções do tipo void não retornam nada pro sistema*/
int soma( int a, int b);
void mensagem_final(string mensagem);
int main(void){
    string finalizar;
    string despedida;
    while (finalizar != "no")
    {
        int num1, num2;
        cout<<"Insira um número: ";
        cin>>num1;
        cout<<"Insira um número: ";
        cin>>num2;
        cout<<soma(num1, num2)<<endl;
        cout<<"Deseja continuar ? (yes/no): ";
        cin>>finalizar;
    }
    cout<<"Digite sua despedida para o programa: ";
        cin>>despedida;
    mensagem_final(despedida);
    return 0;
}
int soma( int a, int b){
    return a + b;
}
void mensagem_final(string mensagem){
    cout<<endl;
    cout<<mensagem<<endl;
}