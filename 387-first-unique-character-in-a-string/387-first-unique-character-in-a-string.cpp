class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int> map;
        for(auto &x:s){
            map[x]++;
            
        }
        for(int i=0;i<n;i++){
            if(map[s[i]]==1) return i;
        }
        return -1;
        
    }
};