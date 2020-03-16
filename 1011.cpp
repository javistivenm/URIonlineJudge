#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){

    double r, pi = 3.14159, VOLUME;
    cin >> r;
    VOLUME = (4/3.0)*pi*pow(r,3);
    cout << "VOLUME = " << fixed << setprecision(3) << VOLUME;
    cout << "\n";
    return 0;
}
