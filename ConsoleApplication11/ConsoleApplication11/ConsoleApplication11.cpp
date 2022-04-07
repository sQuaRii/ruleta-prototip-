#include <iostream>
#include <string> 
#include <cstdlib> 
#include <ctime>
using namespace std;
void casino();
void mody();
int main()
{
    string meno;
    int rozpocet;
    int vsadzka;
    int guess;
    int kostka;
    int parneneparne;
    int Farba;
    int mod_hry;
    char vyber;
    int const MIN_NUMBER = 0, MAX_NUMBER = 36;

    srand(static_cast<unsigned int>(time(NULL)));
    for (int i = 0; i < 20; i++)
    {
        kostka = rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
    }

    cout << "\n\t\t========VYTAJ V CASINE=======\n\n";
    cout << "\n\nZadaj svoje meno : ";
    getline(cin, meno);
    cout << "\n\nVloz svoj startovny rozpocet: $";
    cin >> rozpocet;

    mody();
    cin >> mod_hry;

    if (mod_hry == 1) {

        do
        {
            casino();
            cout << "\n\n Tvoj sucastny balanc je " << rozpocet << " $" << "\n";
            do
            {
                cout << meno << ", Vloz kolko chces vstadit : $";
                cin >> vsadzka;
                if (vsadzka > rozpocet)
                    cout << "Nemozes vsadit viac nez mas rozpocet!\n"
                    << "\nDaj iny rozpocet\n ";
            } while (vsadzka > rozpocet);
            do
            {
                cout << "Vyber si cislo medzi 0-36:";
                cin >> guess;
                if (guess < 0 || guess > 36)
                    cout << "\nCislo musi byt medzi 0-36\n"
                    << "Zadaj ine cislo:\n ";
            } while (guess < 0 || guess > 36);
            kostka = rand() % 36;
            if (kostka == guess)
            {
                cout << "\n\nVyhral si." << vsadzka * 36;
                rozpocet = rozpocet + (vsadzka * 3);
            }
            else
            {
                cout << "Prehra, prehral si " << vsadzka << " $" << "\n";
                rozpocet = rozpocet - vsadzka;
            }
            cout << "\n Vyherne cislo bolo: " << kostka << "\n";
            cout << "\n" << meno << ", Mas rozpocet " << rozpocet << "$" << "\n";
            if (rozpocet == 0)
            {
                cout << "Prehral si vsetky peniaze ";
                break;
            }
            cout << "\n\n-->Chces hrat znova? (a/n)? ";
            cin >> vyber;
        } while (vyber == 'A' || vyber == 'a');
        cout << "\n\n\n";
        cout << "\n\n Vdaka za hru, tvoj finalny rozpocet je " << rozpocet << "$" << "\n\n";
        return 0;
    }


    if (mod_hry == 2) {
        do
        {
            casino();
            cout << "\n\n Vyber tvoj sucastny balanc je " << rozpocet << " $" << "\n";
            do
            {
                cout << meno << ", Vloz kolko chces vstadit : $";
                cin >> vsadzka;
                if (vsadzka > rozpocet)
                    cout << "Nemozes vsadit viac nez mas rozpocet!\n"
                    << "\nDaj iny rozpocet\n ";
            } while (vsadzka > rozpocet);

            cout << "Naco chces vsadit?" << "\n\n";;
            cout << "1 = Na neparne" << endl;;
            cout << "2 = Na parne" << endl;

            cin >> parneneparne;

            cout << "\n Vyherne cislo bolo: " << kostka << "\n";


            if (parneneparne == 1)
            {

                if (kostka % 2 == 0)
                {
                    cout << "Prehra, prehral si " << vsadzka << " $" << "\n";
                    rozpocet = rozpocet - vsadzka;
                }
                else
                {
                    cout << "\n\nVyhral si " << vsadzka * 2 << " $" << "\n";
                    rozpocet = rozpocet + (vsadzka * 2);
                }
            }
            if (parneneparne == 2)
            {

                if (kostka % 2 == 0)
                {
                    cout << "\n\nVyhral si " << vsadzka * 2 << " $" << "\n";
                    rozpocet = rozpocet + (vsadzka * 23);
                }
                else
                {
                    cout << "Prehra, prehral si " << vsadzka << " $" << "\n";
                    rozpocet = rozpocet - vsadzka;
                }
            }
            if (rozpocet == 0)
            {
                cout << "Prehral si vsetky peniaze ";
                break;
            }
            cout << "\n\n-->Chces hrat znova? (a/n)? ";
            cin >> vyber;
        } while (vyber == 'A' || vyber == 'a');
        cout << "\n\n\n";
        cout << "\n\n Vdaka za hru, tvoj finalny rozpocet je " << rozpocet << "$" << "\n\n";
        return 0;
    }

    if (mod_hry == 3) {
        do
        {
            casino();
            cout << "\n\n Vyber tvoj sucastny balanc je " << rozpocet << " $" << "\n";
            do
            {
                cout << meno << ", Vloz kolko chces vstadit : $";
                cin >> vsadzka;
                if (vsadzka > rozpocet)
                    cout << "Nemozes vsadit viac nez mas rozpocet!\n"
                    << "\nDaj iny rozpocet\n ";
            } while (vsadzka > rozpocet);

            cout << "Naco chces vsadit?" << "\n\n";;
            cout << "1 = Na Cervenu" << endl;;
            cout << "2 = Na Ciernu" << endl;

            cin >> Farba;

            cout << "\n Vyherne cislo bolo: " << kostka << "\n";


            if (Farba == 1)
            {

                if (kostka == 15, 4, 2, 17, 6, 13, 11, 8, 10, 24, 33, 20, 31, 22, 29, 28, 35, 26)
                {
                    cout << "Prehra, prehral si " << vsadzka << " $" << "\n";
                    rozpocet = rozpocet - vsadzka;
                }
                else
                {
                    cout << "\n\nVyhral si " << vsadzka * 2 << " $" << "\n";
                    rozpocet = rozpocet + (vsadzka * 2);
                }
            }
            if (Farba == 2)
            {

                if (kostka == 15, 4, 2, 17, 6, 13, 11, 8, 10, 24, 33, 20, 31, 22, 29, 28, 35, 26 )
                {
                    cout << "\n\nVyhral si " << vsadzka * 2 << " $" << "\n";
                    rozpocet = rozpocet + (vsadzka * 2);
                }
                else
                {
                    cout << "Prehra, prehral si " << vsadzka << " $" << "\n";
                    rozpocet = rozpocet - vsadzka;
                }
            }
            if (rozpocet == 0)
            {
                cout << "Prehral si vsetky peniaze ";
                break;
            }
            cout << "\n\n-->Chces hrat znova? (a/n)? ";
            cin >> vyber;
        } while (vyber == 'A' || vyber == 'a');
        cout << "\n\n\n";
        cout << "\n\n Vdaka za hru, tvoj finalny rozpocet je " << rozpocet << "$" << "\n\n";
        return 0;
    }

    }

    


    void casino()
    {
        system("cls");
        cout << "\t\t======CASINO RULETA!======\n";
    }
    void mody()
    {
        system("cls");
        cout << "\t\t======CASINO RULETA!======\n";
        cout << "\t\t=======VYBER SI MOD!======\n";
        cout << "\t1. Vsadenie na presne cislo\n";
        cout << "\t2. Vsadenie na parne/neparne cisla\n";
        cout << "\t3. Vsadenie na farby(Cervena/Cierna)\n";
    }
