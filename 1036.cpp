#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    float a=0, b=0, c=0;
    float raizNegativa=0;
    float bhaskara1=0, bhaskara2=0;
    cin >> a >> b >> c;

    raizNegativa=pow(b,2)-4*(a)*(c);

    bhaskara1=(-(b)+sqrt(pow(b,2)-4*(a)*(c)))/(2*(a));

    bhaskara2=(-(b)-sqrt(pow(b,2)-4*(a)*(c)))/(2*(a));

    if (a==0 || raizNegativa < 0){

        cout << "Impossivel calcular" << endl;
    }
    else{
        cout << "R1 = " << fixed << setprecision(5) << bhaskara1 << endl;
        cout << "R2 = " << fixed << setprecision(5) << bhaskara2 << endl;
    }




    return 0;
}
