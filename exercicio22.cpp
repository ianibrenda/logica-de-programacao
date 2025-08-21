#include <iostream>
using namespace std;

int main(){

    float base = 0;
    float altura = 0;
    float area = 0;

    cout << "Informe o valor da base do triangulo: ";
    cin >> base;

    cout << "Informe o valor da altura do triangulo: ";
    cin >> altura;

    area = (base * altura) / 2 ;

    cout << "A area do triangulo e: " << area << endl;

return 0;
}
