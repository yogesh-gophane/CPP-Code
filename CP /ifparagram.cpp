#include<iostream>
#include<vector>
using namespace std;
// Function Defination
bool checkIfPangram(string sentence) {
        int arr[26] = {0};

        for (auto c : sentence){
            int x = c - 'a' ;
            arr[x] ++;
            
        }
        for (auto item : arr){
            if(item == 0){
                return false;
            }
        }
        return true;
        
    }
int main()
{
// Function Call
    cout<<checkIfPangram("thequickbrownfoxjumpsoverthelazydog");
    return 0;
}