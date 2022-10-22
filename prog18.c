// Conditional Operator
#include<stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter (a b): ");
    scanf("%d %d",&a, &b);

    (a<b)?puts("a<b"):0;
    (a>b)?puts("a>b"):0;
    (a==b)?puts("a==b"):0;

    return 0;
}

