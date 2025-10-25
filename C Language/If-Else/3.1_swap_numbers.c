// Swap using third variable-
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Original values: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping using third variable: a = %d, b = %d\n", a, b);
    return 0;
}