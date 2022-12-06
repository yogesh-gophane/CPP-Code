#include <iostream>
#include <vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
// Function Defination
// for 2 occurance

/*int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i<nums.size(); i++){
        ans^=nums[i];
    }
    return ans;
}*/

//for 3 occurance
// int singleNumber(vector<int>& nums){
//     unordered_map<int,int> mp;
//     int ans = 0;
//    for (auto item : nums){
//         mp[item]++;
//    }
//    for (auto item : mp){
//     if (item.second == 1){
//         ans  = item.first;
//         break;
//     }
//    }
//     return ans;
// }
//solution 2 for 3 occurance
int singleNumber(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for (int i =0; i< nums.size()-2; i+=3){
        int x = nums[i] ;
        int y =  nums[i+1] ;
        int z = nums[i+2] ;
        if (nums[i]  == nums[i+1] && nums[i+1] == nums[i+2]){
            continue;
        }else{
            return nums[i];
        }
    }
    return 0;
}
int main()
{
    // Function Call
    vector<int> input({2,2,3,2});
    cout << singleNumber(input);
    return 0;
}