class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        int d[55];

        for (int i = 0; i < 55; i++)
        {
            d[i] = 0;
        }

        for (vector<int> x : ranges)
        {
            d[x[0]]++;
            d[x[1]+1]--;
        }

        long long pre[55];
        for (int i = 0; i < 55; i++)
        {
            if (i == 0)
            {
                pre[i] = d[i];
            }
            else
            {
                pre[i] = pre[i-1] + d[i];
            }
        }

        for (int i = left; i <= right; i++)
        {
            if (pre[i] <= 0)
            {
                return false;
            }
        }

        return true;
    }
};