#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    class Solution {
    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int>nums3;
            merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(nums3));
            sort(nums3.begin(),nums3.end());
            int size=nums3.size();
            double median=0;
            if(size%2==1){
                median = nums3[size/2];            
            }
            else{
                median = (double(nums3[size/2])+nums3[size/2-1])/2;
            }
            return median;
        }
    };
int main(){
    vector<int> nums1 = {1,2};
    vector<int>nums2  = {3,4};
    Solution obj;
    cout<<obj.findMedianSortedArrays(nums1,nums2);
}