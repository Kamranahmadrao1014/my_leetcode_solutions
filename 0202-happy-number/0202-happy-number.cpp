class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int>passed_numbers;
        int sum=0;
        while(sum!=1){
            sum=0;
            while(n!=0){
                sum=sum+pow(n%10,2);
                n=n/10;
            }
            auto it=passed_numbers.find(sum);
            if(it==passed_numbers.end()){
                passed_numbers[sum]=sum;
                n=sum;
            }else{
                return false;
            }
        }
        return true;
    }
};