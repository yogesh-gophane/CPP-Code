#include <iostream>
#include <stack>
using namespace std;
int longestValidParentheses(string s)
{
    stack<int> st;
    int  mcount = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }else {
            st.pop();
            if (st.empty()){
                st.push(i);
            }else{
                mcount = max(mcount,i-st.top());
            }
        }
        
    }
    return mcount;
}
int main()
{
    string s = "()(()";
    cout << longestValidParentheses(s) << endl;
    return 0;
}