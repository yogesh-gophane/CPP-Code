#include <iostream>
using namespace std;

int arr[46] = {0};

int climbStairs(int n)
{
    if (n == 1 || n == 2)
    {
        return n;
    }
    if (arr[n] != 0)
    {
        return arr[n];
    }

    return arr[n] = climbStairs(n - 1) + climbStairs(n - 2);
}
int main()
{
    cout << climbStairs(5) << endl;
    return 0;
}