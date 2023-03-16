#include<stdio.h>
#include<math.h>
#include<string.h>

struct area{

    double x1, x2, y1, y2;
    double s;

};

struct area cal(struct area a){
    a.s=fabs((a.x1*a.y2)-(a.x2*a.y1))/2;

    return a;
};

int main(void){
    struct area s1;

    printf("Input x1 (double): ");
    scanf("%lf", &s1.x1);
    printf("Input y1 (double): ");
    scanf("%lf", &s1.y1);
    printf("Input x2 (double): ");
    scanf("%lf", &s1.x2);
    printf("Input y2 (double): ");
    scanf("%lf", &s1.y2);

    s1 = cal(s1);

    printf("Area of triangle: %.3f\n", s1.s);

    return 0;

}