class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length()){return -1;}
        int returned_index=-1,left=0,right=0;
        bool found=false;
        while(left<haystack.length()&&right<needle.length()){
            if(haystack[left]==needle[right]){
                if(!found){
                    found=true;
                    returned_index=left;
                }
                    if(right==needle.length()-1){
                        return returned_index;
                    }
                right++;
                left++;
            }
            else{
                if(found){
                left=returned_index+1;
                }else{
                    left++;
                }
                right=0;
                found=false;
                returned_index=-1;
            }
        }
        if(right!=needle.length()){
            return -1;
        }
        return -1;
    }
};