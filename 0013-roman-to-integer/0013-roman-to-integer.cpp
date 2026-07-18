class Solution
{
    public:
    int romanToInt(string s)
    {
        int number=0,left=0,right=1;
        unordered_map<char,int>roman_values_in_integers;
        roman_values_in_integers={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        while(right<s.length())
        {
            auto it_left=roman_values_in_integers.find(s[left]);
            auto it_right=roman_values_in_integers.find(s[right]);
                if(it_left->second<it_right->second)
                {
                    if((
                    (s[left]=='I'&&(s[right]=='V'||s[right]=='X'))||
                    (s[left]=='X'&&(s[right]=='L'||s[right]=='C'))||
                    (s[left]=='C'&&(s[right]=='D'||s[right]=='M'))
                ))
                {
                    number=number+(it_right->second-it_left->second);
                    left=right+1;
                    right=left+1;
            }
            else{
                return -1;
            }
                }
                else
                {
                    number+=it_left->second;
                    left++;
                    right++;
                }
        }
                if(left<s.length())
                {
                    number+=roman_values_in_integers[s[left]];
                }
        return number;
    }
};