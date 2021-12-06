
#include <stdio.h>
#include <stdlib.h>

long int _mergeSort(long int arr[], long int temp[],
            long int left, long int right);
long int merge(long int arr[], long int temp[],
        long int left, long int mid,
        long int right);


long int mergeSort(long int arr[], long int array_size)
{
    long int* temp = (long int*)malloc(sizeof(long int) * array_size);
    return _mergeSort(arr, temp, 0,
                    array_size - 1);
}


long int _mergeSort(long int arr[], long int temp[], long int left, long int right)
{
    long int mid, inv_count = 0;
    if (right > left)
    {
       
        mid = (right + left) / 2;

        
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}


long int merge(long int arr[], long int temp[], long int left, long int mid,
        long int right)
{
    long int i, j, k;
    long int inv_count = 0;

    i = left;
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

        
            inv_count = inv_count + (mid - i);
        }
    }

    
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    
    while (j <= right)
        temp[k++] = arr[j++];


    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}


int main()
{
    long int t;
    scanf("%ld", &t);
    while(t > 0){
        long int n;
        scanf("%ld",&n);
        long int arr[n];
        for(long int i = 0; i<n; i++)
        {
            scanf("%ld",&arr[i]);
        }
        printf("%ld\n", mergeSort(arr, n));
        t -= 1;
    }
    return 0;
}
