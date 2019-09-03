//
// Created by Administrator on 2019/9/3 0003.
//
#include <stdio.h>
int main(){
    unsigned char k=0;
    int i=-1;
    short a=-12345;
    char *p;
    printf("sizeof(i)=%d\n", sizeof(i));
    printf("sizeof(a)=%d\n", sizeof(a));

    p=(char*)&a;
    for (k=0;k< sizeof(a);k++){
        printf("%x ",*(p++));
    }
    printf("\n")

    p=(char*)&i;
    for(k=0;k< sizeof(i);k++){
        printf("%x ",*(p++));

    }

    printff("\n");
    printf("i=%u  | %d\n",i,i);
    printf("a=%u | %d\n",a,a);

    printf("res=%d\n",(-1>0u ? 1:0));
    printf("hello world\n");

    return 0;
}