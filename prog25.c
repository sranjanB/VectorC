//Print Binary
#include<stdio.h>
void printBinary(char);

int main()
{
    unsigned char ch = 0;
    
    LOOP: printf(" <:%d:> %c\n",ch ,ch);
          ch++;
          printBinary(ch);
          if (ch<=127)
          goto LOOP;
    return 0;
}

void printBinary(char v){
    int bits;
    bits = 7;
    LOOP:if(bits>=0){
            printf("%d",(v>>bits)&1);
            bits--;
            goto LOOP;
            }
    return ;
    
}
