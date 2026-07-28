class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        deque<int>dq;
        int carry=1,number;
        for(int i=digits.size()-1;i>=0;i--){
            number=carry+digits[i];
            if(number>=10){
                dq.push_front(0);
                carry=1;
                if(i==0){
                    dq.push_front(1);
                }
            }else{
                dq.push_front(number);
                carry=0;
            }
        }
        return vector<int>(dq.begin(), dq.end());
    }
};