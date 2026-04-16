class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ve;
        int n = gain.size();
        ve.resize(n + 1);

        ve[0] = 0;
        for (int i = 1 ; i <= n; i++)
        {

            ve[i] = ve[i-1] + gain[i-1];
        
        }

        sort(ve.begin(), ve.end());
        return *(ve.rbegin());

    }
};