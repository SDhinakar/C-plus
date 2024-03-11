#include<iostream>
using namespace std;
int main()
{
    float marks[][3]={45.98 , 56.78 , 56.0 ,67.9 , 90.78,99.46};;
    int arr[3][4]={{1,2,3,4},{2,3,6,5},{1,5}};
    for (int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    //char name[15];
    // cout<<"sizeof array1(marks): "<<sizeof(marks)<<"bytes"<<endl;
    // cout<<"sizeof array1(arr)  : "<<sizeof(arr)<<"bytes"<<endl;
    // cout<<"sizeof array1(name) : "<<sizeof(name)<<"bytes"<<endl;


}