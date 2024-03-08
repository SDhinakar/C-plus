#include<iostream>
using namespace std;
int main()
{
    char ch;
    while(1)
    {
        cout<<"hi\n";
        cout<<"Do you want to continue? (y/n): ";
        cin>>ch;
        if(ch=='n' || ch=='N')
        {
            break;
        }
    }
    return 0;
}