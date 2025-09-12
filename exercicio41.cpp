#include <iostream>
using namespace std;

int main(){

int num = 0;

cout << "Digite um numero para formar a tabuada: ";
cin >> num;

for(int i=1; i <=10; i++){

    cout << i << " * " << num << " = " << i * num << endl;

}



return 0;
}
