int compare(int x, int y)
{
    return (x > y) ? x : y;
}


double findMaxAverage(int* nums, int numsSize, int k) {
    
    if (nums == NULL || k > numsSize)
    {
        return -1;
    }

    int l = 0;
    int r = k - 1;
    int max_total = 0;
    int total = 0;

    for (int i = 0; i < k; i++)
    {
        max_total += nums[i];
    }

    total = max_total;

    while (r < numsSize - 1)
    {
        total -= nums[l++];
        total += nums[++r];
        max_total = compare(total, max_total);
    }

    return (double) max_total / k;
}
