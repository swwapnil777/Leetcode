class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> map;
        for(auto &x:arr) map[x]++;
        int count(0);
        string s = "";
        for(auto &x:arr){
            if(map[x]==1){
                count++;
                if(count==k)
                    s=x;
            }
        }
        return s;
    }
};