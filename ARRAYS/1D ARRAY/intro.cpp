#include<iostream>
using namespace std;
int main()
{
    int n=5;
    while(++n<=10)
    {
        int rollno[n];
        cout<<"Array size is: "<<n<<endl;
    }
    return 0;

    // Declaration  extern int a[];  it is a declaration not a definition it may be defined elsewhere
    // Definition   int roll_no[];   but this needs to allocate memory so it is a definition
    //it can be used when int roll_no[5]; is used or int roll_no[]={1,2,3,4,5}; 
}