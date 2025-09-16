#include <iostream>
using namespace std;
int main (){

int num = 0, soma = 0;
cout << "Digite o numero: ";
cin >> num;

for(int i=1; i <= num; i++){
    soma = i + soma;
    cout << "A soma atual: " << soma << endl;
}

return 0;
}
