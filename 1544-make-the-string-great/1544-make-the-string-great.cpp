class Solution {
public:
    string makeGood(string s) {
        string st;
        for (int i = 0; i < s.size(); i++)
        {
            if (st.empty())
            {
                st.push_back(s[i]);
            }
            else
            {
                if ((s[i] == st.back() + 32) || (s[i] == st.back() - 32))
                {
                    st.pop_back();
                }
                else
                {
                    st.push_back(s[i]);
                }
            }
        }
        return st;
    }
};