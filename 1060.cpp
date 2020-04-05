#include <iostream>

using namespace std;

int main()
{
    float numeros[6], contador;

    for(int i=0; i<=5; i++){
        cin >> numeros[i];
    }

   for(int j=0; j<=5; j++){
    if (numeros[j]>0){
        contador++;
    }
   }

   cout << contador << " valores positivos" << endl;




    return 0;
}
