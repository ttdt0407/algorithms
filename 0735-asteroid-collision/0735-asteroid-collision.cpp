class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> ans;

        for (int x :  asteroids)
        {
            int flag = 0;
            while(x < 0 && !ans.empty() && ans.back() > 0)
            {
                if (abs(x) > ans.back())
                {
                    ans.pop_back();
                }
                else if (abs(x) == ans.back())
                {
                    ans.pop_back();
                    flag = 1;
                    break;
                }
                else {
                    flag = 1;
                    break;
                }
            }

            if (!flag)
            {
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};