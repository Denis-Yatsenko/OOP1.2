/////////////////////////   Payment.cpp  /////////////////////////
#include "Payment.h"
#include <iostream>
void Payment::setName(string value)
{
	name = value;
}
bool Payment::setStavka(double value)
{
	if (value > 0)
	{
		stavka = value;
		return true;
	}
	else
	{
		stavka = -value;
		return false;
	}
}
bool Payment::setRik(int value)
{
	if (value > 0)
	{
		rik = value;
		return true;
	}
	else
	{
		rik = 0;
		return false;
	}
}
bool Payment::setNadbavka(double value)
{
	if (value > 0)
	{
		nadbavka = value;
		return true;
	}
	else
	{
		nadbavka = 0;
		return false;
	}
}
bool Payment::setPodatok(double value)
{
	if (value > 0)
	{
		podatok = value;
		return true;
	}
	else
	{
		podatok = -value;
		return false;
	}
}
bool Payment::setVidpdni(int value)
{
	if (value > 0)
	{
		vidpdni = value;
		return true;
	}
	else
	{
		vidpdni = -value;
		return false;
	}
}
bool Payment::setDni(int value)
{
	if (value > 0)
	{
		dni = value;
		return true;
	}
	else
	{
		dni = -value;
		return false;
	}
}
bool Payment::setNarah(double value)
{
	if (value > 0)
	{
		narah = value;
		return true;
	}
	else
	{
		narah = -value;
		return false;
	}
}
bool Payment::setUtrimani(double value)
{
	if (value > 0)
	{
		utrimani = value;
		return true;
	}
	else
	{
		utrimani = -value;
		return false;
	}
}
bool Payment::Init(string name, double stavka, int rik, double nadbavka, int vidpdni, int dni)
{
	setName(name);
	return setStavka(stavka) && setRik(rik) && setNadbavka(nadbavka) && setVidpdni(vidpdni) && setDni(dni);
}
double CountNarah(double stavka, int vidpdni, double nadbavka)
{
	return (stavka * vidpdni + nadbavka / 100 * stavka * vidpdni);
}
double CountUtrym(double stavka, int vidpdni, double nadbavka) {
	return ((0.01 * ((stavka * vidpdni) + ((nadbavka / 100) * (stavka * vidpdni)))) + (0, 13 * (stavka * vidpdni) 
		+ ((nadbavka / 100) * (stavka * vidpdni))));
}
double CountVudachya(double stavka, int vidpdni, double nadbavka)
{
	 return ((stavka * vidpdni) + ((nadbavka / 100) * (stavka * vidpdni))) - ((0.01 * ((stavka * vidpdni) + ((nadbavka / 100) * (stavka * vidpdni)))) 
		+ (0, 13 * (stavka * vidpdni) + ((nadbavka / 100) * (stavka * vidpdni))));
}
void Payment::Read()
{
	string name;
	int rik;
	double stavka;
	double nadbavka;
	int vidpdni;
	int dni;

	cout << " name = "; cin >> name;
	do
	{
		cout << " stavka = "; cin >> stavka;
		cout << " rik = "; cin >> rik;
		cout << " nadbavka = "; cin >> nadbavka;
		cout << " vidpdni = "; cin >> vidpdni;
		cout << " dni = "; cin >> dni;
		cout << endl;
	} while (!Init(name,stavka,rik,nadbavka,vidpdni,dni));
}
void Payment::Display()
{
	cout << " name = " << name << endl;
	cout << " stavka = " << stavka << endl;
	cout << " rik = " << rik << endl;
	cout << " nadbavka = " << nadbavka << endl;
	cout << " vidpdni = " << vidpdni << endl;
	cout << " dni = " << dni << endl;
}
