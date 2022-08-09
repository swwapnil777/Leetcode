class Solution {
public:
    int findmin(vector<int> &arr){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = low + ((high-low))%2;
            int prev = (mid - 1 + n) % n;
            int next = (mid + 1) % n;
             if (arr[mid] <= arr[prev] && arr[mid] <= arr[next])
                return mid;
            else if (arr[mid] <= arr[high])
                high = mid - 1;
            else if (arr[mid] >= arr[low])
               low = mid + 1;
        }
        return -1;
    }
    int Helper1(vector<int> &arr,int target,int start,int end){
        while(start<=end){
            int mid = (start+end)>>1;
            if(arr[mid]==target){
                return mid;
            }
            else if(target>arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
    int Helper2(vector<int> &arr,int target,int start,int end){
        while(start<=end){
            int mid = (start+end)>>1;
            if(arr[mid]==target){
                return mid;
            }
            else if(target>arr[mid]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = (int)nums.size();
        int idx = findmin(nums);
        int start = 0;
        int end = n-1;
        int x = Helper1(nums,target,start,idx-1);
        int y = Helper2(nums,target,idx,end);
        return x==-1?y:x;
    }
};