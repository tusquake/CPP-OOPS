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
    derived() : base()
    {
        cout << "Default constructor of derived class" << endl;
    }
    derived(int der, int bs) : base(bs)
    {
        cout << "Parameterised constructor of derived class : " << der << endl;
    }
};

int main()
{
    derived d1;
    // Default constructor of base class
    // Default constructor of derived class
    derived d2(5, 8);
    // Parameterised constructor of base class : 8
    // Parameterised constructor of derived class : 5
    return 0;
}