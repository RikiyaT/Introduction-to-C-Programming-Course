#include<stdio.h>

struct student{
    char name[10];
    int score;
};

int main(void){

    struct student a, b;

    printf("Please input name: ");
    scanf("%s", a.name);
    printf("Please input score: ");
    scanf("%d", &a.score);

    b=a;

    printf("a.name: %s. a.score: %d\n", a.name, a.score);
    printf("b.name: %s. b.score: %d\n", b.name, b.score);

    return 0;
}