class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> set;
        vector<string> vec = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
        for(int i=0;i<words.size();++i){
            string temp = words[i];
            string ans;
            for(int j=0;j<temp.size();++j){
                int x = temp[j]-'a';
                string z = vec[x];
                ans+=z;
            }
            set.insert(ans);
        }
        return set.size();
    }
};