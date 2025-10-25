#include <stdio.h>
int main()
{
    int n, i;
    printf("Input size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOutput:\n");
    printf("Output: ");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
    return 0;
}