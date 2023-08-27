#include <iostream>
using namespace std;

class Human
{
public:
    int height;

    // protected:
    int weight;

    // private:
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int setweight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{
    Male m1;
    cout << m1.height << endl;

    // Male object;
    // cout << object.age << endl;
    // cout << object.weight << endl;
    // cout << object.height << endl;

    // cout << object.color << endl;
    // object.setweight(84);
    // object.sleep();
    // cout << object.weight << endl;
    // return 0;
}