#pragma once
#include<iostream>
using namespace std;

class VIDEOCARD
{
	
    char* name;
	double price;
	public:

		/*VIDEOCARD();//конструктор по умолчанию отсуствует*/
		VIDEOCARD(VIDEOCARD& obj);
		VIDEOCARD(const char* n, double p);
		void PrintVIDEOCARD();
		~VIDEOCARD();

		const char* getName();
		double getPrice();

		void setName(const char* n);
		void setPrice(double p);

	

};

