class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        for(auto x:s){
            ++map[x];
        }
        vector<pair<int,char>> freq;
        for(auto x:map){
            freq.push_back({x.second,x.first});
        }
        sort(freq.begin(),freq.end(),greater<pair<int,char>>());
        s = "";
        for(auto x:freq){
            s+=string(x.first,x.second);
        }
        return s; 
    }
};