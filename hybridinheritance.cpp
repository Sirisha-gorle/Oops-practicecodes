#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }
};
class B: public A{
   public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    } 
};
class D{
    public:
    void func4(){
        cout<<"Inside Function 4"<<endl;
    } 
};

class C: public A,public D{
   public:
    void func3(){
        cout<<"Inside Function 3"<<endl;
    } 
};

int main(){
    A obj1;
    B obj2;
    C obj3;

    obj1.func1();

    cout<<endl;

    obj2.func1();
    obj2.func2();

    cout<<endl;

    obj3.func1();
    obj3.func3();
    obj3.func4();

    cout<<endl;
    
    return 0;
}