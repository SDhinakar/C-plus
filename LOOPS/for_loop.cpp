#include<iostream>
using namespace std;
int main()
{
/*  int i=0;
    for( ;i<10;++i)
    {
        cout<<i<<"\t";
    }
    cout<<"\nEnd of for loop\n";
    return 0;      */   //Output: 0 1 2 3 4 5 6 7 8 9 End of for loop
    
/* for(int i=0,j=0;i<10,j<10; )
    {
        cout<<"i= "<<i<<" j= "<<j<<endl;
        i++,j++;
    } */      //Output: i= 0 j= 0
            //i= 1 j= 1
            //i= 2 j= 2
            //i= 3 j= 3
            //i= 4 j= 4
            //i= 5 j= 5
            //i= 6 j= 6
            //i= 7 j= 7
            //i= 8 j= 8
            //i= 9 j= 9

 /* int i,j;
    for(j=1;i<=5;i++)
    {
        cout<<"i= "<<i<<" j= "<<j<<endl;
    }
    cout<<"End of for loop\n"; //it will get error since i is not initialized
    */

   for(int i=0,j=0;i<5 || j<8;i++,j++)      //it will run if any one condition is true
   {
       cout<<"i= "<<i<<" j= "<<j<<endl;
   }
}