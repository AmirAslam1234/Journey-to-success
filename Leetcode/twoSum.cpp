#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>sums;
        for (int i = 0; i < nums.size()-1; i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                if((nums[i]+nums[j])==target){
                    sums.push_back(i);
                    sums.push_back(j);
                return sums;
                }
            }
            
        }
        return sums;
    }
};
int main(){
    vector<int>nums = {2,11,7,15};
    Solution obj;
    vector<int>sums=obj.twoSum(nums,9);

    return 0;
}