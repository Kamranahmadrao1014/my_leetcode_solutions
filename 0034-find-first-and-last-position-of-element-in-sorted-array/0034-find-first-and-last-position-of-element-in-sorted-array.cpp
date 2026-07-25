class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int first,last,start=0,end=nums.size()-1;
       while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            if(mid!=0){
                if(nums[mid-1]!=target){
                    first=mid;
                    break;
                }else{
                    end=mid-1;
                }
            }else{
                first=start;
                break;
            }
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       start=0,end=nums.size()-1;
       while(start<=end){
        int mid=start+(end-start)/2;
        if(nums[mid]==target){
            if(mid!=nums.size()-1){
                if(nums[mid+1]!=target){
                    last=mid;
                    return{first,last};
                }else{
                    start=mid+1;
                }
            }else{
                last=end;
                return {first,last};
            }
        }
        else if(nums[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
       }
       return {-1,-1};

    }
};