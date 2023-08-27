#include <iostream>
using namespace std;

class base
{
public:
    virtual ~base()
    {
        cout << "Base class Destroyed" << endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "Derived class Destroyed" << endl;
    }
};

int main()
{
    base *b1 = new derived;
    delete b1;
    // ?case1:
    // ?Base class Destroyed
    // ?case2:
    //?Derived class Destroyed
    //?Base class Destroyed
}

//*1.If we dont declare base class destructor as virtual then only
//* base class object is destroyed.
//*2.If we declare base class destructor as virtual then both the base and derived class
//*objects are destroyed
//*3.This concept is known as virtual destructor.