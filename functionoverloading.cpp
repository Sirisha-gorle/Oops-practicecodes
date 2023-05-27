#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    //function1
    void myfunc(){
        cout<<"Hello u used myfunc"<<endl;
    }

    //the below type is also not possible, change of returntype will not help for function overloading 
    int myfunc(){
        cout<<"Hello u used myfunc with diff datatype"<<endl;
        return 1;
    }

    //this will work ,here argument list is different from function1(different no.of argument list,different datatype argument (even if no.of arguments are same)
    //function2
    void myfunc(string name){
        cout<<name<<"Hello u used myfunc"<<endl;
    }
    void myfunc(char name){
        cout<<name<<"Hello u used myfunc"<<endl;
    }

    void myfunc(string name,int n){
        cout<<name<<n<<"Hello u used myfunc"<<endl;
    }
    int myfunc(int name){
        cout<<name<<"Hello u used myfunc"<<endl;
        return name;
    }


    //Not possible as argument list is not different from function2
    int myfunc(string name){
        return name;
    }

    //default arguments
    int func(int a, int b, int c = 0, int d = 5){
        return a+b+c+d;
    }
    
};

int main(){
    A obj1;
    obj1.myfunc();

    A obj2;
    obj2.func(20,30);
    obj2.func(20,30,40);
    obj2.func(20,30,40,50);
    //All the above are possible as c and d are default arguments

    return 0;
}