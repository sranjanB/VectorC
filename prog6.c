/* Assignment Operator */

#include<stdio.h>

int main()
{
    float a = 45;
    int b = 56;
    double c;
    c = a = b;
    
    printf("a = %f\n",a);
    printf("b = %d\n",b);
    printf("c = %lf\n",c);

    return 0;
}
