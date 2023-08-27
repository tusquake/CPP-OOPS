#include <iostream>
using namespace std;

class base
{
public:
    // *If we make this function as virtual then even if it it present
    // *the ptr would start pointing to derived classes
    virtual void show()
    {
        cout << "Base" << endl;
    }
};

class derived1 : public base
{
public:
    void show()
    {
        cout << "Derived1" << endl;
    }
};

class derived2 : public base
{
public:
    void show()
    {
        cout << "Derived2" << endl;
    }
};

int main()
{
    base *ptr;
    ptr = new derived1();

    // *Even if we are calling show function of derived class derived1
    // *the ptr is pointing to base class
    ptr->show();

    ptr = new derived2();
    ptr->show();
}