class NumArray {
private:
    vector<int>ve;
public:
    NumArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ve.resize(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                ve[i] = nums[i];
            }
            else {
                ve[i] = ve[i-1] + nums[i];
            }
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0)  return ve[right];
        return ve[right] - ve[left- 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */