#include<stdio.h>
#include<math.h>

double formu(double x){
    double y;
    y= (1/sqrt(M_PI*2)*exp(-pow(x,2)/2));
    return y;
}

int main(void){
    double a[40];
    double i;
    i= -10.0;

    for(int z=0; z<=40; z+=1){
        a[z]=formu(i);

        printf("Answer: f(x) = %lf\n", a[z]);
        i+=0.5;
    }
    return 0;
}