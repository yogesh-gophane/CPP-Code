#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
using namespace std;
// Function Defination
// ranking logic
vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{   
    unordered_map<int,int> mp;
    vector<int> ans;

    vector<int> cp (nums.begin(),nums.end());
    sort(cp.begin(),cp.end());

    for (int i =0; i<cp.size(); i++){
        if(mp.find(cp[i])==mp.end()){
            mp[cp[i]] = i;
        }
    }
    for (auto item : nums){
        ans.push_back(mp[item]);
    }
    return ans;
}
int main()
{
    // Function Call
    vector<int> input({7,7,7,7});
    vector<int> result = smallerNumbersThanCurrent(input);
    for (auto item : result)
    {
        cout << item << endl;
    }
    return 0;
}