#include<iostream>
using namespace std;
int main()
{
    int money,age;
    cout<<"How much money do you have? \n";
    cout<<"How old are you? ";
    cin>>money>>age;
    if((money>=1000) && (age>=18))

    {
        cout<<"Coffee in Starbucks\n";
        cout<<"It was good\n";
    }
    cout<<"let's go to the home\n";
    return 0;
}