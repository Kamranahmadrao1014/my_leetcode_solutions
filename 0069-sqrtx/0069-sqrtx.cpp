class Solution {
public:
    int mySqrt(int x) {
        long long i=0;
        while(i<=x){
            if(i*i<=x){i++;}
            else{break;}
        }
        return i-1;
    }
};