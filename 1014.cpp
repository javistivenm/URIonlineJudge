#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    double Y, combustibleGastado;
    cin >> X >> Y;
    combustibleGastado=X/Y;
    cout << fixed << setprecision(3) << combustibleGastado << " km/l";
    cout << "\n";

    return 0;
}

