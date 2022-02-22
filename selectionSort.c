#include <stdio.h>

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void SelectionSort(int *arr, int n)
{
    int min, temp;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
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
    SelectionSort(arr, n);
    printarray(arr, n);

    return 0;
}