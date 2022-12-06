#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
// Function Defination
int compareFunc(string &s1, string &s2)
{
    unordered_set<char> cs;
    int len1 = s1.size();
    int len2 = s2.size();

    for (auto item : s1 )
    {
        cs.insert(item);
    }
    for (auto item : s2){
        if (cs.find(item)!=cs.end()){
            return 0;
        }
    }
   
    return len1 * len2;
}
int maxProduct(vector<string> &words)
{
    int n = words.size();
    int mp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // compare function
            int x = compareFunc(words[i], words[j]);
            if (x == 0)
            {
                continue;
            }
            else
            {
                mp = max(mp, x);
            }
        }
    }
    return mp;
}
int main()
{
    // Function Call
    vector<string> input({"eae","ea","aaf","bda","fcf","dc","ac","ce","cefde","dabae"});
    cout << maxProduct(input);

    return 0;
}