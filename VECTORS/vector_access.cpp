#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> numbers={1,2,3,4,5};
    cout<<"Element at index 0: "<<numbers[10]<<"\n"; // without  boundary checking
    cout<<"Element at index 0: "<<numbers.at(10)<<"\n"; // with boundary checking
}