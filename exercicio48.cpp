#include <iostream>
using namespace std;
int main (){

float potencia = 1, numeroA = 0;
int numeroB = 0;

cout << "Digite o numero: ";
cin >> numeroA;
cout << "Digite sua potencia: ";
cin >> numeroB;

for(int i=1; i <= numeroB; i++){
    potencia = numeroA * potencia;
}
cout << "A potencia de " << numeroA << " por " << numeroB << " eh " << potencia << endl;

return 0;
}
