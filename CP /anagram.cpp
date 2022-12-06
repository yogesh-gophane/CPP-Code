#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// Function Defination
bool isAnagram(string s, string t) {
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s==t;

        
    }
int main()
{
// Function Call
    cout<<isAnagram("ana#gram","&nagaram");
    return 0;
}   