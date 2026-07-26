class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                if(mid!=0){
                    if(target>nums[mid-1]){
                        break;
                    }
                }else{
                    break;
                }
                end=mid-1;
            }else{
                if(mid!=end){
                    if(target<nums[mid+1]){
                        mid+=1;
                        break;
                    }
                }else{
                    mid+=1;
                }
                start=mid+1;
            }
        }
        return mid;
    }
};