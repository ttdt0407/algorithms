int lengthOfLongestSubstring(char* s) {
    

    if (s == NULL)
    {
        return -1;
    }

    int l = 0;
    int r = 0;

    int A[128];
    int max = 0;

    for (int i = 0; i < 128; i++)
    {
        A[i] = -1;
    }
    while (s[r] != '\0')
    {
        int idx = A[s[r]];

        if (idx != -1 && idx >= l)
        {
            l = idx + 1;
        }

        if (max < (r - l + 1))
            max = r - l + 1;

        A[s[r]] = r; 
        ++r;
    }

    return max;
}