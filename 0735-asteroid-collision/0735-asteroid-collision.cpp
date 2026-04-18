class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;

        for (int x : asteroids)
        {
            if (ans.empty())
            {
                ans.push_back(x);
            }
            else if (x > 0)
            {
                ans.push_back(x);
            }
            else
            {
                int flag = 0;
                while(!ans.empty() && ans.back() > 0)
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
                    else
                    {
                        flag = 1;
                        break;
                    }
                }
                if (!flag)
                {
                    ans.push_back(x);
                }
            }
        }

        return ans;
    }
};