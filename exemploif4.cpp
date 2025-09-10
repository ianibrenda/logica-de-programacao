#include <iostream>
using namespace std;
int main(){

int tituloEleitor = 0, idade = 0;
    cout << "Digite o titulo ou zero: ";
    cin >> tituloEleitor;
    cout << "Digite sua idade: ";
    cin >> idade;

    if(idade >= 16){
        if(tituloEleitor > 0){
            cout << "Voceh pode votar.";
        }else{
        cout << "Voceh NAO pode votar, pq nao tem titulo. ";
    }
    }else{
       cout << "Voceh NAO pode votar, pq nao tem idade. ";
    }

return 0;
}
