#include<iostream>
using namespace std;
void somar_número(int *a);
int main(void){
    int a;
        cout<<"INsira um número: ";
        cin>>a;
        somar_número(&a);
        cout<<"Número da main: "<<a<<endl;
    return 0;
}
void somar_número(int *a){
    ++*a;
    cout<<"Número somado + 1: "<<*a<<endl;
}