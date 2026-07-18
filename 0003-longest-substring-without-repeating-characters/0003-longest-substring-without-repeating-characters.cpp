class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s=="")
        {
            return 0;
        }
        int left=0,right=0,temp_left=0,index_duplicate;
        bool duplicate_found=false;
        string substring="";
        unordered_map<char,int>duplicate_detector;
        while(left<=right&&right<s.length())
        {
            auto it=duplicate_detector.find(s[right]);
            if(it!=duplicate_detector.end())
            {
                duplicate_found=true;
                if(substring.length()<(right-left))
                {
                substring="";
                for(temp_left=left;temp_left<right;temp_left++)
                {
                    substring+=s[temp_left];
                }
            }
            index_duplicate=it->second;
            temp_left=left;
            left=index_duplicate+1;
            while(temp_left<=index_duplicate)
                {
                    duplicate_detector.erase(s[temp_left]);
                    temp_left++;
                }
            }
            else
            {
                if(right==s.length()-1)
                {
                    if(substring.length()<(right+1)-left)
                    { substring="";
                    for(temp_left=left;temp_left<=right;temp_left++)
                    {
                    substring+=s[temp_left];
                    }
                    }
                }
            }
                duplicate_detector[s[right]]=right;
                right++;
        }
        if(!duplicate_found)
        {
            substring=s;
        }
        
        cout<<substring<<endl;
        return substring.length();
    }
};