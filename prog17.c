//sizeof (keyword operator)
#include<stdio.h>

int main()
{
    int a = -1;
    char c = 'a';
    float b = 1.0;

    printf("sizeof(-1): %ld\n",sizeof(a));
    printf("sizeof('a'): %ld\n",sizeof(c));
    printf("sizeof(1.0): %ld\n",sizeof(b));
    printf("sizeof(12345): %ld\n",sizeof(12345));
    printf("sizeof('12345'): %ld\n",sizeof('12'));
    printf("sizeof(\"12345\"): %ld\n",sizeof("12345"));

    return 0;
}
