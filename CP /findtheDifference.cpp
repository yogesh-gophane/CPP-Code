#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Function Defination
char findTheDifference(string s, string t)
{
    unordered_map<int, int> mps;
    

    for (auto item : s)
    {
        mps[item]++;
    }
    for (auto item : t){
        mps[item]--;
    }
    for (auto item : mps){
        if (item.second== -1){
            return char(item.first);

        }
    }
   
    return 'a';
}
int main()
{
    // Function Call
    cout << findTheDifference("abcde", "abcdet");
    return 0;
}