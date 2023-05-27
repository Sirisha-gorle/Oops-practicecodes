#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }//(method/function overriding)
};

int main(){
    Dog d;
    d.speak();

    Animal a;
    a.speak();
    return 0;
}