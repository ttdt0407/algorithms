bool canConstruct(char* ransomNote, char* magazine) {
    
    const int arr_len = 26U;
    int arr[arr_len];
    int len_magazine = strlen(magazine);
    int len_ransomNote = strlen(ransomNote);

    for (int i = 0; i < arr_len; i++)
    {
        arr[i] = 0;
    }

    for (int i = 0; i < len_magazine; i++)
    {
        if (magazine[i] >= 'a' && magazine[i] <= 'z')
        {
            char idx1 = magazine[i] - 97;
            arr[idx1]++;
        }
    }

    for (int i = 0; i < len_ransomNote; i++)
    {
        if (ransomNote[i] >= 'a' && ransomNote[i] <= 'z')
        {
            char idx2 = ransomNote[i] - 97;
            if (--arr[idx2] < 0)
                return false;
        }
    }

    return true;
}