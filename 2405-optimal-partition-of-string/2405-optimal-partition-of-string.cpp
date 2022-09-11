class Solution {
public:
    int partitionString(string s) {
        set<char> set;
        int count(0);
        for(int i=0;i<s.size();++i){
            if(set.find(s[i])!=set.end()){
                count++;
                set.clear();
            }
            set.insert(s[i]);
        }
        if(set.size()>=1){
            count = count+1;
        }
        return count;
    }
};