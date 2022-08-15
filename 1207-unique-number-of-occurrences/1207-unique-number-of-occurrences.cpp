class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        for(auto x:arr){
            freq[x]++;
        }
        unordered_set<int> unique;
        int count(0);
        for(auto x:freq){
            count++;
            unique.insert(x.second);
        }
        if(count==unique.size()) return true;
        return false;
    }
};