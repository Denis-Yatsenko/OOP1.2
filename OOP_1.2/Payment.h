/////////////////////////  Payment.h  /////////////////////////
#pragma once
#include <string>

using namespace std;

class Payment
{
private:
	string name;
	double stavka;
	int rik;
	double nadbavka;
	double podatok;
	int vidpdni;
	int dni;
    double narah;
	double utrimani;
public:
	string getName() const { return name; }
	int getRik() const { return rik; }
	double getStavka() const { return stavka; }
	double getNadbavka() const { return nadbavka; }
	double getPodatok() const { return podatok; }
	int getVidpdni() const { return vidpdni; }
	int getDni() const { return dni; }
	double getNarah() const { return narah; }
	double getUtrimani() const { return utrimani; }

	void setName(string);
	bool setRik(int);
	bool setStavka(double);
	bool setNadbavka(double);
	bool setPodatok(double);
	bool setVidpdni(int);
	bool setDni(int);
	bool setNarah(double);
	bool setUtrimani(double);

	bool Init(string name, double stavka, int rik, double nadbavka, int vidpdni, int dni);

	double CountNarah() { return ((stavka * vidpdni) + (nadbavka * stavka * vidpdni)); }
		double CountUtrym() const {return (((stavka * vidpdni) + (nadbavka * stavka * vidpdni))*0.01 + (0.13*((stavka * vidpdni) + (nadbavka * stavka * vidpdni)))); }
	int CountStazh() const { return (2021 - rik); }
	double CountVudachya() const { return ((stavka * vidpdni) + (nadbavka * stavka * vidpdni) - 
		(((stavka * vidpdni) + (nadbavka * stavka * vidpdni)) * 0.01 + (0.13 * ((stavka * vidpdni) + (nadbavka * stavka * vidpdni))))); }
	double CountPodatok() const { return 0.13 * (stavka * vidpdni + nadbavka * stavka * vidpdni); }

	void Read();
	void Display();
};

