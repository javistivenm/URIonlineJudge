#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int NUMBER, HOURS;
    float SALARY, PRICE;
    cin >> NUMBER >> HOURS >> PRICE;
    SALARY = PRICE * HOURS;
    cout << "NUMBER = " << NUMBER;
    cout << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << SALARY;


    cout << "\n";
    return (0);
}
