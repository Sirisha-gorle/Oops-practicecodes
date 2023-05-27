#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int val;

    void operator+ (A &obj){
        // cout<<abs(this->val - obj.val)<<endl;//performing substraction with + operator
        cout<<"Oops is also good topic!"<<endl;//using + operator to print the sentence

    }

    //using () operator to perform required operations
    void operator() (){
        cout<<this->val<<endl;
        cout<<"() is performed"<<endl;
    }

};

int main(){
    A obj1;
    A obj2;

    obj1.val = 2;
    obj2.val = 3;
    
    obj1 + obj2;
    obj1();
    return 0;
}