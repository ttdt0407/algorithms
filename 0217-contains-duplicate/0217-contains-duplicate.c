

int comparator(void const *p, void const *q)
{
    int *x = (int *)p;
    int *y = (int *)q;

    if (*x < *y)  return -1;
    else          return 1;
}


bool containsDuplicate(int* nums, int numsSize) {
    
    qsort(nums, numsSize, sizeof(int), comparator);

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] == nums[i - 1]) return true;
    }

    return false;
}