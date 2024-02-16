#include<iostream>
using namespace std;
/*Os templates são úteis quando quer que uma função receba um dado e execute uma ação independente do tipo do argumento recebido*/
template <class TIPODADO>
TIPODADO funcao (TIPODADO a);
int main(void){
    cout<<funcao(2)<<endl;
    cout<<funcao(3.14)<<endl;
    cout<<funcao(4.1234567)<<endl;
    return 0;
}
template <class TIPODADO>
TIPODADO funcao (TIPODADO a){
    if (typeid(a).name() == typeid(int).name()){
        return ++a;
    }
    if (typeid(a).name() == typeid(double).name()){
        return ++a;
    }
}