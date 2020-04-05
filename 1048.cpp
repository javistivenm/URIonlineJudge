/* La empresa ABC decidió dar un aumento salarial a sus empleados, según la siguiente tabla:

Salario 	Porcentaje de Reajuste

0 - 400.00              15%
400.01 - 800.00         12%
800.01 - 1200.00        10%
1200.01 - 2000.00       7%
Por encima de 2000.00   4%

Lea el salario del empleado, calcule e imprima el nuevo salario del empleado,
así como el dinero ganado y el porcentaje de aumento obtenido por el empleado,
con los mensajes correspondientes en portugués, como se muestra a continuación.

*/

#include <iostream>
#include <iomanip>

using namespace std;

float salarioBase, aumento, nuevoSalario, porcentaje;

int main()
{

    cin >> salarioBase;

    if(salarioBase<=400.00)
    {
        porcentaje=0.15;
        aumento=salarioBase*porcentaje;
        nuevoSalario=salarioBase+aumento;
        cout << "Novo salario: " << fixed << setprecision(2) << nuevoSalario << "\n"
                << "Reajuste ganho: " << fixed << setprecision(2) << aumento << "\n"
                << "Em percentual: 15 %" << "\n";

    }

    else if(salarioBase>=400.01 && salarioBase<=800.00)
    {
        porcentaje=0.12;
        aumento=salarioBase*porcentaje;
        nuevoSalario=salarioBase+aumento;
        cout << "Novo salario: " << fixed << setprecision(2) << nuevoSalario << "\n"
                << "Reajuste ganho: " << fixed << setprecision(2) << aumento << "\n"
                << "Em percentual: 12 %" << "\n";

    }

    else if(salarioBase>=800.01 && salarioBase<=1200.00)
    {
        porcentaje=0.10;
        aumento=salarioBase*porcentaje;
        nuevoSalario=salarioBase+aumento;
        cout << "Novo salario: " << fixed << setprecision(2) << nuevoSalario << "\n"
                << "Reajuste ganho: " << fixed << setprecision(2) << aumento << "\n"
                << "Em percentual: 10 %" << "\n";

    }

    else if(salarioBase>=1200.01 && salarioBase<=2000.00)
    {
        porcentaje=0.07;
        aumento=salarioBase*porcentaje;
        nuevoSalario=salarioBase+aumento;
        cout << "Novo salario: " << fixed << setprecision(2) << nuevoSalario << "\n"
                << "Reajuste ganho: " << fixed << setprecision(2) << aumento << "\n"
                << "Em percentual: 7 %" << "\n";

    }

    else if(salarioBase>2000)
    {
        porcentaje=0.04;
        aumento=salarioBase*porcentaje;
        nuevoSalario=salarioBase+aumento;
        cout << "Novo salario: " << fixed << setprecision(2) << nuevoSalario << "\n"
                << "Reajuste ganho: " << fixed << setprecision(2) << aumento << "\n"
                << "Em percentual: 4 %" << "\n";

    }


    return 0;
}
