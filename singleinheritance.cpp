#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    string name;
    int age;
    int weight;

    void speak(){
        cout<<this->name<<" is Speaking"<<endl;
    }
};

class Dog: public Animal{

};

class Germanshepherd: public Dog{

};

int main(){
    Dog d;
    d.name = "Dog";
    d.speak();

    Germanshepherd g;
    g.name = "GermanShepherd"; 
    g.speak();
    return 0;
}

