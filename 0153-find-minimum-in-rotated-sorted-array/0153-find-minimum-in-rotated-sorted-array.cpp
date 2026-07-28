class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,min=nums[start];
        while(start<=end){
           int mid=start+(end-start)/2;
            if(nums[mid]<min){
                min=nums[mid];
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return min;
    }
};