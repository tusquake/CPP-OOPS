#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Default constructor of base class" << endl;
    }
    base(int bs)
    {
        cout << "Parameterised constructor of base class : " << bs << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Default constructor of derived class" << endl;
    }
    derived(int der)
    {
        cout << "Parameterised constructor of derived class : " << der << endl;
    }
};

int main()
{

    derived d; // Default constructor of base class
               // Default constructor of derived class
    cout << endl
         << "______________________" << endl
         << endl;
    derived d1(5); // Default constructor of base class
                   // Parameterised constructor of derived class : 5

    return 0;
}