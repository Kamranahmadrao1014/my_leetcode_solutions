class Solution {
public:
    string getHint(string secret, string guess) {
        int bulls=0,cows=0;
        vector<int>guess_index;
        unordered_map<char,int>secret_map;
        for(int i=0;i<guess.length();i++){
                if(secret[i]==guess[i]){
                    bulls++;
                }else{
                    guess_index.push_back(i);
                    secret_map[secret[i]]++;
                }
        }
        for(int i=0;i<guess_index.size();i++){
            auto it=secret_map.find(guess[guess_index[i]]);
            if(it!=secret_map.end()){
                if(it->second!=0){
                    cows++;
                    secret_map[guess[guess_index[i]]]--;
                }
            }
        }
        return to_string(bulls)+"A"+to_string(cows)+"B";
    }
};