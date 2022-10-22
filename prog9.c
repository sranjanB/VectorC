/* Operator Precedence. */

#include<stdio.h>

int main()
{
    int a = 10, b = 5, c = 20, d = 2, e, f;
    e = a+b-c*6/d+100;
    /*f = a*b/a=b;*/
    printf("e = %d\n",e);
   /* printf("f = %d\n",f);*/

    return 0;
}
