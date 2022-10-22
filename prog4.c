/* Signed and Unsigned int.*/

#include<stdio.h>

int main()
{
    char x  =127; // 0111 1111 127
    x = x+1; // 1000 0000 -128
    printf("x = %c\n",x);
    unsigned char X = 200; // 1100 1000
    char y;
     y = X;
     printf("ch = %c\n",y);

     unsigned short int a = 0,b;
     b = a-1;
     printf("a = %hu b = %hu\n",a,b);

     signed short int s;
     unsigned short int S;

     S = 0;
     printf("S = %hu\n",S);
     s = S - 1;
     printf("s = %hu\n",s);

    return 0;
}
