#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::cin; //likewise the operations can be specified.

// using namespace std;

#define DHINA 061104

int main()
{
    const std::string str="dhinakar shanmugam";
    cout<<str<<endl;

    cout <<    DHINA   << endl;    // the defined variable using #define can't be altered.
    cout <<     "cdjsk"   << endl;     // the space between <<  << does not matters.

    cout<<__FILE__<<endl;       //location of the file can be accessed in both C and C++ by the following same commands.
}