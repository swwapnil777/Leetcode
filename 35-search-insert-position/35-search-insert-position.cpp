class Solution {
public:
    int pos(vector<int> &nums,int target){
        int start = 0;
        int end = nums.size()-1;
        int mid(0);
        while(start<=end){
            mid = start+ ((end-start)>>1);
            if(nums[mid]==target) return mid;
            else if(target>nums[mid]) start=mid+1;
            else end = mid-1;
        };
        return start;
    }
    int searchInsert(vector<int>& nums, int target) {
        int ans = pos(nums,target);
        return ans;
    }
};