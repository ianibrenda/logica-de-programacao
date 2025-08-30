#include <iostream>
using namespace std;

int main(){

float prova1 = 0, prova2 = 0, prova3 = 0, media = 0, notafinal = 0, substitutiva = 0;

    cout << "Digite a nova da prova 1: ";
    cin >> prova1;

    cout << "Digite a nova da prova 2: ";
    cin >> prova2;

    cout << "Digite a nova da prova 3: ";
    cin >> prova3;

    media = (prova1 + prova2 + prova3) / 3;

if(media >= 7.0)
{
    cout << "Aprovado.";

}else
{
    cout << "Ficou para o exame." << endl;

        substitutiva = 6.0 * 2 - media;

    cout << "A nota minima que o aluno deve tirar para ter a media final maior ou igual a 6,0 eh: " << substitutiva << endl;

}



return 0;
}
