#include <iostream>

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
    cin >> valor;
    tmp=valor;

    if (valor >= billetes[0]){
        cantidadBilletes[0] = contarBilletes(valor, billetes[0]);
        valor = descontarResiduo(valor, billetes[0]);
    }

    if (valor >= billetes[1]){
        cantidadBilletes[1] = contarBilletes(valor, billetes[1]);
        valor = descontarResiduo(valor, billetes[1]);
    }

    if (valor >= billetes[2]){
        cantidadBilletes[2] = contarBilletes(valor, billetes[2]);
        valor = descontarResiduo(valor, billetes[2]);
    }

    if (valor >= billetes[3]){
        cantidadBilletes[3] = contarBilletes(valor, billetes[3]);
        valor = descontarResiduo(valor, billetes[3]);
    }

    if (valor >= billetes[4]){
        cantidadBilletes[4] = contarBilletes(valor, billetes[4]);
        valor = descontarResiduo(valor, billetes[4]);
    }

    if (valor >= billetes[5]){
        cantidadBilletes[5] = contarBilletes(valor, billetes[5]);
        valor = descontarResiduo(valor, billetes[5]);
    }

    if (valor >= billetes[6]){
        cantidadBilletes[6] = contarBilletes(valor, billetes[6]);
        valor = descontarResiduo(valor, billetes[6]);
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
