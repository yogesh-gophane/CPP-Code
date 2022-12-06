#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
// Function Defination
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<int>> cpstr;
    vector<vector<string>> result;
    for (int i = 0; i < strs.size(); i++)
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        if (cpstr.find(temp) != cpstr.end())
        {
            cpstr[temp].push_back(i);
        }
        else
        {
            cpstr[temp] = {i};
        }
    }
    for (auto item : cpstr)
    {
        vector<string> temp;
        for (auto i : item.second)
        {
            temp.push_back(strs[i]);
        }
        result.push_back(temp);
    }

    return result;
}
int main()
{
    // Function Call
    vector<string> input({""});
    vector<vector<string>> result = groupAnagrams(input);

    for (auto item : result)
    {
        for (auto i : item)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}