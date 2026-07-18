class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        vector<int>nums2;
        int left=0,right=1;
        while(right<nums.size()){
            if(nums[left]!=nums[right]){
                nums2.push_back(nums[left]);
            }
            left++;
            right++;
        }
        if(left==nums.size()-1){
            nums2.push_back(nums[left]);
        }
        nums=nums2;
        return nums.size();
    }
};