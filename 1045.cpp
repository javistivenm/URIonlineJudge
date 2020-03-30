#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float numeros[3];
    int i, aux;

    for(i=0; i<=2; i++)
    {
        cin >> numeros[i];
    }


    for(i=0;i<3;i++)
    {
		for(int j=0;j<2;j++)
		{
			if(numeros[j] < numeros[j+1])
			{
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
	}


    if(numeros[0]>= numeros[1]+numeros[2])
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if ((pow(numeros[0], 2)) == (pow(numeros[1],2)) + (pow(numeros[2],2)))
        {
        cout << "TRIANGULO RETANGULO" << endl;
        }
        else
        {
            if ((pow(numeros[0], 2)) > (pow(numeros[1],2)) + (pow(numeros[2],2)))
        {
        cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        if (numeros[0]==numeros[1] && numeros[2]==numeros[1])
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }

        if ( (numeros[0] == numeros[1] || numeros[1] == numeros[2]) && (numeros[2] != numeros[1] || numeros[0] != numeros[1]))
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }

        }
    }

    return 0;
}
