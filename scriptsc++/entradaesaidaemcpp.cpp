#include<iostream>
#include<string>
using namespace std;
int main(void){
    int valor;
    string tipo;
    cout << " Diga o tipo de produto: ";
    /* Para que possa inserir valores em c++ usa-se o cin >> */
    cin >> tipo;
    cout << "Qual a quantidade ? ";
    cin >> valor;
    cout << " O tipo foi " << tipo << " e a quantidade foi " << valor<< endl;
    return 0;
}