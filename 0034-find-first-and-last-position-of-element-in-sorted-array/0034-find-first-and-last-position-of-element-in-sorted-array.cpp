class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it1 = lower_bound(nums.begin(), nums.end(), target);
        auto it2 = upper_bound(nums.begin(), nums.end(), target);
        vector<int> res;

        if (it1 != nums.end() && *it1 == target)
        {
            res.push_back(it1-nums.begin());
            res.push_back(it2-nums.begin() - 1);
        }
        else
        {
            res.push_back(-1);
            res.push_back(-1);
        }

        return res;
    }
};