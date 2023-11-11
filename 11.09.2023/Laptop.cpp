#include "Laptop.h"
#include<iostream>
using namespace std;

int Laptop::count = 0;


Laptop::Laptop(const char* n) :cpu(nullptr, 0), ssd(nullptr, 0), video(nullptr), ram(nullptr, 0)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

Laptop::Laptop(const char* n, double p) :Laptop(n)//делегирование2
{
	price = p;
}

Laptop::Laptop(const char* n, double p, const char* c) : Laptop(n, p)//делегирование 3
{
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}

Laptop::Laptop(Laptop& lap):cpu(lap.cpu),ram(lap.ram),ssd(lap.ssd),video(lap.video)
{
	name = new char[strlen(lap.name) + 1];
	strcpy_s(name, strlen(lap.name) + 1, lap.name);
	price = lap.price;
	color = new char[strlen(lap.color) + 1];
	strcpy_s(color, strlen(lap.color) + 1, lap.color);
	cout << "Copy constructor Laptop\n";
}



Laptop::Laptop(const char* n, double p, const char* c, const char* RAM_name, double RAM_price, VIDEOCARD* video,
	const char* SSD_name, double SSD_price, const char* CPU_name, double CPU_price)
	: cpu(CPU_name, CPU_price), ssd(SSD_name, SSD_price),
	video(video), ram(RAM_name, RAM_price), price(p)//инициализаторы
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);

	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
	count++;
}






Laptop::~Laptop()
{
	delete[]name;
	delete[]color;
	--count;
	cout << "Destructor Laptop" << endl;
}

void Laptop::PrintLaptop()
{
	cout << name << endl;
	cout << color << endl;
	cout << price << endl;

	cpu.PrintCPU();
	ssd.PrintSSD();
	video->PrintVIDEOCARD();
	ram.PrintRAM();

	//cout << count << endl;
}

const char* Laptop::getName()
{
	return name;
}

const char* Laptop::getColor()
{
	return color;
}

double Laptop::getPrice()
{
	return price;
}

void Laptop::setName(const char* n)
{
	if (name != nullptr)
	{
		cout << "Delete -> " << name << "... \n";
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Laptop::setColor(const char* c)
{
	if (color != nullptr)
	{
		cout << "Delete -> " << color << "... \n";
		delete[]color;
	}
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
}

void Laptop::setPrice(double p)
{
	price = p;
}




void  Laptop::Input()
{
	char buff[20];

	cout << "Enter name of laptop: ";
	cin >> buff;
	setName(buff);

	cout << "Enter price of laptop: ";
	cin >> price;
	setPrice(price);


	cout << "Enter color of laptop: ";
	cin >> buff;
	setColor(buff);


	cout << "Enter name of RAM: ";
	cin >> buff;
	ram.setName(buff);

	cout << "Enter price of RAM ";
	cin >> price;
	ram.setPrice(price);

	cout << "Enter name of VIDEOCARD: ";
	cin >> buff;
	video->setName(buff);

	cout << "Enter price of VIDEOCARD";
	cin >> price;
	video->setPrice(price);

	cout << "Enter name of SSD: ";
	cin >> buff;
	ssd.setName(buff);

	cout << "Enter price of SSD";
	cin >> price;
	ssd.setPrice(price);

	cout << "Enter name of CPU: ";
	cin >> buff;
	cpu.setName(buff);

	cout << "Enter price of CPU";
	cin >> price;
	cpu.setPrice(price);


}