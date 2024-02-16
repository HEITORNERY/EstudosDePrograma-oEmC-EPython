#include<iostream>
using namespace std;
int main(void){
    /* Criar uma matriz */
    /* A matriz tem linhas representada por i e colunas por j */
    /* Essa matriz vai ser 10 por 10*/
    for(int i = 1; i<11; i++){
        for (int j = 1; j < 11; j++)
        {
            cout<<"("<<i<<","<<j<<")";
        }
        cout<<endl;
    }
    return 0;
}