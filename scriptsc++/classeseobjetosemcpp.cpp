#include<iostream>
#include<string>
using namespace std;
/* Uma classe é um grupo de um monte de objetos, ou seja, uma classe é usada para atribuir características a objetos do mundo real para a programaçaõ*/
class Pessoa
{
private: /* Tudo que é privado numa calsse só existe nela, ou seja, sua manipulação só ocorre dentro da classe*/
    string cpf;
    string nome;
    int idade;
public: /*Funções públicas são usadas para serem acessadas fora da classe e atualizar os valores das variáveis privadas*/
    void setCPF(string _cpf);
    string getCPF();
    void setNome(string _nome);
    string getNome();
    void setIdade(int _idade);
    int getIdade();

};

void Pessoa::setCPF(string _cpf)
{   cpf = _cpf;
}

string Pessoa::getCPF()
{   return cpf;
}

void Pessoa::setNome(string _nome)
{   nome = _nome;
}

string Pessoa::getNome()
{   return nome;
}

void Pessoa::setIdade(int _idade)
{   idade = _idade;
}

int Pessoa::getIdade()
{   return idade;
}

/* Você pode criar um construtor para uma classe, que é uma função dentro da classe com o mesmo nome da classe e um destrutor é uma função paar ser executada para acabar com a classe*/

class Animal
{
private:
    string raca;
    string nome;
    int idade;
public:
    Animal(string _raca, string _nome, int _idade); /* Esse é o construtor*/
    ~Animal(); /* Esse é o destrutor*/
};

Animal::Animal(string _raca, string _nome, int _idade)
{   raca = _raca;
    nome = _nome;
    idade = _idade;
}

Animal::~Animal()
{   cout<<"Classe Animal destruída!";
}


int main(void){
    /* Agora que o grupo pessoa foi criada passaremos um variável para ele, ou seja, um objeto que vai ter as mesmas características*/
    Pessoa amigo;
    int idade;
    string nome, cpf;
    cout<<"Insira o CPF do seu amigo: ";
    cin>>cpf;
    amigo.setCPF(cpf);
    cout<<"Insira o nome do seu amigo: ";
    cin>>nome;
    amigo.setNome(nome);
    cout<<"Insira a idade do seu amigo: ";
    cin>>idade;
    amigo.setIdade(idade);
    cout<<"Aqui está as características do seu amigo:"<<endl;
    cout<<"CPF = "<<amigo.getCPF()<<", seu nome é "<<amigo.getNome()<<" e sua idade é "<<amigo.getIdade()<<endl;
    string _nome, raca;
    int _idade;
    cout<<"Insira a raça do seu pet: ";
    cin>>raca;
    cout<<"Insira o nome do seu pet: ";
    cin>>_nome;
    cout<<"Insira a idade do seu pet: ";
    cin>>_idade;
    Animal pet = Animal(raca, _nome, _idade);
    cout<<"Agora que armazenamos a informação sobre o PET, ele será destruído!"<<endl;
    pet.~Animal();
    return 0;
}