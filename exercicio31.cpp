#include <iostream>
using namespace std;

int main(){

    float prova1 = 0, prova2 = 0, notaFinal = 0;

    cout << "informe a nota da prova 1: ";
    cin >> prova1;
    cout << "Informe a nota da prova 2: ";
    cin >> prova2;

    notaFinal = prova1 + prova2;

    if(notaFinal >= 60){
        cout << "Aluno(a) aprovado(a).";

        }else if(notaFinal >=50 && notaFinal < 60){
            cout << "Aluno(a) em recuperacao.";

            }else{
                cout << "Aluno(a) reprovado(a).";
        }

return 0;
}
