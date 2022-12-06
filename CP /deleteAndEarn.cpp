#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
int deleteAndEarn(vector<int> &nums)
{
    unordered_map<int, int> num_freq;

    for (auto i : nums)
    {
        num_freq[i]++;
    }
    vector<int> arr;

    for (auto i : num_freq)
    {
        arr.push_back(i.first);
    }
    sort(arr.begin(), arr.end()); // 2,4,6
    int earn1 = 0, earn2 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i] * num_freq[arr[i]];
        if (i > 0 && arr[i] == arr[i - 1] + 1)
        {
            int temp = earn2;
            earn2 = max(curr + earn1, earn2);
            earn1 = temp;
        }
        else
        {
            int temp = earn2;
            earn2 = curr + earn2;
            earn1 = temp;
        }
    }
    return earn2;
}
int main()
{
    vector<int> input({2, 2, 3, 3, 3, 4});
    cout << deleteAndEarn(input);
    return 0;
}