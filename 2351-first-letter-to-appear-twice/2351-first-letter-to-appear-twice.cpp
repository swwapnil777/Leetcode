class Solution {
public:
    char repeatedCharacter(string s) {
        multiset<char> set;
        for(auto &x:s){
            set.insert(x);
            if(set.count(x)>=2) return x;
        }
        return 'a';
    }
};