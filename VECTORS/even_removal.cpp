/*
1.erase all even numbers from vector
2.swap values of vec1 & vec2
3.sort vec1 in ascending order
*/

#include<iostream>
#include<vector>
using namespace std;

// int main()
// {
//     vector<int> v={5,4,2,3,1,8,9,71,2};
//     vector<int> :: iterator it;
//     it=v.begin();
//     while(it != v.end())
//     {
//         if(*it%2==0)
//         {
//             v.erase(it); //erase function is used to remove the element from the vector
//         }
//         else
//         {
//             it++;
//         }
//     }
//     for(auto n : v) //auto is used to automatically detect the data type of the variable
//     {
//         cout<<n<<" ";
//     }
//     return 0;
// }



// int main()
// {
//     vector<int> vec1={5,4,2,3,1,8,9,71,2};
//     vector<int> vec2={1,5,6,8};
//     vec1.swap(vec2);
//     cout<<"After swapping the values of vec1\n";
//     for(auto n:vec1)
//     {
//         cout<<n<<" ";
//     }
//     cout<<"\nAfter swapping the values of vec2\n";
//     for(auto n:vec2)
//     {
//         cout<<n<<" ";
//     }
// }



#include<algorithm>
int main()
{
    vector<int> vec={5,4,2,3,1,8,9,71,2};
    sort(vec.begin(),vec.end());
    for(auto n:vec)
    {
        cout<<n<<" ";
    }
}