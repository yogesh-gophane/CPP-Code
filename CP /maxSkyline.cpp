#include <iostream>
#include <vector>
using namespace std;
// Function Defination
int maxIncreaseKeepingSkyline(vector<vector<int>> &grid)
{
    vector<int> row, col;
    int mrow = 0, mcol = 0;
    int ans = 0, osum = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        mrow = 0;
        mcol = 0;
        for (int j = 0; j < grid.size(); j++)
        {
            mrow = max(mrow, grid[i][j]);
            mcol = max(mcol, grid[j][i]);
            osum += grid[i][j];
        }
        row.push_back(mrow);
        col.push_back(mcol);
    }
    for (int i = 0; i < grid.size(); i++)
    {

        for (int j = 0; j < grid.size(); j++)
        {
            int x = min(row[i], col[j]);

            grid[i][j] = x;
            ans += x;
        }
    }

    return ans - osum;
}
int main()
{
    // Function Call
    vector<vector<int>> input({{3, 0, 8, 4}, {2, 4, 5, 7}, {9, 2, 6, 3}, {0, 3, 1, 0}});
    cout << maxIncreaseKeepingSkyline(input);
    return 0;
}