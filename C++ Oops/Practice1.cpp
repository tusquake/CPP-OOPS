//! Write a program, take Phone Details as input and Store them in Object &use Constructors.

//! Phone Details :-
//! 1.Name
//! 2.RAM
//! 3.Processor
//! 4.Battery

#include <iostream>
#include <string>
using namespace std;

class Phone
{
private:
    string name;
    int ram;
    string processor;
    int battery;

public:
    Phone(string name = "Lava", int ram = 2, string processor = "MediaTek", int battery = 65)
    {
        this->name = name;
        this->ram = ram;
        this->processor = processor;
        this->battery = battery;
    }

    Phone(Phone &p)
    {
        this->name = p.name;
        this->ram = p.ram;
        this->processor = p.processor;
        this->battery = p.battery;
    }

    void getPhoneData();
};

void Phone ::getPhoneData()
{
    cout << endl
         << "Name of Phone : " << name;
    cout << endl
         << "Ram of Phone : " << ram << " GB";
    cout << endl
         << "Processor of Phone : " << processor;
    cout << endl
         << "Battery of Phone : " << battery << " %";
}

int main()
{

    Phone mi("Xiaomi", 4, "SnapDragon", 89);
    mi.getPhoneData();

    cout << endl
         << "_____________________________" << endl;

    Phone lava;
    lava.getPhoneData();

    cout << endl
         << "_____________________________" << endl;

    Phone xiaomi(mi);
    xiaomi.getPhoneData();
}
