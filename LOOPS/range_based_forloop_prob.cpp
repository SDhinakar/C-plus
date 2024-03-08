#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={3,6,15,17,18,21,55,100,200,300};
    int count=0;
    for(auto b:a)
    {
        if(b%3==0 || b%5==0 )
        {
            cout<<b<<endl;
            count++;
        }
    }
    cout<<"Count of numbers divisible by 3 or 5 is: "<<count;
}