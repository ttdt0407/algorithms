/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {

    int max = 0;
    bool *A = (bool *)calloc(candiesSize, sizeof(bool));

    for (int i = 0; i < candiesSize; i++)
    {
        if (candies[i] > max)
        {
            max = candies[i];
        }
    }

    for (int i = 0; i < candiesSize; i++)
    {
        if ((candies[i] + extraCandies) >= max)
        {
            A[i] = true;
        }
        else
        {
            A[i] = false;
        }
    }

    *returnSize = candiesSize;

    return A;
}