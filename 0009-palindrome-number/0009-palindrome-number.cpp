class Solution {
public:
    bool isPalindrome(int x) {
        int sum=0,n,number;
        number=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0)
        {
            n=x%10;
            x=x/10;
            if(sum>INT_MAX/10||(sum==INT_MAX && n>7))
            {
                return false;
            }
            sum=(sum*10)+n;
        }
        if(sum==number)
        {
            return true;
        }
        return false;
    }
};