#include <iostream>
using namespace std;

class Person
{
private:
    int weight;

public:
    Person(int weight = 0)
    {
        this->weight = weight;
    }
    void PrintValue()
    {
        cout << "Weight is : " << weight << endl;
    }
    void operator++()
    {
        ++weight;
    }
    //*For Post increment we have to provide int as an Arguement
    void operator++(int)
    {
        weight++;
    }
};

int main()
{
    Person John(78);
    ++John;
    John.PrintValue();

    John++;
    John.PrintValue();

    return 0;
}