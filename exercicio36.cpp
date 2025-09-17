#include <iostream>
using namespace std;

int main(){

int codigo;
cout << "Digite o codigo do produto: ";
cin >> codigo;

if(codigo == 1){
    cout << "Alimento nao-perecivel." << endl;
}else if((codigo == 2) || (codigo == 3) || (codigo == 4)){
    cout << "Alimento perecivel." << endl;
}else if((codigo == 5) || (codigo == 6)){
    cout << "Vestuario." << endl;
}else if(codigo == 7){
    cout << "Higiene pessoal." << endl;
}else if((codigo >= 8) && (codigo <=15)){
    cout << "Limpeza e utensilios domesticos." << endl;
}else{
    cout << "Invalido." <<endl;
}


}
return 0;

