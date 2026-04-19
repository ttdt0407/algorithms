class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;

        int size = nums.size();

        vector<long long> pre(size+1, 0);
        map<int, int> mp;

        mp[0] = 1;
        for (int i = 1; i <= size; i++)
        {
            pre[i] = pre[i-1] + nums[i-1];
            res += mp[pre[i]-k];
            mp[pre[i]]++;
        }

        return res;
    }
};