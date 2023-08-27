#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Default constructor of base class" << endl;
    }
    base(int b)
    {
        cout << "Parameterised constructor of base class" << b << endl;
    }
};

class derived : public base
{
    // Empty
};

int main()
{
    //*We can only call base class default constructor
    derived d;
    // derived d(5);

    return 0;
}