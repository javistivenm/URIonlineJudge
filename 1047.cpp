#include <iostream>

using namespace std;

int main()
{
    int horaInicial, minutoInicial, horaFinal, minutoFinal, totalHoras, totalMinutos;

    cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

    if (horaInicial==minutoInicial && horaFinal==minutoFinal)
    {
        totalHoras=(horaFinal+24)-horaInicial;

        totalMinutos=minutoFinal-minutoInicial;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;

    }

    else if(horaInicial==horaFinal && minutoFinal > minutoInicial)
    {

        totalHoras=horaFinal-horaInicial;

        totalMinutos=minutoFinal-minutoInicial;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }

    else if(horaInicial==horaFinal && minutoInicial>minutoFinal)
    {
        totalHoras=24-horaInicial+horaFinal-1;

        totalMinutos=60-minutoInicial+minutoFinal;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }

    else if(minutoInicial==minutoFinal && horaInicial<horaFinal)
    {

        totalHoras=horaFinal-horaInicial;

        totalMinutos=minutoFinal-minutoInicial;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }

    else if(minutoInicial==minutoFinal && horaInicial>horaFinal)
    {

        totalHoras=(horaFinal+24)-horaInicial;

        totalMinutos=minutoFinal-minutoInicial;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }

    else if(horaFinal > horaInicial && minutoFinal>minutoInicial)
    {

        totalHoras=horaFinal-horaInicial;

        totalMinutos=minutoFinal-minutoInicial;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }

    else if(horaInicial<horaFinal && minutoInicial>minutoFinal)
    {
        totalHoras=horaFinal-horaInicial-1;

        totalMinutos=60-minutoInicial+minutoFinal;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }

    else if(horaInicial>horaFinal && minutoInicial<minutoFinal)
    {

        totalHoras=(horaFinal+24)-horaInicial;

        totalMinutos=minutoFinal-minutoInicial;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }

    else if(horaInicial>horaFinal && minutoInicial>minutoFinal)
    {
        totalHoras=24+horaFinal-horaInicial-1;

        totalMinutos=60+minutoFinal-minutoInicial;

        cout << "O JOGO DUROU " << totalHoras << " HORA(S) E " << totalMinutos << " MINUTO(S)" << endl;
    }


    return 0;
}
