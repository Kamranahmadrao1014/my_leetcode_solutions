class Solution {
public:
    int mySqrt(int x) {
        int square_root=0;
        for(int i=1;i<=x;i++){
            if(i<=x/i){
                square_root=i;
            }else{
                break;
            }
        }
        return square_root;
    }
};