//To convert the case of supplied charecters.
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    puts("Enter: ");
    ch = getchar();
    ch = isupper(ch)?ch+32:ch-32;
    putchar(ch);
    puts(" ");
    return 0;
}

