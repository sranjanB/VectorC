//Test the supplied integer is palindrome or not.

#include<stdio.h>

int main()
{
    int data, rev, odata;
    rev = 0;

    printf("Enter: ");
    scanf("%d",&data);
    odata= data;

    while(data){
        rev = data%10 + rev*10;
        data /= 10;
    }
    printf("%d = %d\n",odata, rev);
    if(odata == rev){
        printf("Palindrome.\n");
    }
    else{
        printf("Normal.\n");
    }

    return 0;
}
