#include<iostream>
int main()
{
    int x=10,y=3;
    //Arithmetic operators
    std::cout<<"add = "<<x+y<<std::endl;
    std::cout<<"sub = "<<x-y<<std::endl;
    std::cout<<"mul = "<<x*y<<std::endl;
    std::cout<<"div = "<<x/y<<std::endl;
    std::cout<<"mod = "<<x%y<<std::endl;

    //post-increment and pre_increment operators
    std::cout<<"Increment\n";
    y=++x;
    std::cout<<x<<std::endl<<y<<std::endl;
    y=x++;
    std::cout<<x<<std::endl<<y<<std::endl;

    //post-decrement and pre_decrement operators
    std::cout<<"Decrement\n";
    float a=5.78f,b=6.8251;
    b=--a;                                  //ERROR : lvalue required in cases like this "y=--10" , "y=--(x+3)" ,expressions are avoided.
    std::cout<<a<<std::endl<<b<<std::endl;
    b=a--;                                  // always variable should be declared in this case
    std::cout<<a<<std::endl<<b<<std::endl;

}