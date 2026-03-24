#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int size)
{
    int i, j, min_idx, temp;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

int main(int argc, char *argv[])
{
    int size, i;
    int *arr;

    if (argc != 2)
    {
        printf("Usage: %s <size>\n", argv[0]);
        return 1;
    }

    size = atoi(argv[1]);
    arr = malloc(size * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (i = 0; i < size; i++)
    {
        arr[i] = size - i;
    }

    selection_sort(arr, size);

    printf("First value: %d\n", arr[0]);
    printf("Last value: %d\n", arr[size - 1]);

    free(arr);
    return 0;
}
