#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

double calcularAreaTriangulo (double base, double altura)
{
    return base*altura/2;
}

double calcularAreaCirculo (double radio, double pi)
{
    return pi*pow(radio,2);;
}

double calcularAreaTrapecio (double baseMayor, double baseMenor, double altura)
{
    return (baseMayor+baseMenor)/2*altura;
}

double calcularAreaCuadrado (double lado)
{
    return lado*lado;
}

double calcularAreaRectangulo (double base, double altura)
{
    return base*altura;
}

int main(){

    double a, b, c, pi = 3.14159;
    double TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    cin >> a >> b >> c;
    TRIANGULO = calcularAreaTriangulo(a,c);
    CIRCULO = calcularAreaCirculo(c,pi);
    TRAPEZIO = calcularAreaTrapecio(a, b, c);
    QUADRADO = calcularAreaCuadrado(b);
    RETANGULO = calcularAreaRectangulo(a, b);
    cout << "TRIANGULO: " << fixed << setprecision(3) << TRIANGULO;
    cout << "\n";
    cout << "CIRCULO: " << fixed << setprecision(3) << CIRCULO;
    cout << "\n";
    cout << "TRAPEZIO: " << fixed << setprecision(3) << TRAPEZIO;
    cout << "\n";
    cout << "QUADRADO: " << fixed << setprecision(3) << QUADRADO;
    cout << "\n";
    cout << "RETANGULO: " << fixed << setprecision(3) << RETANGULO;

    cout << "\n";
    return 0;
}
