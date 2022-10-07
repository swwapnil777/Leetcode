class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> set(allowed.begin(),allowed.end());    
        int count = 0;
        for(int i=0;i<words.size();++i){
            string t = words[i];
            bool flag = true;
            for(int j=0;j<t.size();j++){
                if(set.find(t[j])==set.end()){
                    flag =false;
                }
            }
            if(flag){
                count++;
            }
            
        }
        return count;
    }
};