#include <iostream>
using namespace std;

int main(){
   float base1 = 0;
   float base2 = 0;
   float altura = 0;
   float area = 0;

   cout << "Informe o valor da primeira base do trapezio: ";
   cin >> base1;

    cout << "Informe o valor da segunda base do trapezio: ";
    cin >> base2;

    cout << "Informe o valor da altura: ";
    cin >> altura;

    area = ((base1 + base2) * altura) / 2;

    cout << "O valor da area do trapezio e: " << area << endl;
return 0;
}
