#include<bits/stdc++.h>

using namespace std;

class hero{
    private:
    int health;

    public:
    char level;
    char *name ;

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
    
    void print(){
        cout<<"name : "<<name<<endl;
        cout<<"health : "<<health<<endl;
        cout<<"level : "<<level<<endl;
    }
    
};
int main(){
    hero h1;
    h1.sethealth(70);
    h1.setlevel('A');
    char name[5] = "Siri";
    h1.setname(name);

    hero h2(h1); 
    h2.print();
    cout<<"h2"<<endl;
    h1.name[0] = 'G';
    h1.print();
    cout<<"h1"<<endl;

    h1 = h2;
    h1.print();
    cout<<"h1"<<endl;
    h2.print();
    cout<<"h2"<<endl;
    return 0;
}