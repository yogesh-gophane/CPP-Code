#include<iostream>
#include<vector>
using namespace std;
// Function Defination
//naive approach O(n4)
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int count =nums.size();
    vector<vector<int>> result;
        for (int i = 0; i < count; i++)
        {
            /* code */
            for (int j = i+1;j < count; j++)
            {
                /* code */
                for(int k =j+1; k<count; k++){
                    for (int p = k+1; p<count; p++){
                        int x = nums[i] , y= nums[j] ,z = nums[k] ,a =nums[p];
                        if( a+x+y+z== target){
                                result.push_back({nums[i],nums[j],nums[k],nums[p]});
                        }
                    }
                }
            }
            
        }
        
        return result;
    }
int main()
{
// Function Call
vector<int> input({2,2,2,2,2});
    int target = 8;
    vector<vector<int>> result = fourSum(input, target);
    for (auto item : result){
        for (auto i : item){
            cout<<i<< " ";
        }
        cout<<endl;
    }
    return 0;
}