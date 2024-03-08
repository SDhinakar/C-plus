#include<iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        cout<<"\n**********************"<<endl;
        cout<<"1. Addition"<<endl;
        cout<<"2. Subtraction"<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        if(choice=='1')
        {
            int a,b;
            cout<<"Enter two numbers: ";
            cin>>a>>b;
            cout<<"The sum of the numbers is: "<<a+b<<endl;
        }
        else if(choice=='2')
        {
            int a,b;
            cout<<"Enter two numbers: ";
            cin>>a>>b;
            cout<<"The difference of the numbers is: "<<a-b<<endl;
        }
        else if(choice=='3')
        {
            int a,b;
            cout<<"Enter two numbers: ";
            cin>>a>>b;
            cout<<"The product of the numbers is: "<<a*b<<endl;
        }
        else if(choice=='4')
        {
            int a,b;
            cout<<"Enter two numbers: ";
            cin>>a>>b;
            cout<<"The division of the numbers is: "<<a/b<<endl;
        }
        else if(choice=='q' || choice=='Q')
        {
            cout<<"Exiting..."<<endl;
        }
        else
        {
            cout<<"Invalid choice!"<<endl;
        }

    }while(choice!='q' && choice!='Q');
}