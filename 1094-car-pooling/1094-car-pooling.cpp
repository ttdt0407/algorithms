class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n  = trips.size();
        int sum = 0;
        
        vector<int> d(1005, 0);
        for (int i = 0; i < n; i++)
        {
            int l = trips[i][1];
            int r = trips[i][2];
            int val = trips[i][0];

            d[l] += val;
            d[r] -= val;
        }

        for (int j = 0; j < d.size(); j++)
        {
            sum += d[j];
            if (sum > capacity) return false;
        }

        return true;
    }
};