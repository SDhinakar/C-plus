#include<iostream>
using namespace std;
int main()
{
    unsigned short us_int=563;
    signed short ss_int=-6;
    int a=8428433;
    long int l_int=1351351;
    long long int ll_int=9887952142;
    int8_t int8_variable=2;

    cout<<"size of short int = "<<sizeof(short int)<<endl;
    cout<<"size of int = "<<sizeof(int)<<endl;
    cout<<"size of long int = "<<sizeof(long int)<<endl;
    cout<<"size of long long int value = "<<sizeof(long long int)<<endl;
    cout<<"\n";
    cout<<"unsigned short int = "<<us_int<<endl;
    cout<<"signed short int = "<<ss_int<<endl;
    cout<<"long int = "<<l_int<<endl;
    cout<<"long long  int value = "<<ll_int<<endl;
    cout<<"a = "<<a<<endl;

}