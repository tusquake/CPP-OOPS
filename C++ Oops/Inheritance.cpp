#include <bits/stdc++.h>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    rectangle(int length, int breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void area()
    {
        cout << "Area of Rectangle : " << length * breadth;
    }
};

class cuboid : public rectangle
{
public:
    int height;

    cuboid(int length, int breadth, int height) : rectangle(length, breadth)
    {
        this->height = height;
    }
    void volume()
    {
        cout << "Volume of Cuboid " << length * breadth * height << endl;
    }
};

int main()
{
    cuboid c(10, 20, 30);

    c.volume();
}