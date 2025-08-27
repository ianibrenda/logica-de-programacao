#include <iostream>
#include <math.h>
using namespace std;

int main(){
   float a = 0;
   float b = 0;
   float c = 0;
   float raiz1 = 0;
   float raiz2 = 0;

    cout << "Informe o valor de a: ";
    cin >> a;

    cout << "Informe o valor de b: ";
    cin >> b;

    cout << "Informe o valor de c: ";
    cin >> c;

    raiz1 = (-b + (sqrt((b * b) - (4 * a * c)))) / (2 * a) ;

    raiz2 = (-b - (sqrt((b * b) - (4 * a * c)))) / (2 * a) ;

    cout << "A raiz 1 e " << raiz1 << endl;

    cout << "A raiz 2 e " << raiz2 << endl;

return 0;
}
