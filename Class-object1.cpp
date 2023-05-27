#include<bits/stdc++.h>
using namespace std;
#pragma pack(1)

// class hero{
//     int health;
//     int level;
// };
// class hero{
//     public:
//     int health;
//     private:
//     int level;
//     void print(){
//         cout<<level<<endl;
//     }
// };
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
    hero h1;
    cout<<h1.gethealth()<<endl;
    h1.sethealth(10);
    cout<<h1.gethealth()<<endl;
    h1.level = 2;
    cout<<"size:"<<sizeof(h1);//gives the size of properties mentioned for the class
    cout<<h1.level<<endl;
    return 0;
}