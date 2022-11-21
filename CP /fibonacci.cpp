#include <iostream>

using namespace std;
int arr[5] = {0};
int fib(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    if (arr[n] != 0)
    {
        return arr[n];
    }
    else
    {
        return arr[n] = fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    cout << fib(4);
    return 0;
}