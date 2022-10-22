// Logical Operator
#include<stdio.h>

int main()
{
    int a = -3, b = 0, c = 5, d = -1;
    printf("a = %d b = %d c = %d d = %d\n",a, b, c, d);
    d = (a=b)||(b=c)||(c=a);
    printf("a = %d b = %d c = %d d = %d\n",a,b,c,d);

    return 0;
}
