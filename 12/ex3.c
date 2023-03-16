#include<stdio.h>
#include<string.h>

int main(void){
    char str[]="C programming";
    char *p;

    p=str;

    while(*p!='\0'){
        putchar(*p);
        putchar('\n');
        p++;
    }
}