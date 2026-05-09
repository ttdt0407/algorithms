class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        char res = -1;
        auto it = upper_bound(letters.begin(), letters.end(), target);

        if (it != letters.end())
        {
            res = *it;
        }
        else
        {
            res = *letters.begin();
        }

        return res;
    }
};