char findTheDifference(char* s, char* t) {

    if (s == NULL || t == NULL)
    {
        return -1;
    }


    int A[26];
    int lens = strlen(s);
    int lent = lens + 1;

    char res = 0;

    for (int i = 0; i < 26; i++)
    {
        A[i] = 0;
    }

    for (int i = 0; i < lens; i++)
    {
        int idx1 = s[i] - 97;

        A[idx1]++;
    }

    for (int i = 0; i < lent; i++)
    {
        int idx2 = t[i] - 97;

        if (--A[idx2] < 0)
            res = t[i];
    }

    return res;
}