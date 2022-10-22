//Count the Digit
#include<stdio.h>
int main(){
    unsigned int data;
    int count;
    count = 0;

    printf("Enter: ");
    scanf("%d",&data);

    while(data){
        count++;
        data /= 10;
    }
    printf("Total: %d\n",count);
return 0;
}
