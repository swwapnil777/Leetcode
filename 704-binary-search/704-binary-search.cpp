class Solution
{
public:
    int B_S(vector<int> &v, int s, int e, int key)
    {
        if (s > e)
            return -1;
        int mid = s + ((e - s) >> 1);
        if (v[mid] == key)
            return mid;
        if (key > v[mid])
            return B_S(v, mid + 1, e, key);
        else
            return B_S(v, s, mid - 1, key);
    }
    int search(vector<int> &nums, int target)
    {
        int ans = B_S(nums, 0, nums.size() - 1, target);
        return ans;
    }
};