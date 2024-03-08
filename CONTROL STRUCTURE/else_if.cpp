#include<iostream>
using namespace std;
int main()
{
    int money;
    cout<< "How much money do you have? \n";
    cin>>money;
    if(money>1000)
    {
        cout<<"Money I have is : "<<money<<endl;
        cout<<"Let's have the Coffee in Starbucks\n";
    }
    else if(money>500)
    {
        cout<<"Money I have is : "<<money<<endl;
        cout<<"Let's have the Coffee in CCD\n";
    }  
    else if(money>100)
    {
        cout<<"Money I have is : "<<money<<endl;
        cout<<"Let's have the Coffee in Nescafe\n";
    }
    else; // this works in only else if not in if else
    {
        cout<<"Money I have is : "<<money<<endl;
        cout<<"Let's have the Coffee in Nearby Cafe\n";
    }
    cout<<"let's go to the home\n";
    return 0;

}