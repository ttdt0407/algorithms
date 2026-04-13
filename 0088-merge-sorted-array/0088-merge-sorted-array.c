
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    
    int i = 0;
    int j = m;

    for (int k = m; k < m + n; k++)
    {
        nums1[k] = nums2[k-m];
    }

    while (j < (m + n))
    {
        if (nums1[i] < nums2[j])
        {
            i++;
            j++;
        }
        else
        {
            swap(&nums1[i], &nums2[j]);
            i++;
            j++;
        }
    }

}