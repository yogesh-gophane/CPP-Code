#include <iostream>
#include <vector>
using namespace std;

int minCostClimbingStairs(vector<int> &cost)
{
    int length = cost.size();
    int dp[length];

    for (int i = 0; i<length; i++){
        if (i<2){
            dp[i] = cost[i];
        }else{
            dp[i] = cost[i] + min(cost[i-1],cost[i-2]);
        }

    }
    return min(dp[length-1],dp[length-2]);
    
}
int main()
{
    vector<int> input({0,2,2,1});
    cout << minCostClimbingStairs(input);
    return 0;
}