void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int comparator (const void *p, const void *q)
{
    int *x = (int *)p;
    int *y = (int *)q;

    if (*x < *y)    return 1;
    else            return -1;
}
int thirdMax(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), comparator);

    if (numsSize < 3)
    {
        return nums[0];
    }
    else
    {
        int countNums = 1;
        int idx = 1;

        while (countNums < 3 && idx < numsSize)
        {
            if (nums[idx] != nums[idx - 1])
            {
                ++countNums;
            }
            ++idx;
        }

        if (countNums < 3)  return nums[0];
        else                return nums[--idx];
    }
}