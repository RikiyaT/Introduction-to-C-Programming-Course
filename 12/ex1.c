#include<stdio.h>
#include<string.h>

int main(void){
    char a[100];
    char b[100];

    printf("Inout your first name: ");
    scanf("%s", a);
    printf("Inout your last name: ");
    scanf("%s", b);

    printf("Your name is %s %s.\n", a, b);

    return 0;
}