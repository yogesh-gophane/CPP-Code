#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// Function Defination
bool checkIfExist(vector<int>& arr) {
        
        unordered_map<int,int> map;
        
        for(int i =0; i<arr.size(); i++){
            map[arr[i]*2] = i;
        }
         for(int i =0; i<arr.size(); i++){
            if (map.find(arr[i])!= map.end()){
                if (map[arr[i]] != i){
                    return true;
                }
            }
        }
        return false;
        
    }
int main()
{
// Function Call
vector<int> input({7,1,14,2});
cout<<checkIfExist(input);
    return 0;
}