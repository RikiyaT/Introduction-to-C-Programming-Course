#include<stdio.h>
#include<ctype.h>

int main(void){
    char first[100];
    char last[100];

    printf("Input your first name: ");
    scanf("%s", first);
    printf("Input your last name: ");
    scanf("%s", last);

    char *pf = first;
    char *pl = last;

    while(*pf!='\0'){
        int a;
        a=toupper(*pf);
        putchar(a);
        putchar('\n');
        pf++;
    }    

    while(*pl!='\0'){
        int b;
        b=toupper(*pl);
        putchar(b);
        putchar('\n');
        pl++;
    }

    return 0;

}