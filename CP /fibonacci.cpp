#include <iostream>

using namespace std;
int arr[5] = {0};
int tribonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    if (n==2){
        return 1;
    }
    if (arr[n] != 0)
    {
        return arr[n];
    }
    else
    {
        return arr[n] = tribonacci(n-1) + tribonacci(n - 2) + tribonacci(n-3);
    }
}

int main()
{
    cout << tribonacci(4);
    return 0;
}