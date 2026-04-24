class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        long long sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            int temp = sum % k;
            if (temp == 0 && i >= 1)
            {
                return true;
            }
            if (mp.count(temp))
            {
                if (i - mp[temp] >= 2)
                {
                    return true;
                }
            }
            else
            {
                mp[temp] = i;
            }
        }
        return false;
    }
};