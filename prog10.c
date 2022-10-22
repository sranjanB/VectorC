/* Data Exchange Basic. */
#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter(a b): ");
    scanf("%d %d",&a, &b);

    printf("a = %2d b = %2d\n",a, b);
    c = a;
    a = b;
    b = c;

    printf("a = %2d b = %2d\n", a, b);
    return 0;
}
