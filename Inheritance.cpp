#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
    int age;

    public:
    int height;
    int weight;

    public:
    int getAge(){
        return this->age;
    }
    void setweight(int weight){
        this->weight = weight;
    }

};
class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout<<"He is sleeping"<<endl;
    }
    int getheight(){
        return this->height;
    }
};

int main(){
    Male m1;
    cout<<m1.height<<endl;
    m1.getheight();
    cout<<m1.weight<<endl;
    cout<<m1.age<<endl;//here age is not accessible as it is in private in parent class even if it is accessed in public mode
    m1.getAge();
    m1.sleep();

    m1.setweight(52);
    cout<<m1.weight<<endl;
    Human h1;
    cout<<h1.weight<<endl;

    return 0;
}