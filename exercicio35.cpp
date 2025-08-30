#include <iostream>
using namespace std;

int main(){

int anoNasc = 0, anoAtual = 0, idade = 0;

cout << "Digite o ano atual: ";
cin >> anoAtual;

cout << "Digite o ano de nascimento: ";
cin >> anoNasc;

idade = anoAtual - anoNasc;

if(idade >= 16)
{
    cout << "Tem idade para votar.";

}else if(idade >= 18)
{
    cout << "Tem idade para votar e tirar carteira.";

}else
{
    cout << "Nao tem idade para votar ou tirar carteira.";
}

return 0;
}
