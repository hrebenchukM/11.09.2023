#include<iostream>
using namespace std;
#include "Laptop.h"
#include "RAM.h" 
#include "VIDEOCARD.h"
#include "SSD.h"
#include "CPU.h" 


int main() {
    
    //RAM obj1("kingston 8gb", 100);
   // RAM obj2=obj1;
   // obj1.PrintRAM();
   // obj2.PrintRAM();

    VIDEOCARD* nvidia = new VIDEOCARD("NVIDIA", 2300.00);
    VIDEOCARD* amd = new VIDEOCARD("AMD", 2200.00);
   
    Laptop obj1("Laptop1", 10000.00, "Black", "Kingston",500.00, nvidia, "Kingston", 2000.00, "Intel", 700.00);
    Laptop obj2 = obj1;
    Laptop obj3("Laptop2", 15000.00, "White", "Kingston", 400.00, amd, "Kingston", 3000.00, "AMD", 800.00);


    //Laptop obj3("Laptop3",20000,"Yellow",RAM("kingston",200),)
    
    cout << "____1______________________________________________" << endl;
    obj1.PrintLaptop();
    
    cout << "____2______________________________________________" << endl;
    obj2.PrintLaptop();
    
    cout << "____3______________________________________________" << endl;
    obj3.PrintLaptop();
    cout << "___________________________________________________" << endl;



    //obj1.Input();
   // cout << "___________________________________________________" << endl;
    //obj1.PrintLaptop();
   // cout << "___________________________________________________" << endl;


    //obj2.Input();
    //cout << "___________________________________________________" << endl;
    //obj2.PrintLaptop();
    //cout << "___________________________________________________" << endl;



    cout << " Count of laptops " << Laptop::count << endl;






}