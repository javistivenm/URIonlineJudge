/*Leer dos valores enteros (A y B). Luego, el programa deberá imprimir el mensaje
"Sao Multiplos" (son múltiplos) o "Nao sao Multiplos" (no son múltiplos),
dependiendo de los números leidos.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if(a<b){
            if(b%a==0){
                cout << "Sao Multiplos" << endl;
            }
            else{
                cout << "Nao sao Multiplos" << endl;
            }
    }
   else{
        if(a%b==0){
            cout << "Sao Multiplos" << endl;
        }
        else{
            cout << "Nao sao Multiplos" << endl;
        }
    }

    return 0;
}
