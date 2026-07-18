class Solution {
public:
    bool isPalindrome(string s) {
        if(s==""){
            return true;
        }
        int converter;
        string temp;
        for(int i=0;i<s.length();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                converter=s[i];
                converter+=32;
                temp+=converter;
            }
            else if(!((s[i]>='0'&&s[i]<='9')||(s[i]>='a'&&s[i]<='z'))){}
            else{
                temp+=s[i];
            }
        }
        int left=0,right=temp.length()-1;
        while(left<right){
            if(temp[left]!=temp[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};