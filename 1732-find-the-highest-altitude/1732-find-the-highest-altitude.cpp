class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ve;
        int n = gain.size();
        ve.resize(n + 1);

        ve[0] = 0;
        int max = -1e9;
        for (int i = 1 ; i <= n; i++)
        {

            ve[i] = ve[i-1] + gain[i-1];
            if (ve[i] > max)
            {
                max = ve[i];
            }
        }

        return max;

    }
};