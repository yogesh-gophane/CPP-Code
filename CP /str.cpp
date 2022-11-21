#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

string encryption(string str)
{

    string result = "";
    vector<string> hash;

    int length = str.size();

    int row = int(sqrt(length));
    int col = row + 1;

    string s;

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' '){
            continue;
        }
        s += str[i];
    }

    for (int i = 0; i < length; i += col)
    {
        hash.push_back(s.substr(i, col));
    }

    for (int j = 0; j < hash[0].size(); j++)
    {
        for (int i = 0; i < hash.size(); i++)
        {
            result += hash[i][j];
        }
        result += " ";
    }

    

    return result;
}

int main()
{

    string input = "feedthedog";

    cout << encryption(input) << endl;

    return 0;
}