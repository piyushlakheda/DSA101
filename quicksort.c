#include <stdio.h>
void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partion(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[], int low, int high)
{
    int partionIndex;

    if (low < high)
    {
        partionIndex = partion(arr, low, high);
        quickSort(arr, low, partionIndex - 1);
        quickSort(arr, partionIndex + 1, high);
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
    quickSort(arr, 0, n - 1);
    printarray(arr, n);

    return 0;
}