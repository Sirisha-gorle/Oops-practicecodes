#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    int weight;

    void bark(){
        cout<<this->name<<" is Barking"<<endl;
    }
};
class Human{
    public:
    string color;
    
    void speak(){
        cout<<this->color<<" is Speaking"<<endl;
    }
};

class multiple: public Animal, public Human{
    public:
    void talk(){
        cout<<this->color<<" is the color";
    }
};

class Dog: public Animal{

};



int main(){
    Dog d;
    d.name = "Dog";
    d.bark();

    multiple m;
    m.color = "black";
    m.name = "Cat";
    m.bark();
    m.speak();
    m.talk();
    
    return 0;
}