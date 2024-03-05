#include<iostream>
using namespace std;
int main()
{
    char a ='a';     //in this syntax rightmost element is only assigned
    cout<<((int)a)<<endl;    //(int) likewise typecast is done

    char b=65;
    cout<<b<<endl;

    char c=128;
    cout<<((int)c)<<endl; //-128 is the output due to the limit of char signed(-128 to 127) and unsigned(0 to 255)
    printf("\n"); //printf can also be used
    
    cout<<SCHAR_MIN<<endl;
    cout<<SCHAR_MAX<<endl;

    cout<<sizeof(char)<<endl;
    return 0;
}