#include "SSD.h"

/*SSD();//конструктор по умолчанию отсуствует*/

SSD::SSD(const char* n, double p)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
}

void SSD::PrintSSD()
{
	cout << "SSD name: " << name << endl;
}

SSD::~SSD()
{
	delete[]name;
}

const char* SSD::getName()
{
	return name;
}

double SSD::getPrice()
{
	return price;
}

void SSD::setName(const char* n)
{
	if (name != nullptr)
	{
		cout << "Delete -> " << name << "... \n";
		delete[]name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void SSD::setPrice(double p)
{
	price = p;
}
