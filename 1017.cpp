#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int time, speed, fuel=12;
    double distance, need;
    cin >> time >> speed;
    distance = time*speed;
    need = distance/fuel;
    cout << fixed << setprecision(3) <<need;
    cout << "\n";

    return 0;
}

