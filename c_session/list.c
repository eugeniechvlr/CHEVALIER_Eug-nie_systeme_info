#include <stdio.h>

int find(int arr[], int size, int target)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int array[10] = {1, 5, 6, 9, 12, 15, 20, 25, 30, 40};
    int target = 15;
    int index = find(array, 10, target);

    if (index != -1)
        printf("Value %d found at index %d\n", target, index);
    else
        printf("Value %d not found\n", target);

    return 0;
}
