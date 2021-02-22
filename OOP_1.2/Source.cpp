/////////////////////////  Source.cpp  /////////////////////////
#include <iostream>
#include "Payment.h"
using namespace std;
int main()
{
	Payment man;
	man.Read();
	man.Display();
	cout << endl;
	cout << "Narahovanna summa = " << man.CountNarah() << endl;
	cout << "Podatok = " << man.CountPodatok() << endl;
	cout << "Utrymana summa = " << man.CountUtrym() << endl;
	cout << "Stazh = " << man.CountStazh() << endl;
	cout << "Vydano na ruki = " << man.CountVudachya() << endl;
	return 0;
}