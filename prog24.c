//All charecter Decimal Equivalent
#include<stdio.h>

int main()
{
    char ch;

    //printf("Enter: ");
    //ch = getchar();

    for(int i = 31; i<127;i++){
        ch = i;
        printf("| %3d : %c |",i, ch);
        if(i%10 == 0){
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
