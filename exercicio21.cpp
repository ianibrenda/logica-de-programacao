#include <iostream>
using namespace std;

int main(){

    float celsius = 0;
    float fari = 0;

    cout << "Informe a temperatura em celsius: ";
    cin >> celsius;

    fari = (9.0 / 5.0) * celsius + 32 ;

    cout << "A temp em Fahrenheit e: " << fari << endl;
return 0;
}
