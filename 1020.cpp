#include <iostream>

using namespace std;

int main()
{
    int n=0, anio=0, mes=0;
    cin >> n;
    anio=n/365;
    n=n%365;
    mes=n/30;
    n=n%30;
    cout << anio << " ano(s)\n"
         << mes << " mes(es)\n"
         << n << " dia(s)\n";

    return 0;
}
