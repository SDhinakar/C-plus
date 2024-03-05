#include<iostream>
using namespace std;
int main()
{
    int x=26,y=9;
    cout<<"x&y  = " << (x&y)     <<endl; //and
    cout<<"x|y  = " << (x|y)     <<endl; //or
    cout<<"~x   = " << (~x)      <<endl; //bitwise not (unary)
    cout<<"x^y  = " << (x^y)     <<endl; //bitwise exor
    cout<<"x<<1 = " << (x<<1)    <<endl; //left shift (unary)
    cout<<"x>>1 = " << (x>>1)    <<endl; //rightshift (unary)

}