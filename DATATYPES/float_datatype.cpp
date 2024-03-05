#include <iostream>
#include<iomanip>
#include<limits>

using namespace std;
int main()
{
    float a=3.4243442343f;
    double b=34.11111111111111111111;
    //cout<<setprecision(20);
    long double c=3949.111111111111111111111111111111;
    //cout<<setprecision(30);

    cout<<"float size = "<<sizeof(float)<<endl;
    cout<<"double size = "<<sizeof(double)<<endl;
    cout<<"long double = "<<sizeof(long double)<<endl;
    cout<<"\n";
    cout<<"float = "<<a<<endl;
    cout<<"double = "<<b<<endl;
    cout<<"long double = "<<c<<endl;

    //  return 0; //if this command comes it ends the code or {}

    cout<<numeric_limits<float>::digits10<<endl; //used to see the output precision limit

    cout<<cout.precision(); //default precision value 

    return 0;
}