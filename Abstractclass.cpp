#include<bits/stdc++.h>
using namespace std;
class Animal{
    public :
    int type;
    virtual void myfunc() = 0;
};

class Dog: public Animal{
    public:
    int color;
    //when pure virtual function is not redefined like in this case we can see the below error
    // void myfunc(){
    //     cout<<"Dog is Barking"<<endl;
    // }
};
int main(){
    Dog d;
    d.myfunc();
    return 0;
}