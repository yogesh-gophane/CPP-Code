#include <iostream>
#include <unordered_map>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int result = 0;
    unordered_map<char, int> up;

    for (int i = 0, j = 0; i < s.size(); i++)
    {

        if (up.find(s[i]) != up.end())
        {
            j = max(j, up[s[i]] + 1);
        }
        up[s[i]] = i;
        result = max(result, i - j + 1);
    }

    return result;
}

int main()
{
    string s = "bbbbb";
    int result = lengthOfLongestSubstring(s);
    cout << result << endl;
    return 0;
}