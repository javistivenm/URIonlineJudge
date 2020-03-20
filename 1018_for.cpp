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
    int valor=0, tmp=0;
    int billetes[7]={100, 50, 20, 10, 5, 2, 1};
    int cantidadBilletes[7]={0, 0, 0, 0, 0, 0, 0};
    int tamanoCB = sizeof(cantidadBilletes)/sizeof(cantidadBilletes[0]);
    cin >> valor;
    tmp=valor;

    for(int indice = 0; indice < tamanoCB; indice++){
      if (valor >= billetes[indice]){
          cantidadBilletes[indice] = contarBilletes(valor, billetes[indice]);
          valor = descontarResiduo(valor, billetes[indice]);
      }
    }

    cout << tmp
            <<"\n"
            << cantidadBilletes[0] << " nota(s) de R$ 100,00\n"
            << cantidadBilletes[1] << " nota(s) de R$ 50,00\n"
            << cantidadBilletes[2] << " nota(s) de R$ 20,00\n"
            << cantidadBilletes[3] << " nota(s) de R$ 10,00\n"
            << cantidadBilletes[4] << " nota(s) de R$ 5,00\n"
            << cantidadBilletes[5] << " nota(s) de R$ 2,00\n"
            << cantidadBilletes[6] << " nota(s) de R$ 1,00\n";

    return 0;
}
