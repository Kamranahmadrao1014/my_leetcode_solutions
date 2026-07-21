class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left=0,right=nums.size()-1;
        vector<int>nums2;
        while(left<right){
            if(nums[left]!=val){nums2.push_back(nums[left]);}
            if(nums[right]!=val){nums2.push_back(nums[right]);}
            left++;
            right--;
        }
        if(left==right){
            if(nums[left]!=val){nums2.push_back(nums[left]);}
        }
        nums=nums2;
        return nums2.size();
    }
};