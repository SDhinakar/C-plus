#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter n: ";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        if(i%2 !=0)
        {
            sum+=i;
        }
    }
    cout<<"Sum of odd integers between "<<n<<" is: "<<sum<<endl;
}