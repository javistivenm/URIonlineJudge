#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float n, aux;
    float tax1, tax2, tax3, taxTotal;


    cin >> n;

    if(n <= 2000){

        cout << "Isento" << endl;

    } else {

        if(n > 4500){

            n-=2000;
            aux = n;
            aux -= 2500;
            tax3 = aux *0.28;
            tax2 = 1500 * 0.18;
            tax1 = 1000 * 0.08;
            taxTotal = tax1 + tax2 + tax3;
            cout << "R$ " << fixed << setprecision(2) << taxTotal << endl;

        }

        else if (n > 3000 && n <= 4500) {

            n-=2000;
            aux = n;
            aux -= 1000;
            tax2 = aux * 0.18;
            tax1 = 1000 * 0.08;
            taxTotal = tax1 + tax2;
            cout << "R$ " << fixed << setprecision(2) << taxTotal << endl;

        }

        else if (n > 2000 && n <= 3000) {

            n-=2000;
            aux = n;
            tax1 = aux * 0.08;
            taxTotal = tax1;
            cout << "R$ " << fixed << setprecision(2) << taxTotal << endl;

        }
    }

    return 0;
}
