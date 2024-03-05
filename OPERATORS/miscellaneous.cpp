#include<iostream>
using namespace std;
int main()
{
    float x=9.6789f;
    cout<<"x = "<<x<<endl;
    cout<<"Typecasted value, x = "<<(int)x<<endl; //typecasting is done

    //conditional operator
    int a=4,b=6;
    cout<<"Maximum is = "<<( (a>b) ? (a+2) : (b-5) )<<endl; //ternary operation

    cout<<"Size = "<<sizeof(a); //sizeof() - same syntax as in C
}