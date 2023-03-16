#include<stdio.h>

void swap(int *x, int *y){
    int c;
    
    c=*x;
    *x=*y;
    *y=c;
}

int main(void){
    int x=3, y=7;

    printf("Before swapping \n");
    printf("x: %d, y:%d\n", x,y);

    swap(&x,&y);

    printf("After swapping\n");
    printf("x: %d, y:%d\n",x,y);

    return 0;
}