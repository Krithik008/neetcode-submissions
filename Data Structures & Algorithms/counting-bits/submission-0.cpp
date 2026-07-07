class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> dp(n + 1, 0);
        if (n == 0) return dp;
        int num = 1;
        dp[0] = 0;
        dp[1] = 1;

        for(int i = 2; i <= n; i++) {
            if(num * 2 == i) num = i;
            dp[i] = dp[i - num] + 1;
        }

        return dp;
    }
};