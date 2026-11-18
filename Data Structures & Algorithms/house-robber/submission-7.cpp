class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return dfs(0,nums, dp);
    }

    int dfs(int i,vector<int>& nums, vector<int>& dp){
        if (i > nums.size()-1){
            return 0;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        dp[i] = max(dfs(i+1,nums,dp), nums[i] + dfs(i+2,nums,dp));
        return dp[i];
    }
};
