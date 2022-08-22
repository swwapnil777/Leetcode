class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int> map;
        for(int i=0;i<num.size();++i){
            int ch = num[i]-'0';
            map[ch]++;
        }
        for(int i=0;i<num.size();++i){
            int ch = num[i]-'0';
            if(map[i]!=ch){
                return false;
            }
        }
        return true;
        
    }
};