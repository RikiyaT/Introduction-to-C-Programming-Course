#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    double x=0.0, y=0.0, r=0.0, error=0.0;
    int i=0, N=0, count=0;

    printf("How many trials? ");
    scanf("%d", &N);

    srand((unsigned) time(NULL));

    for(i=1; i<=N; i++){
        x=(double)(rand()/(RAND_MAX+1.0)*1.0);
        y=(double)(rand()/(RAND_MAX+1.0)*1.0);

        if(y<sin(M_PI*x)){
            count=count+1;
        }
    }

    r=(double)count/(double)N;
    error=r-(2/(double)M_PI);
    printf("Result is %.6f (Error: %.6f)\n", r, error);

    return 0;
}