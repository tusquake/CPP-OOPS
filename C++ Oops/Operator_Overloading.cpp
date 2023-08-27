#include <iostream>
using namespace std;

class A
{
private:
    int weight;

public:
    A(int weight = 0)
    {
        this->weight = weight;
    }
    A operator+(A w)
    {
        A temp;
        temp.weight = weight + w.weight;
        return temp;
    }
    void PrintValue()
    {
        cout << "Weight is : " << weight;
    }
};

int main()
{
    int a = 63, b = 74, c = 0;
    c = a + b;

    A person1(63);
    A person2(74);
    A total;
    total = person1 + person2;

    total.PrintValue();
}