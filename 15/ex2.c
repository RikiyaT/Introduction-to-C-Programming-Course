#include<stdio.h>

int main(void){
    int a;
    printf("input value: ");
    scanf("%d", &a);

    if(a%2==0 && a%3==0){
        printf("Multiple of 2: yes   Multiple of 3: yes\n");
    }
    else if(a%2==0 && a%3!=0){
        printf("Multiple of 2: yes   Multiple of 3: no\n");
    }
    else if(a%2!=0 && a%3==0){
        printf("Multiple of 2: no    Multiple of 3: yes\n");
    }
    else{
        printf("Multiple of 2: no    Multiple of 3: no\n");
    }

    return 0;
}