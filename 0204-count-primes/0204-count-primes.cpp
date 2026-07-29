class Solution {
public:
    int countPrimes(int n) {
        vector<bool>primes(n+1,true);
        int count=0;
        for(int i=2;i<n;i++){
            if(primes[i]){
                for(int j=i*2;j<n;j=j+i){
                    primes[j]=false;
                }
                count++;
            }
        }
        return count;
    }
};