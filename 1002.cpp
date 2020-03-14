#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    double pi = 3.14159, radio, area;
    cin >> radio;
    area= pi*pow(radio,2);
    cout << "A=" << fixed << setprecision(4) << area;
    cout << "\n";
    return 0;
}
