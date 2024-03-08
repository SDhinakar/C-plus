#include<iostream>
#include<vector>
using namespace std;
int main()
{

    // int a[]={1,3,5,7,9};
    // for(int b: a)

    //vector<int> a={1,2,3,4,5};
    //for(int b: a) 
    int sum = 0;
    for (char c : "hello  i am dhina")
    {
        //cout<<c<<"\n"; //it will print the entire line
        //cout<<c<<endl;   //this will print each letter on single line
    
        if(c!=' ')
        {
            cout<<c<<endl;
            sum += int(c);
        }
    }
    cout<<sum;
    return 0;
}