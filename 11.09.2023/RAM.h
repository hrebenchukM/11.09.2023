#pragma once
#include<iostream>
using namespace std;

class RAM
{
    char* name;
	double price;
	public:

		/*RAM();//конструктор по умолчанию отсуствует*/
		RAM(const char* n,double p);
		RAM(RAM& obj);
		void PrintRAM();
		~RAM();

		const char* getName();
		double getPrice();

		void setName(const char* n);
		void setPrice(double p);
	
};

