#include <iostream>
#include <vector>


#include <unordered_map>
using namespace std;

int findShortestSubArray(vector<int> &nums)
{
    unordered_map<int, pair<int, int>> mp;
    unordered_map<int, int> mCount;
    int currMax = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i]) != mp.end())
        {
            auto x = mp[nums[i]];
            mp[nums[i]] = make_pair(x.first, i);
        }
        else
        {
            mp[nums[i]] = make_pair(i, i);
        }
    }
    for (auto i : nums)
    {
        mCount[i]++;
    }
    int mValue = 0;
    for (auto item : mCount)
    {
        mValue = max(item.second, mValue);
    }
    int minValue = nums.size();
    for (auto item : mCount)
    {
        if (item.second == mValue)
        {
            auto x = mp[item.first];
            minValue = min(minValue, x.second - x.first +1);
        }
    }
    return minValue ;
}

int main()
{
    vector<int> input({1, 2, 2, 3, 1});
    cout << findShortestSubArray(input) << endl;
    return 0;
}