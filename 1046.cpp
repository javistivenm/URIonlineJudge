

#include<iostream>


using namespace std;

int main(){

    int i, f, t1, t2, aux1, aux2, tt;

    cin >> i >> f;

    if (i==0 && f==0)
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
    else
    {
        if(i>=12)
        {
            t1=24-i;
            aux1=24-f;
            t2=24-aux1;
            tt= t1+t2;
            cout << "O JOGO DUROU "<< tt << " HORA(S)" << endl;
        }
        else
        {
            aux1=24-i;
            t1= 24-aux1;
            aux2=24-f;
            t2=24-aux2;
            tt=t2-t1;
            cout << "O JOGO DUROU "<< tt << " HORA(S)" << endl;
        }

    }



	return 0;
}
