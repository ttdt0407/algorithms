class Solution {
public:
    int mySqrt(int x) {
        long long ans = 0;
        for (long long i = 0; i <= x; i++)
        {
            ans = i * i;
            if (ans >= x)
            {
                if (ans > x)
                {
                    ans = i - 1;
                    break;
                }
                else
                {
                    ans = i;
                    break;
                }
            }
        }

        return ans;
    }
};