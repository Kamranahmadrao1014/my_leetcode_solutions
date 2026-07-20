class Solution {
public:
    bool isNumber(string s) {
        if(s.length()==0){return false;}
        if(s.length()<2){if(s[0]>='0'&&s[0]<='9')return true;else{return false;}}
        if(s.length()<=2){if((s[0]=='+'||s[0]=='-'||s[0]=='.')&&(s[1]>='0'&&s[1]<='9')){return true;}else{if((s[0]>='0'&&s[0]<='9')&&(s[1]=='.'||(s[1]>='0'&&s[1]<='9')))return true;else{return false;}}}
        bool check_point_duplicate=false,check_exponennt_duplicate=false;
        if(!(((s[0]>='0'&&s[0]<='9')||(s[0]=='+'||s[0]=='-'||s[0]=='.')&&(s[1]>='0'&&s[1]<='9'||s[1]=='.'))
        &&(((s[s.length()-1]>='0'&&s[s.length()-1]<='9')||s[s.length()-1]=='.')))){
            return false;
        }else{if(s[0]=='.')check_point_duplicate=true;}
        for(int i=1;i<s.length();i++){
            if(!((s[i]>='0'&&s[i]<='9')||s[i]=='+'||s[i]=='-'||s[i]=='e'||s[i]=='E'||s[i]=='.')){
                return false;
            } if(s[i]=='.'){if(check_point_duplicate){return false;}else{if(check_exponennt_duplicate){return false;}else{check_point_duplicate=true;}}}
            if(i>=1){
             if(s[i]=='+'||s[i]=='-'){if(!((s[i+1]>='0'&&s[i+1]<='9')&&(s[i-1]=='e'||s[i-1]=='E')))return false;}
             if(((s[i]=='e'||s[i]=='E')&&!check_exponennt_duplicate)){check_exponennt_duplicate=true;
                if(!(((s[i-1]>='0'&&s[i-1]<='9'||(s[i-1]=='.'&&(s[i-2]>='0'&&s[i-2]<='9'))))&&((s[i+1]>='0'&&s[i+1]<='9')||(s[i+1]=='+'||s[i+1]=='-'))))return false;}
            else{if(s[i]=='e'||s[i]=='E'){if(check_exponennt_duplicate)return false;}}
            }
        }
        return true;
    }
};