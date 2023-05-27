#include<bits/stdc++.h>

using namespace std;

class hero{
    private:
    int health;

    public:
    char level;
    char *name ;
    static int timeToComplete;

    //Default Constructor
    hero(){
        cout<<"Constructor called"<<endl ;
        name = new char[100];
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
        char *ch = new char[strlen(temp.name)];//Dynamic Allocation so *
        strcpy(ch ,temp.name);
        this -> name = ch;
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
    void setname(char name[]){
        strcpy(this->name,name);
    }
    
    static int random(){
        return timeToComplete;
        // return this->health;//error because health is not a static memeber
    }
    void print(){
        cout<<"name : "<<name<<endl;
        cout<<"health : "<<health<<endl;
        cout<<"level : "<<level<<endl;
    }
    
};
int hero::timeToComplete = 10;

int main(){
    //Static Allocation
    cout<<hero::timeToComplete<<endl;
    cout<<hero::random()<<endl;

    hero h1;
    cout<<h1.timeToComplete<<endl;

    h1.timeToComplete = 15;
    cout<<h1.timeToComplete<<endl;

    
    return 0;
}