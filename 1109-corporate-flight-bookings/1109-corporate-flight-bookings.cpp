class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans (n + 1, 0);

        ios_base::sync_with_stdio(false);
        int s = bookings.size();

        for (int i = 0; i < s; i++)
        {
            ans[bookings[i][0] - 1] += bookings[i][2];
            ans[bookings[i][1]] -= bookings[i][2];
        }

        long long flags = 0;
        for (int i  = 0; i < n; i++)
        {
            flags += ans[i];
            ans[i] = flags;
        }
        ans.pop_back();
        return ans;
    }
};