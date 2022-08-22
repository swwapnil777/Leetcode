class Solution {
public:
    bool digitCount(string num) {
        int n  = num.size()-1;
        unordered_map<int,int> map;
        for(int i=0;i<num.size();++i){
            int ch = num[i]-'0';
            map[ch]++;
        }
        bool flag = true;
        for(int i=0;i<num.size();++i){
            int ch = num[i]-'0';
            if(map[i]!=ch){
               flag =false;
            }
        }
        if(flag==true) return true;
        else{
            return false;
        }
        
    }
};