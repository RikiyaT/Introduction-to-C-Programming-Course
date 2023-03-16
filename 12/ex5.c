#include<stdio.h>
#include<string.h>

int main(void){

    char first[100];
    char last[100];

    printf("Input your first name: ");
    scanf("%s", first);
    printf("Input your last name: ");
    scanf("%s", last);

    printf("Before: %s %s\n", first, last);

    int length1=strlen(f);
    int length2=strlen(l);

    char first1[length1];
    char last1[length2];

    char *pf, *pf1, *pl, *pl1;

    pf=first;
    pf1=first1;
    pl=last;
    pl1=last1;

    while(*pf!='\0'){
        pf++;
    }

    while(pf>first){
        pf--;
        *pf1=*pf;
        pf1++;
    }
    while(*pl!='\0'){
        pl++;
    }
    while(pl>last){
        pl--;
        *pl1=*pl;
        pl1++;
    }

    *pf1='\0';
    *pl1='\0';

    printf("After: %s %s\n", pf1, pl1);

    return 0;

}