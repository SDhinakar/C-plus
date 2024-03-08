#include<iostream>
using namespace std;
int main()
{
    int money, partner_age;
    cout<<"enter money:";
    cin>>money;
    if(money>=100)
    {
        cout<<"enter partner age:" ;
        cin>>partner_age;
        if (partner_age>21)
        {
            cout<<"lets have wine\n";
        }
        if (partner_age<=21)
        {
            cout<<"lets have coffee\n";
        }
    }
    if(money<100)
    {
        if(money>500)
        {
            cout<<"lets have coffee in ccd\n";
        }
        if(money<=500)
        {
            cout<<"coffee in normal shop\n";
        }
    }
    cout<<"lets go to home";
}