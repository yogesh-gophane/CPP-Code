#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int minimumRounds(vector<int> &tasks)
{
    unordered_map<int, int> mp;
    int ans = -1;

    for (int i = 0; i < tasks.size(); i++)
    {
        mp[tasks[i]]++;
    }

    for (auto [task, count] : mp)
    {
        if (count == 1)
        {
            return -1;
        }
        if (count % 3 == 0)
        {
            ans += count / 3;
        }
        else
        {
            ans += count / 3 + 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> input({2, 2, 3, 3, 2, 4, 4, 4, 4, 4});
    cout << minimumRounds(input);

    return 0;
}