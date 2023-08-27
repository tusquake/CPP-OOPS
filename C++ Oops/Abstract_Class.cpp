#include <iostream>
using namespace std;

class person //?Abstract Class
{
public:
    virtual void give() = 0;
    // *When we make a function as pure virtual function
    // *then we cannot declare its body and hence it starts
    // *acting as abstract class
};

class boy : public person
{
public:
    void give()
    {
        cout << "Brown Bun" << endl;
    }
};

class girl : public person
{
public:
    void give()
    {
        cout << "Pink Bun" << endl;
    }
};

int main()
{
    boy b1;
    girl g1;

    person *ptr;

    ptr = &b1;
    ptr->give();

    ptr = &g1;
    ptr->give();
}