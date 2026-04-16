class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++)
        {
            while(!st.empty() && (temperatures[i] > temperatures[st.top()])) {
                int top = st.top();
                ans[top] = i - top;
                st.pop();
            }

            st.push(i);
        }
        return ans;
    }
};