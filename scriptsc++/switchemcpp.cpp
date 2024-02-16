#include<iostream>
using namespace std;
int main(void){
    int numero;
    cout<<"Insira um número: ";
    cin>>numero;
    switch (numero)
    {
    case 0 :
        cout<<"Zero\n";
        break;
    case 1 :
        cout<<"One\n";
        break;
    case 2 :
        cout<<"Two\n";
        break;
    case 3 :
        cout<<"Three\n";
        break;
    case 4 :
        cout<<"Four\n";
        break;
    case 5 :
        cout<<"Five\n";
        break;
    case 6 :
        cout<<"Six\n";
        break;
    case 7 :
        cout<<"Seven\n";
        break;
    case 8 :
        cout<<"Eight\n";
        break;
    case 9 :
        cout<<"Nine\n";
        break;
    case 10 :
        cout<<"Ten\n";
        break;
    default:
        cout<<"I don't know!\n";
        break;
    }
    return 0;
}