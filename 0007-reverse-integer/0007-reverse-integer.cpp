class Solution {
public:
    int reverse(int x) {
        int sum=0,n;
        while(x!=0)
        {
            n=x%10;
            x=x/10;
            if(sum>INT_MAX/10||(sum==INT_MAX/10&& n>7))
            {
                return 0;
            }
            if(sum<INT_MIN/10||(sum==INT_MIN/10&& n<-8))
            {
                return 0;
            }
                sum=(sum*10)+n;
        }
        return sum;
    }
};