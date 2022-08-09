class Solution {
public:
    int Helper(vector<int> &arr){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + ((high-low))%2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;
             if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
                return arr[mid];
            else if (arr[mid] <= arr[high])
                high = mid - 1;
            else if (arr[mid] >= arr[low])
               low = mid + 1;
        }
        return -1;
    }
    int findMin(vector<int>& nums) {
        int ans = Helper(nums);
        return ans;
    }
};