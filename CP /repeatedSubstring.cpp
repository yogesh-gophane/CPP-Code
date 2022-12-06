#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// Function Defination
bool repeatedSubstringPattern(string s) {
    unordered_map<char,int> mp;
    for (auto i : s){
        mp[i]++;
    }
    int ref = mp[s[0]];
    for (auto item : mp){
        if (item.second != ref){
            return false;
        }
        
    }
    return true;
           
    }
int main()
{
// Function Call
    cout<<repeatedSubstringPattern("a");
    return 0;
}