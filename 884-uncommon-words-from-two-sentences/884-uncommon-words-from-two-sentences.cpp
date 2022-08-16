class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> map;
        vector<string> ans;
        int i=0;
        int n=s1.size();
        int j=0;
        int m=s2.size();
        while(i<n){
            string temp="";
            while(s1[i]>='a' and s1[i]<='z'){
                temp.push_back(s1[i]);
                i++;
            }
            map[temp]++;
            i++;
        }
        while(j<m){
            string temp="";
            while(s2[j]>='a' and s2[j]<='z'){
                temp.push_back(s2[j]);
                j++;
            }
             map[temp]++;
            j++;
        }
        for(auto &x:map){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};