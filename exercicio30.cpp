#include <iostream>
using namespace std;

int main(){

    int prova1 = 0, prova2 = 0, notaFinal = 0;

    cout << "informe a nota da p1: ";
    cin >> prova1;
    cout << "Informe a nota da p2: ";
    cin >> prova2;

    notaFinal = prova1 + prova2;

    if(notaFinal >= 60){
        cout << "Aprovado.";
        }else{
            cout << "Reprovado.";
        }

return 0;
}
