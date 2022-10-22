// Sum of digit of a given integer
#include<stdio.h>
int main()
{
    int data, sum, digit;
    sum = 0;
    printf("Enter: ");
    scanf("%d",&data);
    
    while(data){
        digit = data%10;
        sum += digit;
        data /= 10;
    }
    printf("sum: %d\n",sum);
    return 0;
}
