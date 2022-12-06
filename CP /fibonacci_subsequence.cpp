#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int lenLongestFibSubseq(vector<int> &arr)
{
    int ans = 0, result = 0;
    int n = arr.size() - 1;

    unordered_set<int> s(arr.begin(), arr.end());

    for (int i = 1; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            int y = arr[i] + arr[j];
            int x = arr[j];
            int length = 2;
            while (s.find(y) != s.end())
            {
                int z = x + y;
                x = y;
                y = z;
                ans = max(ans, ++length);
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr({2, 4, 7, 8, 9, 10, 14, 15, 18, 23, 32, 50});
    cout << lenLongestFibSubseq(arr) << endl;
    return 0;
}