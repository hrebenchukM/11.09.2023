#include "VIDEOCARD.h"



/*VIDEOCARD();//конструктор по умолчанию отсуствует*/

VIDEOCARD::VIDEOCARD(const char* n, double p)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
}

void VIDEOCARD::PrintVIDEOCARD()
{
	cout << "VIDEOCARD name: " << name << endl;
}

VIDEOCARD::~VIDEOCARD()
{
	delete[]name;
}

const char* VIDEOCARD::getName()
{
	return name;
}

double VIDEOCARD::getPrice()
{
	return price;
}

void VIDEOCARD::setName(const char* n)
{
	if (name != nullptr)
	{
		cout << "Delete -> " << name << "... \n";
		delete[]name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void VIDEOCARD::setPrice(double p)
{
	price = p;
}
