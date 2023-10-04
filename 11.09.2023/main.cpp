#include<iostream>
using namespace std;
#include "Laptop.h"
#include "RAM.h" 
#include "VIDEOCARD.h"
#include "SSD.h"
#include "CPU.h" 


int main() {


    RAM ram1("Kingston", 500.00);
    RAM ram2("Kingston", 400.00);

    VIDEOCARD video1("NVIDIA", 2300.00);
    VIDEOCARD video2("AMD",  2200.00);

    SSD ssd1("Kingston", 2000.00);
    SSD ssd2("Kingston", 3000.00);

   

    CPU cpu1("Intel",  700.00);
    CPU cpu2("AMD", 800.00);


    Laptop obj1("Laptop1", 10000.00, "Black", "Kingston",500.00, "NVIDIA", 2300.00, "Kingston", 2000.00, "Intel", 700.00);
    Laptop obj2("Laptop2", 15000.00, "White", "Kingston", 400.00, "AMD", 2200.00, "Kingston", 3000.00, "AMD", 800.00);

    
    cout << "___________________________________________________" << endl;
    obj1.PrintLaptop();
    cout << "___________________________________________________" << endl;
   
    obj2.PrintLaptop();
    cout << "___________________________________________________" << endl;



    obj1.Input();
    cout << "___________________________________________________" << endl;
    obj1.PrintLaptop();
    cout << "___________________________________________________" << endl;


    obj2.Input();
    cout << "___________________________________________________" << endl;
    obj2.PrintLaptop();
    cout << "___________________________________________________" << endl;



    cout << " Count of laptops " << Laptop::count << endl;






}