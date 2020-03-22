#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    float n1=0, n2=0, n3=0, n4=0, media=0, notaExamen=0, mediaFinal=0;
    const int pN1=2, pN2=3, pN3=4, pN4=1;
    int pesoTotal;

    cin >> n1 >> n2 >> n3 >> n4;
    pesoTotal=pN1+pN2+pN3+pN4;
    media= (n1*pN1 + n2*pN2 + n3*pN3 + n4*pN4) / pesoTotal;
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    if(media>=7.0){
        cout << "Aluno aprovado." << endl;
    }
    if(media<5){
        cout << "Aluno reprovado." << endl;
    }
    if(media>=5 && media<=6.9){
        cout << "Aluno em exame." << endl;
        cin >> notaExamen;
        cout << "Nota do exame: " << fixed << setprecision(1) << notaExamen << endl;
        mediaFinal=(media+notaExamen)/2;
        if(mediaFinal>=5){
            cout << "Aluno aprovado." << endl;
        }
        else {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << fixed << setprecision(1) << mediaFinal << endl;
    }

    return 0;
}
