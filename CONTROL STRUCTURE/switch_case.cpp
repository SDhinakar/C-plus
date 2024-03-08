#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your choice : ";
    cin>>ch;
    switch(ch+2)//expression and character can be used in switch case except float and double
    {
        case 'a':
            cout<<"You selected a\n";
            break;
        case 'b':
            cout<<"You selected b\n";
            break; 
        case 'c':
            cout<<"You selected c\n";
            break;

        case '0':
            cout<<"You selected 0\n";
            break;
        case '1':
            cout<<"You selected 1\n";
            break;
        case '2':
            cout<<"You selected 2\n";
            break;

        case 'C':
            cout<<"You selected C\n";
            break;

        default:
            cout<<"Invalid choice\n";
            break;  


    }
}