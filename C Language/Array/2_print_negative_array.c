#include <stdio.h>
int main()
{
    int n = 10;
    int arr[n];
    int i, first = 1;
    printf("Input array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOutput:\n");
    printf("Output: ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (!first)
            {
                printf(", ");
            }
            printf("%d", arr[i]);
            first = 0;
        }
    }
    printf("\n");
    return 0;
}