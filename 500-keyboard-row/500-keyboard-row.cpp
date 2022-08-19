class Solution {
    public:
        string s1 = "qwertyuiopQWERTYUIOP";
        string s2 = "asdfghjklASDFGHJKL";
        string s3 = "zxcvbnmZXCVBNM";
        bool valid(string &s){
        char ch = s[0];
            size_t f;
            f = s1.find(ch);
        if(f!=string::npos){
            for(int i = 1;i<s.length();i++){
                f = s1.find(s[i]);
                if(f==string::npos)
                    return 0;
            }
        }
            f = s2.find(ch);
        
        if(f!=string::npos){
            for(int i = 1;i<s.length();i++){
                f = s2.find(s[i]);
                if(f==string::npos)
                    return 0;
            }
        }
            f = s3.find(ch);
        if(f!=string::npos){
            for(int i = 1;i<s.length();i++){
                f = s3.find(s[i]);
                if(f==string::npos )
                    return 0;
            }
        }
        return 1;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        for(auto& word : words) {
            if(valid(word))
                ans.push_back(word);
        }
        return ans;
    }
};