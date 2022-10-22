/* Explicit Conversion. */

#include<stdio.h>


int main()
{
    int a  =10;
    float b = 3.0;
    float c, d;

    c = a/b;
    d = a%(int)b;

    printf("c = %f d = %f\n",c, d);

    return 0;
}
