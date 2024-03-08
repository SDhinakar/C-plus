#include<iostream>
using namespace std;
int main()
{
/*  int n;
    cout<<"enter n: "; 
    cin>>n;
    while(n<6 || n>6)
    {
        cout<<"n is 6"<<endl;
        break;
    }
    cout<<"n is not 6"<<endl;   */

    int n;
    bool flag=false;
    while(!flag)
    {
    
        cout<<"enter a number between 2 and 7: ";
        cin>>n;
        if(n<=2 || n>=7)
        {
            cout<<"NOT a valid number between 2 and 7 \n";
        }
        else
        {
            cout<<"valid number";
            flag=true;
        }
    }

    int i=7;
    while(i>0)
    {
        cout<<i<<endl;
        i+=1000000;  //it will print until the size of int is reached because it is 2147483647 to -2147483648
    }
}