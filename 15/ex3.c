#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int roll(){
    return (int) (rand()/(RAND_MAX +1.0)*6)+1;
}

int main(){
    srand((unsigned) time(NULL));
    int a=0,b=0;
    for (int i=0;i<10;i++){
        int A=roll(),B=roll();
        if (A==6){
            a++;
        }
        if (B==6){
            b++;
        }
        printf("A君: %d,B君: %d\n",A,B);
    }
    if (a>b){
        printf("A君が多く6を出した。\n");
    }else if (a<b){
        printf("B君が多く6を出した。\n");
    }else{
        printf("6は同数出した。\n");
    }
    printf("A君: %d回,B君: %d回\n",a,b);
    return 0;
}
