#include <iostream>
using namespace std;

int main(){

    float preco = 0;
    cout << "Digite o preco do produto: ";
    cin >> preco;

    if(preco <= 102.50)
    {
        cout << "Vou comprar" << endl;
        cout << "Preco barato." << endl;
    } else
    {
        cout << "NAO vou comprar. " << endl;
        cout << "Esta caro. " << endl;

    }

    cout << "Fim do programa." << endl;

return 0;
}
