//Check type of the charecter
#include<stdio.h>

int main()
{
    char ch;
    printf("char: ");
    ch = getchar();

    ((ch >= 48)&&(ch <= 57))?printf("Numeric Charecter.\n"):0;
    ((ch >= 65)&&(ch <= 96))?printf("Upper Case English Alphabet.\n"):0;
    ((ch >= 'a')&&(ch <= 'z'))?printf("Lower case English Alphabet.\n"):printf("Special Charecter.\n");

    return 0;
}
