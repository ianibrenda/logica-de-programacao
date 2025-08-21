#include <iostream>
using namespace std;

int main(){
   float peca1 = 0;
   float peca2 = 0;
   float numeropecas1 = 0;
   float numeropecas2 = 0;
   float frete;
   float total;

   cout << "Informe o valor da peca 1: ";
   cin >> peca1;

    cout << "Informe o valor da peca 2: ";
    cin >> peca2;

    cout << "Informe o numero de pecas 1 compradas : ";
    cin >> numeropecas1;

    cout << "Informe o numero de pecas 2 compradas : ";
    cin >> numeropecas2;

    cout << "Informe o valor do frete a ser pago: ";
    cin >> frete;

    total = (peca1 * numeropecas1) + (peca2 * numeropecas2) + frete;

    cout << "O valor da total a ser pago e: " << total << endl;

return 0;
}
