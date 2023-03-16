#include<stdio.h>
#include<math.h>

double max(double a, double b){
    if (a<b){
        return b;
    }
    else {
        return a;
    }
}

double min(double a, double b){
    if (a<b){
        return a;
    }
    else {
        return b;
    }
}

int main(void){
    double x, c, d;

    printf("input value x: ");
    scanf("%lf", &x);

    c=max(x, -x);
    c=max(c, x*x);
    c=max(c, sqrt(fabs(x)));
    d=min(x, -x);
    d=min(d, x*x);
    d=min(d, sqrt(fabs(x)));

    printf("Max is %f.\n", c);
    printf("Min is %f.\n", d);

    return 0;

}