#include<bits/stdc++.h>

using namespace std;

class hero{
     private:
    int health;
    public:
    char level;

    int gethealth(){
        return health;
    }
    int getlevel(){
        return level;
    }
    void sethealth(int h){
        //we can we have conditions like we this satisfies only then equal the health to h;
        health = h;
    }
    void setlevel(int l){
        level = l;
    }
    
};

int main(){
    //Static Allocation
    hero h1;
    h1.setlevel('B');
    h1.sethealth(70);
    cout<<h1.level<<endl;
    cout<<h1.gethealth()<<endl;

    //Dynamic Allocation
    hero *h2 = new hero;
    h2 -> setlevel('A');
    h2 -> sethealth(100);
    cout<<(*h2).level<<endl;
    cout<<(*h2).gethealth()<<endl;//*h2 giving the address in heap where memory is allocated dereferencing



    cout<<"size of h1:"<<sizeof(h1)<<endl;//gives the size of properties mentioned for the class
    cout<<"size of h2:"<<sizeof(h2)<<endl;
    return 0;
}