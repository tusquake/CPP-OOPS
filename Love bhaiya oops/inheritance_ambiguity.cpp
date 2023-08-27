#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "I am A" << endl;
    }
};

class B
{
public:
    B()
    {
        cout << "I am B" << endl;
    }
};

class C : public B, public A //*The constructors of inherited classes are called in the same order in which they are inherited.
{
public:
    C()
    {
        cout << "I am C" << endl;
    }
};

int main()
{
    C c;
}