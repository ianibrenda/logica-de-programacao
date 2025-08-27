#include <iostream>
using namespace std;

int main()
{
    //variavel do tipo char
    char sexo;

    cout << "Digite M para sexo masculino ou F para sexo feminino: ";
    cin >> sexo;

    if ((sexo == 'M') or (sexo == 'm')){
        cout << "Prezado aluno...";
    } else {
        cout << "Prezada aluna...";
    }


    return 0;
}
