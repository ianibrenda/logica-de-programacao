#include <iostream>
using namespace std;

int main(){

float quantidadeLivros = 0, criterioA = 0, criterioB = 0;

cout << "Digite a quantidade de livros que deseja comprar: ";
cin >> quantidadeLivros;

criterioA = (0.25 * quantidadeLivros) + 7.50;

criterioB = (0.50 * quantidadeLivros) + 2.50;

if(criterioA < criterioB)
{
    cout << "Criterio A tem o melhor desconto!";
}else if(criterioA == criterioB)
{
    cout << "Os dois tem o mesmo desconto!";
}else
{
    cout << "Criterio B tem o melhor desconto!";
}

return 0;
}
