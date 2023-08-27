#include <iostream>
#include <string>
using namespace std;

//*class(Only a Blueprint just like house layout or map)
class house
{

    //*member varibales
    int length = 0;
    int breadth = 0;

public:
    //*member functions
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }

    void area()
    {
        cout << "The area of the house is : " << length * breadth << endl;
    }
};

int main()
{
    //*Object Creation(memory allocated as a house of tussu is created which is a real world entity)
    house tussu;

    tussu.setData(300, 500);
    tussu.area();

    return 0;
}