#include <iostream>
#include <vector>
using namespace std;
// Function Defination
int strStr(string haystack, string needle)
{
    int h = haystack.size();
    int n = needle.size();
    for (int i = n; i <= h; i++)
    {
        string temp = haystack.substr(i - n, n);
        if (temp == needle)
        {
            return i - n;
        }
    }
    return -1;
}
int main()
{
    // Function Call
    cout << strStr("leetcode", "leeto");
    return 0;
}