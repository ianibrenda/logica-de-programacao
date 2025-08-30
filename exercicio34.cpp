#include <iostream>
using namespace std;

int main(){

int hora1 = 0, minuto1 = 0, segundos1 = 0, hora2 = 0, minuto2 = 0, segundos2 = 0, somaH = 0, diferencaH = 0, somaMin = 0, diferencaMin = 0, somaSeg = 0, diferencaSeg = 0;

    cout << "Digite o primeiro horario em horas, minutos e segundos: ";
    cin >> hora1;
    cin >> minuto1;
    cin >> segundos1;

    cout << "Digite o segundo horario em horas, minutos e segundos: ";
    cin >> hora2;
    cin >> minuto2;
    cin >> segundos2;

    somaH = (hora1 + hora2);
    somaMin = (minuto1 + minuto2);
    somaSeg = (segundos1 + segundos2);

    diferencaH = hora1 - hora2;
    diferencaMin = minuto1 - minuto2;
    diferencaSeg = segundos1 - segundos2;

if(somaSeg >= 60 && somaMin >= 60){

    somaMin++;
    somaH++;
    somaSeg = somaSeg % 60;
    somaMin = somaMin % 60;
    cout << "A soma dos horarios eh: " << somaH << "h " << somaMin << "min " << somaSeg << "s " << endl;

}else if(somaSeg >= 60){

    somaMin++;
    somaSeg = somaSeg % 60;
    cout << "A soma dos horarios eh: " << somaH << "h " << somaMin << "min " << somaSeg << "s " << endl;


}else if(somaMin >= 60){

    somaH++;
    somaMin = somaMin % 60;
    cout << "A soma dos horarios eh: " << somaH << "h " << somaMin << "min " << somaSeg << "s " << endl;

}else{

    cout << "A soma dos horarios eh: " << somaH << "h " << somaMin << "min " << somaSeg << "s " << endl;

}


if(diferencaMin < 0 && diferencaSeg < 0){

    diferencaMin = 59 + diferencaMin;
    diferencaH--;
    diferencaSeg = 60 + diferencaSeg;


    cout << "A diferenca dos horarios eh: " << diferencaH << "h " << diferencaMin << "min " << diferencaSeg << "s " << endl;

}else if(diferencaSeg < 0){

    diferencaMin--;
    diferencaSeg = 60 + diferencaSeg;
    cout << "A diferença dos horarios eh: " << diferencaH << "h " << diferencaMin << "min " << diferencaSeg << "s " << endl;


}else if(diferencaMin < 0){

    diferencaH--;
    diferencaMin = 60 + diferencaMin;

    cout << "A diferenca dos horarios eh: " << diferencaH << "h " << diferencaMin << "min " << diferencaSeg << "s " << endl;

}else{

    cout << "A diferenca dos horarios eh: " << diferencaH << "h " << diferencaMin << "min " << diferencaSeg << "s " << endl;

}


return 0;
}
