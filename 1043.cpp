/* Lea 3 números del tipo punto flotante (A, B y C) y verifique
si es posible realizar un triángulo con ellos. Si esto es posible,
calcular el perímetro del triángulo y mostrar el siguiente mensaje:

Perimetro = XX.X


Si esto no es posible, calcular el área de un trapecio, cuyas bases son
A, B y su altura es C, y mostrar el siguiente mensaje:

Area = XX.X
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if( (a+b>c) && (a+c>b) && (b+c>a) ){
        cout << "Perimetro = " << endl;
    }

    else{
        cout << "Area = " << endl;
    }


    return 0;
}
