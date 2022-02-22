#include <stdio.h>
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void InsertionSort(int *arr, int n)
{
    int key, j;
    for (int i = 1; i <= n - 1; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[100];
    int n;

    printf("size of array");
    scanf("%d", &n);
    printf("Enter array");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }

    printarray(arr, n);
    InsertionSort(arr, n);
    printarray(arr, n);

    return 0;
}