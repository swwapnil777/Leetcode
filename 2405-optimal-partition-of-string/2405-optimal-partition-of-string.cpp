class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> set;
        int count(0);
        for(int i=0;i<s.size();++i){
            if(set.find(s[i])!=set.end()){
                count++;
                set.clear();
            }
            set.insert(s[i]);
        }
        return set.size()!=0?count+1:count;
    }
};