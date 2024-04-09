#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers(5);
    cout<<"Enter the elements of the vector: ";
    for(int i=0;i<numbers.size();i++)
    {
        cin>>numbers[i];
    }for(int i=0;i<numbers.size();i++)
    {
        cout<<numbers.at(i)<<" ";
    }
    // cout<<"Element at index 0: "<<numbers[10]<<"\n"; // without  boundary checking
    // cout<<"Element at index 0: "<<numbers.at(10)<<"\n"; // with boundary checking
    cout<<"Element at index 0: "<<numbers.front()<<"\n"; // first element
    cout<<"Element at index 4: "<<numbers.back()<<"\n"; // last element
    numbers.at(4)=10;
    cout<<"Element at index 4: "<<numbers.at(4)<<"\n";


}