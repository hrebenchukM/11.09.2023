#pragma once
#include<iostream>
using namespace std;
#include "RAM.h" 
#include "VIDEOCARD.h"
#include "SSD.h"
#include "CPU.h" 

class Laptop
{
	char* name;
	char* color;
	double price;//Sum of all elements
	CPU cpu;
	SSD ssd;
	VIDEOCARD video;
	RAM ram;
	


public:




	static int count;
	Laptop(const char* n, double p);
	Laptop(const char* n, double p, const char* c);

	Laptop(const char* n, double p, const char* c, const char* RAM_name, double RAM_price, const char* VIDEOCARD_name, double VIDEOCARD_price,
		const char* SSD_name, double SSD_price, const char* CPU_name, double CPU_price);
	void PrintLaptop();
	


	~Laptop();

	const char* getName();
	const char* getColor() ;
	double getPrice();

	void setName(const char* n);
	void setColor(const char* c);
	void setPrice(double p);

	void Input();
	
};

