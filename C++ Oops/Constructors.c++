#include <iostream>
#include <string>
using namespace std;

class Person
{

private:
    string name;
    int age;
    float height;

public:
    //? If we dont create this constructor compiler will create default constructor
    Person() //*Non Parameterised Constructor
    {
        name = "Null";
        age = 0;
        height = 0.0f;
    }

    Person(string name, int age, int height) //*Parameterised Constructor
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }

    Person(Person &p) //*Parameterised Constructor
    {
        this->name = p.name;
        this->age = p.age;
        this->height = p.height;
    }
    void getData()
    {
        cout << endl
             << "Name : " << name;
        cout << endl
             << "Age : " << age;
        cout << endl
             << "Height : " << height;
    }
};

//?Overloading of Constructors is taking place

int main()
{
    //*Non Parameterised Constructor
    Person tussu;
    tussu.getData();

    cout << endl
         << "__________________________________" << endl;

    //*Parameterised Constructor
    Person mussu("mussu", 21, 6.0);
    mussu.getData();

    cout << endl
         << "__________________________________" << endl;

    //*Copy Constructor
    Person bussu(mussu);
    bussu.getData();
}
