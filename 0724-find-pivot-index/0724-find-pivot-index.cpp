class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<long long> pre;
        int n = nums.size();
        pre.resize(n);

        for (int i = 0; i < n; i++)
        {
            if (i == 0) pre[i] = nums[i];
            else pre[i] = pre[i-1] + nums[i];
        }

        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            
            long long left_sum = (i == 0) ? 0 : pre[i-1];
            long long right_sum = (i == n - 1) ? 0 : (pre[n-1] - pre[i]);
            if (left_sum == right_sum)
                return i;
        }
        
        return ans;
    }
};