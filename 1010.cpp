#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codigo1, codigo2;
    float unid1, unid2, precio1, precio2, total;
    cin >> codigo1 >> unid1 >> precio1;
    cin >> codigo2 >> unid2 >> precio2;
    total = (unid1 * precio1) + (unid2 * precio2);
    cout << "VALOR A PAGAR: R$ "<< fixed << setprecision(2) << total;


    cout << "\n";
    return 0;
}
