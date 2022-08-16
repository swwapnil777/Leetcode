class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> map;
        for(auto s:words1)
            map[s]++;
        multiset<string> set;
        for(auto s:words2)
            set.insert(s);
        int count(0);
        for(auto s:words1){
            if(map[s]==1 && set.count(s)==1) count++;
        }
        return count;
        
    }
};