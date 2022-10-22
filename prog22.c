// Number of bit set in a supplied integer

#include<stdio.h>

int main()
{
    int data, setbit,sample;
    setbit = 0;

    printf("Enter:  ");
    scanf("%d",&data);
    
    for(int i = 0;i < 32 ;i++){
        sample = (data>>i)&1;
        printf("%d ",sample);
        if (sample == 1){
            setbit++;
        }
    }

    printf("\nSet Bit: %d\n",setbit);

    return 0;
}
