#include<iostream>
using namespace std;
int fatorial(int n);
int main(void){
    int numero;
    cout<<"Insira um número: ";
    cin>>numero;
    cout<<"O fatorial desse número é "<<fatorial(numero)<<endl;
    return 0;
}
int fatorial(int n){
    if(n < 2){
        return 1;
    }
    return (fatorial(n-1) * n);
}