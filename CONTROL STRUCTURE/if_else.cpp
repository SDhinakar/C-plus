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
    else
    {
        cout<<"Money I have is : "<<money<<endl;
        cout<<"Let's have the Coffee in CCD\n";
    }
    cout<<"let's go to the home\n";
    return 0;

}