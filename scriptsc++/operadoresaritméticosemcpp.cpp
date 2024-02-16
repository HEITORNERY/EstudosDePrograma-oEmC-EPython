#include<iostream>
using namespace std;
int main(void){
    float a,b, adicao, subtracao, multiplicacao;
    /* As variáveis de adição, multiplicação, divisão e subtração vão guardar os valores das operações aritméticas realizadas com o valor de a e b*/
    float divisao;
    cout<<"Insira um valor para a: ";
    cin>>a;
    cout<<"Insira um valor para b: ";
    cin>>b;
    /*Realizar as operações usando a e b e slavar o valor nas variáveis correspondentes*/
    adicao = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a/b;
    cout<<"O valor da adição de a com b é "<<adicao<<endl;
    cout<<"O valor da subtração de a com b é "<<subtracao<<endl;
    cout<<"O valor da multiplicação de a com b é "<<multiplicacao<<endl;
    cout<<"O valor da divisão de a com b é "<<divisao<<endl;
    /* Uma divisão de inteiros vai retornar um inteiro, por isso se quiser casas decimais a e b precisam ser float*/
    return 0;
}