#include <iostream>
using namespace std;

// *Static Member Functions can only perform operations on static data members

class Alpha
{
private:
    int a;
    int b;

public:
    Alpha()
    {
        a = 5;
        b = 5;
    }
    static int stat;

    static int getStat()
    {
        stat++;
        return stat;
    }
};

int Alpha ::stat = 0;

int main()
{
    cout << "Value using class name : " << Alpha::getStat() << endl;
    Alpha a1;
    cout << "Value using class name : " << a1.getStat() << endl;
    Alpha a2;
    cout << "Value using class name : " << a2.getStat() << endl;
    cout << "Value using class name : " << Alpha::getStat() << endl;
}