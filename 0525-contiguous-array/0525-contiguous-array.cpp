class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<long long> pre(n+1, 0);
        unordered_map<int, int> mp;
        int max = 0;
        mp[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            pre[i] = (nums[i-1] > 0) ? (pre[i-1] + 1) : (pre[i-1] - 1);
            auto it = mp.find(pre[i]);
            if (it  != mp.end())
            {
                int temp = i - mp[pre[i]];
                max = (max > temp) ? max : temp;
            }
            else
            {
                mp[pre[i]] = i;
            }
        }

        return max;
    }
};