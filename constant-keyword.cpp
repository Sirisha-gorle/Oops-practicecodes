#include <bits/stdc++.h>
using namespace std;
class siri
{
public:
    int health = 11;
    mutable int pichilevel = 'A+';
    siri(int h)
    {
        health = h;
    }

    // making constant function - its a constant function and we cannot change values of data memebrs here
    int gethealth() const
    {
        pichilevel = 'B'; // using of mutable keyword can help us to change values of data members in constant functions
        health = 21;      // not possible constant function
        return health;
    }
};
void display(const int num[], int limit)
{
    int i = 4;
    num[4] = 8; // error we cant change the values of num we can just use this values for our operations but cant make change sto array num
}

int main()
{
    /*
    const int a;//error should initialised here only
    a = 1;//error should not defined separetly
    const int a = 1;//ok
    */

    // constant keyword for variables
    int noi = 1;
    noi = 2; // possible

    const int coi = 2;
    coi = 5; // error because coi is constant interger datatype as we initialised and declared

    // constant keyword for pointers
    // 1.pointer to constant
    const double var = 2.56;

    double *ptr = &var; // error as address of constant variable we are storing need to mention for pointer to store

    const double *cptr = &var; // here it means that ptr is not constant it is pointing to constant double datatype

    *cptr = 3.14; // error as the address of datatype the pointer storing ,the datatype is constant (*cptr - value of datattype stored in address cptr)

    double c = 5.25;
    cptr = &c; // this is possible as pointer is not constant

    // 2.constant pointers
    int a = 1;
    int *const poit = &a; // it means that pointer is constant but it cannot store constant datatype variables address

    *poit = 2; // possible
    poit = &c; // not possible

    // 3.constant pointers to constant
    const double d = 52.1;
    const double *const po = &d;
    *po = 54; // not possible
    po = &c;  // not possible

    // constant object
    siri h2(99);
    const siri h1(80); // the data member values have to be initialised here default constructor is not possible for const

    h2.health = 90;
    h1.health = 89; // not possible to  change values of data members once initialised

    // const in functions

    int number[5] = {1, 2, 3, 5, 6};
    display(number, 5);
    return 0;
}