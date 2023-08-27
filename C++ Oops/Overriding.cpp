#include <iostream>
using namespace std;

class base
{
public:
    void msg()
    {
        cout << "Base Class" << endl;
    }
};

class derived : public base
{
public:
    void msg()
    {
        cout << "Derived Class" << endl;
        //*To get msg from Base class we would declare as below:
        base::msg(); //?calling base class method
    }
};

int main()
{
    derived d; // Derived Class
    d.msg();
}