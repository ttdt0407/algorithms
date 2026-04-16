class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int res = 0;
        int start = 0;

        for (int g : gain)
        {
            start += g;
            res = max(start, res);
        }
        return res;

    }
};