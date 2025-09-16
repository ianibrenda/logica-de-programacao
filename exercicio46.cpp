#include <iostream>
using namespace std;
int main (){

int soma = 0;

for(int i=1; i <= 200; i++){
if(i % 2 == 0){
    soma = i + soma;
}
}
cout << "A soma eh: " << soma << endl;

return 0;
}
