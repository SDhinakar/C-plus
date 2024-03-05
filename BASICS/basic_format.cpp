#include<iostream>
using namespace std;
#define PI 3.1415

int r=2;
void area();

class MyClass
{
    public: 
        long long a;
        void display()
        {
            std::cout<<"inside the class"<<endl; //std can be removed if we use the "using namespace std;" command line
        }
};

int main()
{
    MyClass m;
    m.a=54811555513829032;
    m.display();
    area();
    std::cout<<"hello from inside the function"<<std::endl;
    std::cout<<m.a<<std::endl;
    return 0;
}

void area()
{
    float area;
    area=PI*r*r;
    std::cout<<area<<std::endl;
}