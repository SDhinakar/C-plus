#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int arr1[5],arr2[5],arr3[5];
    cout<<"Enter 1st array elements : ";
    for(i=0;i<5;i++)
        cin>>arr1[i];

    cout<<"Enter 2st array elements : ";
    for(i=0;i<5;i++)
        cin>>arr2[i];

    for(i=0;i<5;i++)
        arr3[i]=arr1[i]+arr2[i];

    cout<<"3rd array elements are : ";
    for(i=0;i<5;i++)
        cout<<arr3[i]<<" ";
    
}