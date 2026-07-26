class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>magazine_map;
        for(int i=0;i<magazine.length();i++){
            magazine_map[magazine[i]]++;
        }
        for(int i=0;i<ransomNote.length();i++){
            auto it=magazine_map.find(ransomNote[i]);
            if(it==magazine_map.end()){
                return false;
            }
           else if(it->second == 0){
                return false;
            }else{
                magazine_map[ransomNote[i]]--;
            }
        }
        return true;
    }
};