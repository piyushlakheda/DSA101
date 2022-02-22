#include <stdio.h>

void printarray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void BubbleSort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    BubbleSort(arr, n);
    printarray(arr, n);
    return 0;
}
