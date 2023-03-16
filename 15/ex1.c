#include<stdio.h>
#include<math.h>

int main(void){
    int r;
    double s, c;

    printf("Input radius: ");
    scanf("%d", &r);

    c=2*(double)r*M_PI;
    s=(double)r*(double)r*M_PI;

    printf("Circumference: %.3f.\n", c);
    printf("Area: %.3f.\n", s);

    return 0;
}