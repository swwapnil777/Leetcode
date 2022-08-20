class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int count(0);
        vector<int> ans;
        for(int i=0;i<nums.size();++i){
            if(nums[i]==target){
                ans.push_back(i);
            }
            else if(nums[i]>target) break;
        }
        return ans;
    }
};