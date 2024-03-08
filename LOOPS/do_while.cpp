#include<iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        int l,b,area=0;
        cout<<"enter length and breadth: ";
        cin>>l>>b;
        area=l*b;
        cout<<"Area of rectangle is: "<<area<<endl;
        cout<<"Do you want to continue? (y/n): ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    cout<<"out of loop";
}