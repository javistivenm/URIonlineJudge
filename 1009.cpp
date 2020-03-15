#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    char VENDEDOR[20];
    double SalarioFijo, TotalVentas;
    double comision = 0.15;
    cin.getline(VENDEDOR,20);
    cin >> SalarioFijo >> TotalVentas;
    TotalVentas = SalarioFijo + TotalVentas * comision;
    cout << "TOTAL = R$ " << fixed << setprecision(2) <<TotalVentas;


    cout << "\n";
    return (0);
}
