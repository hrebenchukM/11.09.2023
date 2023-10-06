#include "CPU.h"




CPU::CPU(CPU& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	price = obj.price;
	cout << "Copy constructor CPU\n";
}

CPU::CPU(const char* n, double p)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = p;
	cout << "Constructor with 2 CPU\n";
}

void CPU::PrintCPU()
{
	cout << "CPU name: " << name << endl;
}

CPU::~CPU()
{
	delete[]name;
	cout << "Destructor CPU" << endl;
}

const char* CPU::getName()
{
	return name;
}

double CPU::getPrice()
{
	return price;
}

void CPU::setName(const char* n)
{
	if (name != nullptr)
	{
		cout << "Delete -> " << name << "... \n";
		delete[]name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void CPU::setPrice(double p)
{
	price = p;
}
