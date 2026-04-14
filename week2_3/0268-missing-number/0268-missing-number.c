
int missingNumber(int* nums, int numsSize) {
    int A[10004];
    for (int i = 0; i < 10004; i++)
    {
        A[i] = 0;
    }
    
    for (int i = 0; i < numsSize; i++)
    {
        A[nums[i]] = 1;
    }

    int res = 0;
    for (int i = 0; i <= numsSize; i++)
    {
        if (A[i] == 0)
        {
            res = i;
            break;
        }
    }

    return res;
}