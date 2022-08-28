class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        multiset<int,greater<int>> s;
        vector<int> res;
        int n = (int)nums.size();
        for(int i=0;i<n;++i){
            s.insert(nums[i]);
            if(s.size()>=k){
                auto x = *s.begin();
                res.push_back(x);
                s.erase(s.find(nums[i-k+1]));
            }
        }
        return res;
    }
};