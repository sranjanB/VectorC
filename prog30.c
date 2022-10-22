//Find the highest and lowest digit in a supplied integer

#include<stdio.h>

int main()
{
    unsigned long int data;
    short int hi, lo, digit;

    printf("Enter: ");
    scanf("%ld",&data);

    hi = lo = data % 10;
    data /= 10;

    while(data){
        digit = data%10;
        if (digit > hi)
            hi = digit;
        else if (digit < lo)
            lo = digit;
        data /= 10;
    }

    printf("High: %d\t\tLow: %d\n",hi,lo);
    return 0;
}
