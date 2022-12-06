#include <iostream>
#include <vector>
using namespace std;
// Function Defination

int firstMissingPositive(vector<int> &nums)
{
    int  arr[2147483647] = {0};
    for (auto i : nums)
    {
        if (i > 0)
        {
            arr[i]++;
        }
    }
    for (int i = 1; i < INT32_MAX - 1; i++)
    {
        if (arr[i] == 0)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    // Function Call
    vector<int> input({3, 4, -1, 1});
    cout << firstMissingPositive(input) << endl;
    cout<<INT32_MAX; 
    return 0;
}