#include <iostream>
#include <climits>

using namespace std;

int contarBilletes (int valor, int billetes)
{
    return valor / billetes;
}

int descontarResiduo (int valor, int billetes)
{
    return valor % billetes;
}

int main()
{

    int valor=0;
    int billetes[12]={10000, 5000, 2000, 1000, 500, 200, 100, 50, 25, 10, 5, 1};
    int cantidadBilletes[12]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int tamanoCB = sizeof(cantidadBilletes)/sizeof(cantidadBilletes[0]);
    float n;
    cin >> n;
    valor=n*100;

    for(int indice = 0; indice < tamanoCB; indice++){
      if (valor >= billetes[indice]){
          cantidadBilletes[indice] = contarBilletes(valor, billetes[indice]);
          valor = descontarResiduo(valor, billetes[indice]);
      }
    }

    cout    <<"NOTAS:\n"
            << cantidadBilletes[0] << " nota(s) de R$ 100.00\n"
            << cantidadBilletes[1] << " nota(s) de R$ 50.00\n"
            << cantidadBilletes[2] << " nota(s) de R$ 20.00\n"
            << cantidadBilletes[3] << " nota(s) de R$ 10.00\n"
            << cantidadBilletes[4] << " nota(s) de R$ 5.00\n"
            << cantidadBilletes[5] << " nota(s) de R$ 2.00\n"

            <<"MOEDAS:\n"
            << cantidadBilletes[6] << " moeda(s) de R$ 1.00\n"
            << cantidadBilletes[7] << " moeda(s) de R$ 0.50\n"
            << cantidadBilletes[8] << " moeda(s) de R$ 0.25\n"
            << cantidadBilletes[9] << " moeda(s) de R$ 0.10\n"
            << cantidadBilletes[10] << " moeda(s) de R$ 0.05\n"
            << cantidadBilletes[11] << " moeda(s) de R$ 0.01\n";

    return 0;
}
