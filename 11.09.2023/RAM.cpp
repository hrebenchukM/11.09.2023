#include "RAM.h"

/*RAM();//конструктор по умолчанию отсуствует*/

RAM::RAM(const char* n, double p):price(p)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
}

void RAM::PrintRAM()
{
	cout << "RAM name: " << name << endl;
}

RAM::~RAM()
{
	delete[]name;
}

const char* RAM::getName()
{
	return name;
}

double RAM::getPrice()
{
	return price;
}

void RAM::setName(const char* n)
{
	if (name != nullptr)
	{
		cout << "Delete -> " << name << "... \n";
		delete[]name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void RAM::setPrice(double p)
{
	price = p;
}
