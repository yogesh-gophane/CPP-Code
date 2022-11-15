#include <iostream>
#include <vector>

using namespace std;
// Constraints
// 0 <= nums.length <= 100
// 0 <= nums[i] <= 50
// 0 <= val <= 100

// Time Complexity : O(n) Space Complexity : O(1)

int removeElement(vector<int> &nums, int &val)
{
    int maxNum = 51; // as num value could be upto 50 only
    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums[i] = maxNum;
            count++;
        }
    }

    sort(nums.begin(), nums.end());

    return nums.size() - count;
}
int main()
{
    vector<int> nums{3, 2, 2, 3};
    int val = 3;
    int result = removeElement(nums, val);

    cout << result;
    cout<<'Hello';
    return 0;
}