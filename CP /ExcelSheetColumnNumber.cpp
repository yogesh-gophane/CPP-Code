#include <iostream>
#include <vector>
using namespace std;
// Function Defination
int titleToNumber(string columnTitle)
{
    int ans = 0;

    for (int i = columnTitle.size() - 1; i >= 0; i--)
    {
        int x = columnTitle[i]-'A'+1;
        ans  = ans * 26 + x;
       
    }
    return ans;
}
string convertToTitle(int columnNumber) {
        
        
}
int main()
{
    // Function Call
    cout << titleToNumber("ZZZ");
    cout<< convertToTitle(27);
    return 0;
}