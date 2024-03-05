#include<iostream>
using namespace std;

int main()
{
    char name[50];
    int age;
    /*cout<<"Enter the Name : ";
    cin>>name;
    cout<<"Enter the Age : ";
    cin>>age;  */
    cout<<"Enter the Name and age : ";
    cin>>name>>age;

    cout<<"The name is "<< name <<" and age is "<< age << "." <<endl;
    return 0;
}