class Solution {
public:
    int solve(int n, vector<int>& dp){
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n-1] = solve(n-1, dp);
        dp[n-2] = solve(n-2, dp);
        dp[n-3] = solve(n-3, dp);

        dp[n] = dp[n-1] + dp[n-2] + dp[n-3];
        return dp[n];

    }
    int tribonacci(int n) {
        vector<int> dp(n+1, -1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        return solve(n, dp);
    }
};