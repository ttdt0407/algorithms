class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> se;
        for (int i = 0; i < nums.size(); i++)
        {
            se.insert(nums[i]);
        }

        int n = se.size();
        int i = 0;
        for (auto it = se.begin(); it != se.end(); it++)
        {
            nums[i++] = *it;
        }

        return n;
    }
};