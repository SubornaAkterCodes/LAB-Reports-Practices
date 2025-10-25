// Swap using bitwise XOR-
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Original values: a = %d, b = %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping using bitwise XOR: a = %d, b = %d\n", a, b);
    return 0;
}