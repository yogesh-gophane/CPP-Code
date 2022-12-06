#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// Function Defination
int countKDifference(vector<int> &nums, int k)
{
    unordered_map<int,int> mp;
    int ans = 0;
    for (auto item : nums){
        mp[item]++;
    }
    for (auto item : nums){
       mp[item] --;
        int x  = item - k;
        int y = item + k;
       
       ans += mp[x] + mp[y];

    }
    return ans;
}
int main()
{
    // Function Call
    vector<int> input({1,2,2,1});
    cout << countKDifference(input, 1);
    return 0;
}