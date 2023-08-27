// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero
{
    // properties
    // char name[100];

private:
    int health;

public:
    char level;
    char *name;

    Hero()
    {
        cout << " Simple constructor called" << endl;
        name = new char[100];
    }

    Hero(int health)
    {
        cout << "this is ->" << this << endl;
        this->health = health;
    }

    Hero(int health, char level)
    {
        cout << " Parameterized constructor called" << endl;
        this->level = level;
        this->health = health;
    }

    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout << " Copy constructor called" << endl;
        this->level = temp.level;
        this->health = temp.health;
    }

    int getHealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    int setHealth(int h)
    {
        health = h;
    }

    char setlevel(int l)
    {
        level = l;
    }

    void print()
    {
        cout << endl;
        cout << "Name : " << name << endl;
        cout << "Level : " << level << endl;
        cout << "Health : " << health << endl;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{

    Hero hero1;
    hero1.setHealth(12);
    hero1.setlevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();

    // use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();

    // Hero suresh(70, 'C');
    // suresh.print();

    // Hero ritesh(suresh);
    // ritesh.print();
    // ritesh

    // Hero Seth(10);
    // cout<<"Address of Seth : "<<&Seth<<endl;

    // object created statically
    //  cout<<"Hi"<<endl;
    //  Hero Seth;
    //  Hero();
    //  cout<<"Ok"<<endl;

    // object created dynamically
    //  cout<<"Bol"<<endl;
    //  Hero *h = new Hero();
    //  cout<<"Okk thik hai"<<endl;

    // static memory allocation
    //  Hero a;
    //  a.setHealth(70);
    //  a.level='B';
    //  cout<<"level is : "<<a.level<<endl;
    //  cout<<"health is : "<<a.getHealth()<<endl;
    //  dynamic memory allocation
    //  Hero *b = new Hero;
    //   b->setHealth(60);
    //   b->level='C';
    //   cout<<"level is : "<<b->level<<endl;
    //   cout<<"health is : "<<b->getHealth()<<endl;

    // creation of object
    //    Hero Tushar;
    //    cout<<"Tushar's health is : "<<Tushar.getHealth()<<endl;
    //    Tushar.setHealth(80);
    //    cout<<"Tushar's health is : "<<Tushar.getHealth()<<endl;
    //    Tushar.health=90;
    //    Tushar.level='A';
    //    cout<<"health is: "<<Tushar.health<<endl;
    //    cout<<"Level is: "<<Tushar.level<<endl;
    //    cout<<"size : "<<sizeof(Tushar)<<endl;

    return 0;
}