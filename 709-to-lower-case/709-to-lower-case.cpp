class Solution {
public:
    string toLowerCase(string s) {
        for(auto &x:s){
            if(x>=65 && x<=90){
                x=x+32;
            }
        }
        return s;
    }
};