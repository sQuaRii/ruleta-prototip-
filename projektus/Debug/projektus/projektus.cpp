#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

	double vsadenie, celkzisk = 0;
double vyhra1k1() {
	return celkzisk += vsadenie;;
}
/*void vyhra8k1() {
	cout << "Vyhral si = " << vsadenie << "$" << endl;
	celkzisk += vsadenie;
}*/

double prehra () {
	cout << "Prehral si = " << vsadenie << "$" << endl;
	celkzisk -= vsadenie;
	return 0;
}


int main()
{
	int const MIN_NUMBER = 0, MAX_NUMBER = 36;
	int number;
	int random;
	double vsadenie, celkzisk = 0;
	int gametype;
	int evenodd;
	int i;

	srand(static_cast<unsigned int>(time(NULL)));
	for (i = 0; i < 20; i++)
	{
		random = rand() % (MAX_NUMBER - MIN_NUMBER + 1) + MIN_NUMBER;
	}


	cout << "Vitaj v Rulete\n\n";
	cout << "Kolko chces vsadit\n"; cin >> vsadenie;
	cout << "Vsadil si\n" << vsadenie <<"$"  << "\n\n";
		
			cout << "Ak chces vsadit na specificke cislo    = 1" << endl;
			cout << "Ak chces vsadit na parne/neparne cisla = 2" << endl;
			cout << "Ak chces vsadit na High/Low		    = 3" << endl;
			cout << "Ak chces vsadit na Red/Black		    = 4" << endl;
			cout << "Ak chces vsadit na Corner              = 5" << endl;
			cout << "Ak chces vsadit na Riadok(Corner)      = 6" << endl;

	cin >> gametype;

	if (gametype == 1)
	{
		cout << "Na ake cislo chces vsadit? "; cin >> number;
		if (number == 00)
			number = 37;

		void nahodnecislo();
		cout << "Lopticka spadla na cislo " << random << endl;

	
		if (number != random)
		{
			{
				prehra();
			}
		}
		
		 else
		{
			cout << "JE TAAAAM!!!!" << 35 * vsadenie << endl;
			celkzisk += 35 * vsadenie;
		}
	}

	
	if (gametype == 2)
	{

		cout << "Naco chces vsadit?" << "\n\n";;
			cout << "Na neparne = 1" << endl;;
			cout << "Na parne   = 2" << endl;
		
		cin >> evenodd;

		void nahodnecislo();
		cout << "Lopticka spadla na cislo " << random << endl;

		
		if (evenodd == 1)
		{
		
			if (random % 2 == 0)
			{
				prehra();
			}
			
			else
			{
				vyhra1k1();
			}
		}

	
		if (evenodd == 2)
		{
		
			if (random % 2 == 0)
			{
				double vyhra = vyhra1k1();
				cout << "Vyhral si" << celkzisk << "$" << "\n";
			}
		
			else
			{
				prehra();
			}
		}
	}

	cout << "Vyhral si" << celkzisk <<"$" << "\n"; 

	/*
		2 Number Combination	17 to 1	5.4%	5.3%
		3 Number Combination	11 to 1	8.1%	7.9%
		4 Number Combination	8 to 1	10.8%	10.5%
		5 Number Combination	6 to 1	13.5%	13.2%
		6 Number Combination       

		Even/Odd	1 to 1	48.60%	47.4%
		Red/Black	1 to 1	48.60%	47.4%
		Low/High    1 to 1
	
		Dozen(12 numbers)         2 : 1      
		Column(12 numbers)        2 : 1       
		Corner(4 numbers)         8 : 1 
		Straight(single number)   35 : 1
		*/
}