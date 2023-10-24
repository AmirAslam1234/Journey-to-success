#include<iostream> 
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
            }
        }
        return nums.size();
    }
};
int main(){
    Solution obj;
    vector<int>nums = {3,2,2,3};
    cout<<obj.removeElement(nums,3);
    return 0;

}