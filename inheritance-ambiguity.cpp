#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }
};

class D{
    public:
    void func1(){
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
    C obj3;
    //inheritance ambiguity
    obj3.func1();//which func1 has to be taken cannot decided by this

    obj3.A::func1();
    obj3.D::func1();

    cout<<endl;

   
    return 0;
}