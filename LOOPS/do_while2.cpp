#include<iostream>
using namespace std;
int main()
{
    int num=0,sum=0;
    do 
    {
        sum+=num;
        cout<<"Enter a number: ";
        cin>>num;
    }while(num>=0);
    cout<<"The sum of the numbers is: "<<sum<<endl;
    return 0;
}