#include<iostream>
int main()
{
    int a=(2,3,4); //last expression(value) is assigned to a
    std::cout<<a<<"\n";

    int x=3,y;
    std::cout<<(y=x++ + ++x)<<"\n"; //mostly compiler dependent

    int d=3;
    int z=(d--)+(d=10);//d-- is evaluated first and then d=10
    std::cout<<z;

    //but there is no precedence between postfix and prefix operators in C++ 
    //So these are completely compiler dependent
} 