#include<stdio.h>

double ParamA=0.0, ParamB=0.0;

double linear(double x){
    return ParamA*x+ParamB;
}

int main(void){

    ParamA=5.0;
    ParamB=3.2;

    printf("Result is %f.\n", linear(1.2));
    printf("Result is %f.\n", linear(2.0));

    return 0;
}