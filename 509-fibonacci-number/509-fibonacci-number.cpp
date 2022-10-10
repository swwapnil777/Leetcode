class Solution
{
private:
    int dp[31];

public:
    Solution()
    {
        fill(dp, dp + 31, -1);
    }
    int solve(int n, int arr[])
    {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];

        dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
        return dp[n];
    }
    int fib(int n)
    {
        int ans = solve(n, dp);

        return ans;
    }
};