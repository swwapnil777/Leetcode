class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       // if(nums.size()==1) return false;
       unordered_map<int,vector<int>> map;
        for(int i=0;i<(int)nums.size();++i){
            map[nums[i]].push_back(i);
        }
         int size(0);
         int count(0);
        for(int i=0;i<(int)nums.size();++i){
            vector<int> temp = map[nums[i]];
            if(temp.size()>=2){
            for(int j=0;j<(int)temp.size()-1;++j){
                if(abs(temp[j]-temp[j+1])<=k){
                   return true;
                }
            }
            }
            
        }
        return false;
        
    }
};