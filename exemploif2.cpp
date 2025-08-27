#include <iostream>
using namespace std;

int main(){

    float notaFinal = 0;
    cout << "Digite a nota final do aluno(a): ";
    cin >> notaFinal;

    if(notaFinal < 50)
    {
        cout << "Aluno(a) reprovado.";
    }else if (notaFinal <= 60)
    {
        cout << "Aluno(a) em recuperacao.";
    }else
    {
        cout << "Aluno(a) aprovado.";
    }

    cout << "Fim das aulas." << endl;

return 0;
}
