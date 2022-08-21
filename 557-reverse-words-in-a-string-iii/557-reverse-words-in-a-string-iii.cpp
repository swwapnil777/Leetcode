class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string temp = "";
        for(int i=0;i<s.size();++i){
            if(s[i]!=' '){
                temp+=s[i];
            }
            if(s[i]==' ' && i!=s.size()-1){
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=' ';
                temp="";
            }
            if(i==s.size()-1){
                reverse(temp.begin(),temp.end());
                ans+=temp;
            }
           
        }
        return ans;
    }
};