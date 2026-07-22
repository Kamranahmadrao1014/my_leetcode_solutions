class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left=0,right=1;
        bool found=false;
        vector<int>nums2;
        while(right<nums.size()){
            if(nums[left]==nums[right]){
                found=true;
            }
            else{
                if(found){
                    found=false;
                    nums2.push_back(nums[left]);
                    nums2.push_back(nums[left]);
                }else{
                    nums2.push_back(nums[left]);
                }
            }
            left++;
            right++;
        }
        if(left==nums.size()-1&&found){
            nums2.push_back(nums[left]);
            nums2.push_back(nums[left]);
        }else{
            nums2.push_back(nums[left]);
        }
        nums=nums2;
        return nums.size();
    }
};