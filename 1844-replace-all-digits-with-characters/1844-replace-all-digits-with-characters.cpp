class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        for(int i=0;i<s.size();++i){
            if(i&1){
              // int  x = s[i]-'a'+ 1;
               int y = s[i]-'0';
               char ch = s[i-1]+y;
                ans.push_back(ch);
                
            }
            else{
               ans.push_back(s[i]);
            }
        }
        return ans;
    }
};