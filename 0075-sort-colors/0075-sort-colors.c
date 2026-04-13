

void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}

int partition(int *a, int l, int h)
{
    int i = l;
    int j = h;
    int pivot = a[l];

    while(i <= j)
    {
        while(i <= h && a[i] <= pivot)
        {
            ++i;
        }

        while(j >= l && a[j] > pivot)
        {
            --j;
        }

        if (i <= j)
        {
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[l], &a[j]);
    return j;
}


void qs(int *arr, int l, int h)
{
    if (l < h)
    {
        int pivot = partition(arr, l, h);
        qs(arr, l, pivot - 1);
        qs(arr, pivot + 1, h);
    }
}



void sortColors(int* nums, int numsSize) {
    int l = 0;
    int h = numsSize - 1;
    qs(nums, l, h);
}