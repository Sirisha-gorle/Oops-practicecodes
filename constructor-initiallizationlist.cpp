#include<bits/stdc++.h>
using namespace std;

class siri{

    int a;
    int b;
public:
    // siri(int i, int j) : a(i) , b(j){
    //     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    // }
    // siri (int i, int j) : a(i+j) , b(j){
    //     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    // }
    // siri (int i, int j) : a(i) , b(a+j){
    //     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    // }
    // siri (int i, int j) : a(i) , b(2*j){
    //     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    // }
    // siri (int i, int j) : b(i) , a(2*j){
    //     cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    // }
    
    siri (int i, int j) : b(j) , a(i+b){//throws a garbage value because it has to done like what is return first while declaring ie a is declared first in class that has to initialised first
        cout<<"a: "<<a<<" "<<"b: "<<b<<endl;
    }
};
int main(){
    siri h1(5,9);
    return 0;
}