#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,1,4,4,5,5,9};
    int ans=0;
    for(int i=0;i<7;i++)
    {
        ans=ans^arr[i];
    }
    cout<<ans<<endl;
}