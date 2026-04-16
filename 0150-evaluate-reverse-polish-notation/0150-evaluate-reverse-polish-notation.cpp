class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        int n = tokens.size();
        stack<long long> st;
        for (int i = 0; i < n; i++)
        {
            if (st.empty() || (tokens[i] != "+" && tokens[i] != "-"
            && tokens[i] != "*" && tokens[i] != "/"))
            {
                int x = stoi(tokens[i]);
                st.push(x);
            }
            else
            {
                string s = tokens[i];
                if (s == "+")
                {
                    int op2 = st.top();
                    st.pop();
                    int op1 = st.top();
                    st.pop();
                    long long temp = op1 + op2;
                    st.push(temp);
                }
                else if (s == "-")
                {
                    int op2 = st.top();
                    st.pop();
                    int op1 = st.top();
                    st.pop();
                    long long temp = op1 - op2;
                    st.push(temp);
                }
                else if (s == "*")
                {
                    int op2 = st.top();
                    st.pop();
                    int op1 = st.top();
                    st.pop();
                    long long temp = op1 * op2;
                    st.push(temp);
                }
                else 
                {
                    int op2 = st.top();
                    st.pop();
                    int op1 = st.top();
                    st.pop();
                    long long temp = op1 / op2;
                    st.push(temp);
                }
            }
        }

        return st.top();
    }
};