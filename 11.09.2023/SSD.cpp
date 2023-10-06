#include "SSD.h"

/*SSD();//конструктор по умолчанию отсуствует*/

SSD::SSD(SSD& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	price = obj.price;
	cout << "Copy constructor SSD\n";
}

SSD::SSD(const char* n, double p)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
	cout << "Constructor with 2 SSD\n";
}

void SSD::PrintSSD()
{
	cout << "SSD name: " << name << endl;
}

SSD::~SSD()
{
	delete[]name;
	cout << "Destructor SSD" << endl;
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
