class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;

        vector<long long> pre(nums.size()+1, 0);
        map<int, int> mp;

        mp[0] = 1;
        for (int i = 1; i <= nums.size(); i++)
        {
            pre[i] = pre[i-1] + nums[i-1];
            res += mp[pre[i]-k];
            mp[pre[i]]++;
        }

        return res;
    }
};