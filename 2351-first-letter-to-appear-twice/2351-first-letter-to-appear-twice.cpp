class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> map;
        for(auto &x:s){
            map[x]++;
            if(map[x]>=2) return x;
        }
        return 'a';
            
    }
};