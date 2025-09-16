#include <iostream>
using namespace std;
int main (){

int fatorial = 1, num = 0;
cout << "Digite o numero para calcular o fatorial: ";
cin >> num;

for(int i=1; i <= num; i++){
    fatorial = fatorial * i;
}
cout << "O fatorial do numero " << num << " eh " << fatorial;

return 0;
}
