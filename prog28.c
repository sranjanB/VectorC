//Count the number of odd digit in a supplied integer.
#include<stdio.h>

int main()
{
    int data,digit,count;
    count = 0;
    printf("Enter: ");
    scanf("%d",&data);

    while(data){
        digit = data%10;
        data /= 10;
        if (digit%2!=0){
        count++;}
    }

    printf("Odd Total: %d\n",count);
}
