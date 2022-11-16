#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int threeSumClosest(vector<int> &nums, int target)
{
    int n = nums.size();
  

    sort(nums.begin(), nums.end());
    int closet = nums[0] + nums[1] + nums[2];

    for (int first = 0; first < n - 2; first++)
    {
        if (first > 0 && nums[first] == nums[first - 1])
            continue;
        int second = first + 1;
        int third = nums.size() - 1;

        while (second < third)
        {
            int cursum = nums[first] + nums[second] + nums[third];
            if (cursum == target)
                return target;
            if (abs(target-cursum) < abs(target - closet))
            {
                closet = cursum;
            }
            if (cursum > target)
            {
                third--;
            }
            else
            {
                second++;
            }
        }
    }
    return closet;
}
int main()
{

    vector<int> nums({-1, 2, 1, -4});
    cout << threeSumClosest(nums, 1);
    return 0;
}