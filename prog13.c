/* float double comparison. */
#include<stdio.h>

int main()
{
    float a = 12.5;
    double b = 12.5;
    int c;

    printf("%d\n",a == b);
    a=23.4;
    b=23.4;
    printf("%d\n",a==b);

    return 0;
}
