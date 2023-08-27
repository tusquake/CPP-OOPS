#include<iostream>
using namespace std;

class Human{

    public: 
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        this->weight=w;
    }

};

class Male: public Human{

    public:
    string color;

    void sleep(){
        cout<<"Male Sleeping"<<endl;

    }

};

int main(){
    Male m1;
    cout<<m1.height<<endl;
    // Male tushar;
    // cout<<tushar.age<<endl;
    // cout<<tushar.weight<<endl;
    // cout<<tushar.height<<endl;
    // cout<<tushar.color<<endl;

    // tushar.setWeight(80);
    // cout<<tushar.weight<<endl;

    // tushar.sleep();

    // return 0;

}