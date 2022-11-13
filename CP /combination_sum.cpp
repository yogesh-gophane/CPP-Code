#include <iostream>
#include <vector>
#include <map>

using namespace std;
vector<vector<int>> res;
void dfs(vector<int> input, int i, int target, vector<int> r, vector<vector<int>> &result)
{
    if (target == 0)
    {
        result.push_back(r);
        return;
    }
    while (i < input.size() && target - input[i] >= 0)
    {
        r.push_back(input[i]);
        dfs(input, i, target - input[i], r, result);
        i++;
        r.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result;
    vector<int> r;
    dfs(candidates, 0, target, r, result);
    return result;
}

int main()
{
    vector<int> input{2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum(input, target);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
