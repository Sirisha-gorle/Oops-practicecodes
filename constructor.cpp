#include<bits/stdc++.h>

using namespace std;

class hero{
    private:
    int health;

    public:
    char level;

    //Default Constructor
    hero(){
        cout<<"Constructor called"<<endl ;
    }

    //Parameterised Constructor
    hero(int health){
        this -> health = health;
    }

    hero(int health,char level){
        this -> level = level;
        cout<<"this ->"<<this<<endl;
        this -> health = health;
    }

    //Copy constructor
    hero(hero& temp){
        this -> health = temp.health;
        this -> level = temp.level;
    }

    //Getter
    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }

    //Setter
    void sethealth(int h){
    
        health = h;
    }
    void setlevel(int l){
        level = l;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }
    
};

int main(){
    hero h1(70,'A');
    h1.print();
    hero h3(h1);//Copy constructor gets created automatically once class is created or we can create one the default one erases
    //hero h3 = h1;
    h3.print();



    //cout<<"Address of h1 : "<<&h1<<endl;//the address stored by this pointer and this address will be same
    hero *h2 = new hero;
    return 0;
}