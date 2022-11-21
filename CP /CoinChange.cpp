#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
Sort the vector
divide amount by coin if remainder == 0 return

*/
int coinChange(vector<int> &coins, int amount)
{
    int dp[++amount];
    dp[0] = 0;

    sort(coins.begin(), coins.end());

    for (int i = 1; i < amount; i++)
    {
        dp[i] = INT8_MAX;
        for (auto c : coins)
        {
            if (i - c < 0)
                break;

            if (dp[i - c] != INT8_MAX)
                dp[i] = min(dp[i], 1 + dp[i - c]);
        }
    }
    return dp[--amount] == INT8_MAX ? -1 : dp[amount];
}
int main()
{
    vector<int> coins({1, 2, 5});
    int amount = 11;
    cout<<1%10;
    cout << coinChange(coins, amount);
    return 0;
}