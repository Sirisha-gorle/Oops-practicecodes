#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int length;
    private:
    char ch;
    friend int printLength(A);
    // //implementation done in class throwing error
    // int printLength(A b){
    // b.length = 5;
    // b.ch = 's';
    // return 5+(b.ch);
    // }
};

int printLength(A b){//function not in the class scope
    b.length = 5;
    b.ch = 's';//can access private memebers outside the class with objects
    return 5+(b.ch);
}

int main(){
    A b;
    cout<<printLength(b)<<endl;//can be accesed like normal function
    return 0;
}