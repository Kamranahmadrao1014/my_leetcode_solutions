class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size()){k=k%nums.size();};
        int left=0,right=nums.size()-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        left=0,right=k-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        left=k,right=nums.size()-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};