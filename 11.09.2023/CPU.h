#pragma once

#include<iostream>
using namespace std;

class CPU
{
char* name;
double price;
public:

	/*CPU();//конструктор по умолчанию отсуствует*/
	CPU(const char* n, double p);
	void PrintCPU();
	~CPU();
 
    const char* getName();
    double getPrice();

    void setName(const char* n);
    void setPrice(double p);
};

