#include<iostream>
using namespace std;
int main(void){
    /*O do while executa uma ação e usa do while como condição, isso é menos usual*/
    int numero;
    do
    {
        cout<<"Insira um número certo para sair desse loop: ";
        cin>>numero;
    } while (numero < 123456789);
    
    return 0;
}