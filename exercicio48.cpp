#include <iostream>
using namespace std;
int main (){

int potencia = 1, numeroB = 0;
float numeroA = 0;
cout << "Digite o numero: ";
cin >> numeroA;
cout << "Digite sua potencia: ";
cin >> numeroB;

for(int i=1; i <= numeroB; i++){
    potencia = numeroA * potencia;
}
cout << "A potencia de " << numeroA << " por " << numeroB << " eh " << potencia;

return 0;
}
