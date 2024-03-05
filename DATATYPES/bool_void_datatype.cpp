#include<iostream>
using namespace std;
int main()
{
    //bool b=false;
    //cout<<
    void *ptr;
    int x=10;
    ptr=&x;
    cout<<*(int*)ptr<<endl; //void pointer should be tpecasted

    bool p = 67;
    bool d=0;
    cout<<p<<"\n"<<d<<endl ; //it will give 1 or 0 since bool

    /*float y=10.5;
    float z=true+x+false+y;
    cout<<z<<endl;
    cout<<sizeof(bool)<<endl;

    if((x>y)==true)
        cout<<"x is greater"<<endl;
    else
        cout<<"y is greater"<<endl; */

    return 0;
}