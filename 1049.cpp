#include <iostream>

using namespace std;

int main()
{

    string animal1, animal2, animal3;

    cin >> animal1 >> animal2 >> animal3;

    if(animal1 == "vertebrado" || animal2 == "vertebrado" || animal3 == "vertebrado") {

            if(animal1 == "ave" || animal2 == "ave" || animal3 == "ave") {

                    if (animal1 == "carnivoro" || animal2 == "carnivoro" || animal3 == "carnivoro") {

                        cout << "aguia" << endl;

                    } else {

                        cout << "pomba" <<endl;
                    }

            } else {

                if (animal1 == "onivoro" || animal2 == "onivoro" || animal3 == "onivoro") {

                    cout << "homem" << endl;

                } else {

                    cout << "vaca" << endl;
                }
            }

    } else {

        if(animal1 == "inseto" || animal2 == "inseto" || animal3 == "inseto") {

                if (animal1 == "hematofago" || animal2 == "hematofago" || animal3 == "hematofago") {

                    cout << "pulga" << endl;

                } else {

                    cout << "lagarta" << endl;
                }

        } else {

            if (animal1 == "hematofago" || animal2 == "hematofago" || animal3 == "hematofago") {

                cout << "sanguessuga" << endl;

            } else {

                cout << "minhoca" <<endl;
            }
        }
    }


    return 0;
}
