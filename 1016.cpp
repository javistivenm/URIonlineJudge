#include <iostream>

using namespace std;

int main()
{
    int distancia_x_y = 30, tiempo_x_y = 60, distancia_variable, tiempo_variable;
    cin >> distancia_variable;
    tiempo_variable = (distancia_variable * tiempo_x_y) / distancia_x_y;
    cout << tiempo_variable <<" minutos";
    cout << "\n";
    return 0;
}
