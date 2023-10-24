#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::unique(nums.begin(),nums.end());
        int k = 0;
        int i = 0;
        while(true){
            if(nums[i]!=nums[i+1]||(i+1)==(nums.size()-1)){
                k++;
            }
            else{
                break;

            }
            i++;
        }
       
        return k;
    }
};
int main(){
    Solution obj;
    vector<int>nums = {1,1,2};
    // vector<int>nums = {0,0,1,1,1,2,2,3,3,4};
    obj.removeDuplicates(nums);
    return 0;
}