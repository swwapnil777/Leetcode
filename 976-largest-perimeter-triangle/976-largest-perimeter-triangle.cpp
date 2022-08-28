class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = (int) nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<n-2;i++){
            if(nums[i]<(nums[i+1]+nums[i+2])){
                int peri = nums[i]+nums[i+1]+nums[i+2];
                return peri;
            }
              
        }
        return 0;   
    }
};