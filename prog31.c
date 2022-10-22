//Print where sum of digit should be 9 in reduced from eg: 3636

#include<stdio.h>

int digitSum(int);

int main()
{
    int ddata, dsum, data = 9999;

    while(data){
        ddata = data;
        dsum  = digitSum(ddata);
        if (digitSum(dsum) == 9){
            printf("9 : %d\n",data);
        }
        data--;
    }
    
    return 0;
}

int digitSum(int ddata)
{
    int digit,dsum = 0;

    while(ddata)
    {
        digit = ddata % 10;
        dsum += digit;
        ddata /= 10;
    }
    return dsum;
}
