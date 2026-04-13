/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int comparator(void const *x, void const *y)
{
    int *a = (int *)x;
    int *b = (int *)y;

    return ((*a)*(*a) - (*b)*(*b));
}


int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    
    qsort(nums, numsSize, sizeof(int), comparator);

    int *pA = (int *)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        pA[i] = nums[i] * nums[i];   
    }
    *returnSize = numsSize;

    return pA;
}