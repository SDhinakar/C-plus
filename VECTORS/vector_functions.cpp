#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //  vector<int> v={5,4,2,3,1};
    // vector<int> :: iterator it;
    // for(it=v.begin();it !=v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }               //for unknown size vectors in forward order

    // vector<int> v={5,4,2,3,1};
    // vector<int> :: reverse_iterator rit;
    // for(rit=v.rbegin();rit !=v.rend();rit++)
    // {
    //     cout<<*rit<<" ";
    // }               //for unknown size vectors in reverse order

    // vector<char> vowels={'a','e','i','o','u'};
    // cout<<"Size of the vectors is : "<<vowels.size()<<endl;
    // cout<<"Max size of the vectors is : "<<vowels.max_size()<<endl;
    // cout<<"Capacity of the vectors is : "<<vowels.capacity()<<endl; //capacity is the number of elements that the vector can hold
    // vowels.push_back('u');
    // cout<<"Size of the vectors is : "<<vowels.size()<<endl; //size is the number of elements in the vector
    // cout<<"Max size of the vectors is : "<<vowels.max_size()<<endl; //max size is the maximum number of elements that the vector can hold
    // cout<<"Capacity of the vectors is : "<<vowels.capacity()<<endl; //capacity is doubled when the size exceeds the capacity
    // vowels.resize(9); //used to alter the size of the vector
    // for(int i=0;i<vowels.size();i++)
    // {
    //     cout<<vowels[i]<<" ";
    // }

    // vector<int> v={5,4,2,3,1};
    // v.resize(10); 
    // v.reserve(100); //used to reserve the memory for the vector
    // cout<<"Size of the vectors is : "<<v.size()<<endl;
    // cout<<"Capacity of the vectors is : "<<v.capacity()<<endl;
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }

    // vector<int> c1;
    // c1.resize(10,50); //used to alter the size of the vector and fill the elements with the given value
    // c1.reserve(100   ); // Can be used to reserve the memory for the empty vector
    // if(c1.empty())
    // {
    //     cout<<"Vector is empty\n";
    // }
    // else
    // {
    //     cout<<"Vector is not empty\n";
    
    // }
    // cout<<"Size of the vectors is : "<<c1.size()<<endl;
    // cout<<"Capacity of the vectors is : "<<c1.capacity()<<endl;
    // c1.shrink_to_fit(); //used to reduce the capacity of the vector to fit the size of the vector
    // cout<<"Capacity of the vector after shrinking is : "<<c1.capacity()<<endl;

    // vector<int> v;
    // int val;
    // do 
    // {
    //     cout<<"Enter the element(0 to exit) : ";
    //     cin>>val;
    //     v.push_back(val); //used to add the element to the end of the vector
    // }while(val);
    // cout<<"Vector elements before pop back are: ";
    // for (int i=0;i<v.size();i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }
    // cout<<"\n";
    // v.pop_back();    //used to remove the last element of the vector
    // v.pop_back();
    // cout<<"Vector elements pop back are: ";
    // for (int i=0;i<v.size();i++)
    // {
    //     cout<<v.at(i)<<" ";
    // }


    // vector<int> v={5,4,2,3,1};
    // vector<int> :: iterator it;
    // it=v.begin();
    // v.insert(it,5,50);
    // cout<<"Vector elements after insert are: ";
    // for(it=v.begin();it !=v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    // v.clear();
    // cout<<"\nVector elements after clear are:";
    // for(it=v.begin();it !=v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }


    vector<int> v={55,44,89,65,22};
    v.erase(v.begin(),v.begin()+2);
    cout<<"Vector elements after erase are: ";
    for( int i=0 ; i<v.size() ; i++ )
    {
        cout << v.at(i) << " " ;
    }
}