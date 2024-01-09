#include <stdio.h>

void main(){
    printf("%zu \n", sizeof(unsigned char));
    unsigned char a = 1;
    printf("a is %d\n",a);
    printf("交%d\n", a & 0x80);
    printf("%d\n" ,~0x80);
    printf("%#X\n", ~0x80);
}