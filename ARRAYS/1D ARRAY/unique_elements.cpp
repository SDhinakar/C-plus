#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int arr[7] = {1, 1, 4, 3, 5, 6, 9};
    unordered_set<int> uniqueNumbers;
    
    // Loop through the array and insert elements into the set
    for(int i = 0; i < 7; i++)
    {
        // If the element is not found in the set, insert it
        if(uniqueNumbers.find(arr[i]) == uniqueNumbers.end())
        {
            uniqueNumbers.insert(arr[i]);
        }
        // If the element is already present, erase it (duplicates)
        else
        {
            uniqueNumbers.erase(arr[i]);
        }
    }
    
    // Print the unique numbers
    cout << "Multiple unique numbers in the array are: ";
    for (int num : uniqueNumbers)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
