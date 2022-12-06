#include <iostream>
#include <vector>
using namespace std;
int maxSubArray(vector<int> &nums)
{

    int currMax = 0, maxTillNow = INT32_MIN;

    for (auto item : nums)
    {
        currMax = max(item,currMax + item);
        maxTillNow = max(maxTillNow,currMax);
       
    }
  
    return maxTillNow;
}
int main()
{
    vector<int> input({ 1,2,-1,-2,2,1,-2,1,4,-5,4});
    cout << maxSubArray(input) << endl;
    return 0;
}