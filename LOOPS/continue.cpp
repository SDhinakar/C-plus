#include<iostream>
using namespace std;
int main()
{
/* for(int i=0;i<10;i++)
   {
        if(i==5)
        {
            cout<<"\n";
            continue;   //continue is used to skip the current iteration and continue with the next iteration
         }
        cout<<i<<endl;
    } */

    int num,i=1,total=0;
    while(i<=10)
    {
        cout<<"Enter a number: ";
        cin>>num;
        //i++;
        if(num<0)
        {
            cout<<"Negative number is not allowed"<<endl;
            continue;
        }
        i++;
        total+=num;
    }
    cout<<"Total is: "<<total<<endl;
}