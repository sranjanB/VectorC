/* To test the supplied bit in the given data.*
* The bit position and data need to be given at*
* run time input. */
#include<stdio.h>

int main()
{
    int data, bit;
    printf("Enter data: ");
    scanf("%d",&data);
    INPUT:  printf("Enter Bit Position(0 to %lu): ",sizeof(int)*8-1);
            scanf("%d", &bit);
            if(bit < 0 || bit > 31){
                printf("Invalid Bit supplied.\n");
                goto INPUT;
            }

    printf("Bit: %d in %d is %d.\n",bit, (data>>bit)&1);

    return 0;
}
