#pragma once
#include<iostream>
using namespace std;

class SSD
{
char* name;
double price;
public:

	/*SSD();//конструктор по умолчанию отсуствует*/
	SSD(SSD& obj);
	SSD(const char* n, double p);
	void PrintSSD();
	~SSD();

	const char* getName();
	double getPrice();

	void setName(const char* n);
	void setPrice(double p);
};

