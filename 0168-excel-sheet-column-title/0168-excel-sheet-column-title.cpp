class Solution {
public:
    string convertToTitle(int columnNumber) {
        string title="";
        int remainder;
        while(columnNumber>=1){
            remainder=columnNumber%26;
            columnNumber/=26;
            if(remainder==0){
                remainder+=26;
                columnNumber-=1;
            }
            title=char('@'+remainder)+title;
        }
        return title;
    }
};