#include<iostream>
using namespace std;
int main()
{
/*  for(int i=0;i<10;i++)
    {
        
        cout<<i<<endl;
        if(i==5)
        {
            break;
        }
    }   */

/*  while(1)
    {
        int n;
        cout<<"Enter a number : ";
        cin>>n;
        if(n<=0)
        {
            break;
        }
        total+=n;
        cout<<"total is : "<<total<<endl;
    }
    cout<<"Final Total is : "<<total<<endl;     */

/*  for(int i=1;i<5;i++)
    {
        for(int j=1;j<5;j++)
        {
            if(j==3)
            {
                break;
            }
            cout<<"i = "<<i<<" j = "<<j<<endl;
        }
    }
    return 0;   */

    for(auto  a : "Hello World")
    {
        if(a==' ')
        {
            break;
        }
        cout<<a;
    }
    // break is used to terminate the loop

}  