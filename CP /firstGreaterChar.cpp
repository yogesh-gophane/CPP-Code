#include <iostream>
#include <vector>
using namespace std;

char nextGreatestLetter(vector<char> &letters, char target)
{

    for (auto i : letters)
    {
        if (i > target)
            return i;
    }
    return letters[0];
}
int main()
{
    vector<char> input({'c', 'f', 'j'});
    cout << nextGreatestLetter(input, 'a');
    return 0;
}
