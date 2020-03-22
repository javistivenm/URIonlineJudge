#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x=0, y=0;
    float price[5]={4.0, 4.5, 5.0, 2.0, 1.5};
    float total=0;

    cin >> x >> y;

    total=price[x-1]*y;

    cout << "Total: R$ " << fixed << setprecision(2)<< total << endl;

    return 0;
}
