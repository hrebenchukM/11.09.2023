#include "VIDEOCARD.h"



/*VIDEOCARD();//конструктор по умолчанию отсуствует*/

VIDEOCARD::VIDEOCARD(VIDEOCARD& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	price = obj.price;
	cout << "Copy constructor VIDEOCARD\n";
}


VIDEOCARD::VIDEOCARD(const char* n, double p)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
	cout << "Constructor with 2 VIDEOCARD\n";
}

void VIDEOCARD::PrintVIDEOCARD()
{
	cout << "VIDEOCARD name: " << name << endl;
}

VIDEOCARD::~VIDEOCARD()
{
	delete[]name;
	cout << "Destructor VIDEOCARD" << endl;
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
