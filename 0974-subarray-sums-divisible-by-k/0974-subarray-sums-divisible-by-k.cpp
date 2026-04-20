class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int res = 0;
        int n = nums.size();
        map<int, int> mp;
        vector<int> pre(n+1, 0);

        mp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            pre[i] = pre[i-1] + nums[i-1];
            int temp = ((pre[i] % k) + k) % k;
            res += mp[temp];
            mp[temp]++;
        }

        return res;
    }
};