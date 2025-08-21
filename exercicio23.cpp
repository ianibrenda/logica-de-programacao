#include <iostream>
using namespace std;

int main(){
    float pi = 3.14;
    float raio = 0;
    float area = 0;

    cout << "Informe o valor do raio do circulo: " ;
    cin >> raio;

    area = pi * (raio * raio);

    cout << "A area do circulo e: " << area << endl;

return 0;
}
