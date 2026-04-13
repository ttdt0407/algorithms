bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    
    int r1 = 0;
    int c1 = 0;
    int r2 = 0;
    int c2 = 0;

    while(r1 < word1Size && r2 < word2Size)
    {
        if (word1[r1][c1] == '\0')
        {
            ++r1;
            c1 = 0;
        }

        if (word2[r2][c2] == '\0')
        {
            ++r2;
            c2 = 0;
        }

        if (r1 >= word1Size || r2 >= word2Size)
        {
            break;
        }

        if (word1[r1][c1] != word2[r2][c2])
        {
            return false;
        }

        ++c1;
        ++c2;
    }

    return r1 >= word1Size && r2 >= word2Size;
}   