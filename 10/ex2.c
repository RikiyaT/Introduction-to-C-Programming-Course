#include<stdio.h>
#include<math.h>

double circle(double r){
    double s;
    s=r*r*M_PI;
    return s;
}

double linear(int x){
    double y;
    y=2.5*x+1.0;
    return y;
}

int main(void){
    double a[3];
    double b[3];
    int i=0;

    a[0]=linear(0);
    a[1]=linear(1);
    a[2]=linear(2);

    b[0]=circle(a[0]);
    b[1]=circle(a[1]);
    b[2]=circle(a[2]);

    for(i=0; i<3; i++){
        printf("a[%d]: %f\n", i, a[i]);
        printf("b[%d]: %f\n", i, b[i]);
    }

    return 0;
}