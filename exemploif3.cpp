#include <iostream>
using namespace std;

int main(){

    int tituloEleitor = 0, idade = 0;
    cout << "Digite o titulo ou zero: ";
    cin >> tituloEleitor;
    cout << "Digite a idade: ";
    cin >> idade;

    if ((tituloEleitor > 0) && (idade >= 16))
    {
        cout << "Voceh pode votar." << endl;
        cout << "Dirija-se a cabine." << endl;
    }else
    {
        cout << "Voceh nao pode votar." << endl;
    }

return 0;
}
