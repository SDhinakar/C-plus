#include<iostream>
using namespace std;
int main()
{
    int x=5,y=10;
    if((x>5) && (y<15)) //logical AND
    {
        cout<<"x+y = "<<(x+y)<<endl;
    }
    else if((x<=5) || (y>15)) //logical OR
    {
        cout<<"x-y = "<<(x-y)<<endl;
    }
    else
    {
        cout<<" !x = "<<!x<<endl; //logical NOT
        // !0 = 1   
        // !1 (any value except zero) = 0
    }

}