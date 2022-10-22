//Count pair of set bits in a number

#include<stdio.h>

int main()
{
        int data,bit,nbit, setpair = 0;

        printf("Enter: ");
        scanf("%d",&data);

        for(int i=0;i < 31;i++)
        {
            bit = (data>>i)&1;
            nbit = (data>>(i+1))&1;
            if((bit+nbit)==2){
                setpair++;
            }
        }
        printf("set pair: %d\n",setpair);
        return 0;
}
