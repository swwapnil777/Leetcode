class Solution {
public:
    int heightChecker(vector<int>& h) {
       vector<int> ans = h;
        int ct(0);
        sort(h.begin(),h.end());
        for(int i=0;i<(int)h.size();++i){
            if(h[i]!=ans[i]) ct++;
        }
        return ct;
    }
};