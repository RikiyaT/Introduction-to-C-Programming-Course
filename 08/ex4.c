#include<stdio.h>

#define SIZE 3
#define SUBJ 4

int main(void){

    int score[SIZE][SUBJ];
    int sum0=0, sum1=0, sum2=0;
    int avg0=0, avg1=0, avg2=0, avg3=0;
    int i, j;


    for(i=0; i<SIZE; i++){
        for(j=0; j<SUBJ; j++){
            printf("Student No.%d's score on test %d: ", i+1, j+1);
            scanf("%d", &score[i][j]);
            if(i==0){
                sum0=sum0+score[i][j];
            }else if(i==1){
                sum1=sum1+score[i][j];
            }else{
                sum2=sum2+score[i][j];
            }
        }
    }

    for(j=0; j<SUBJ; j++){
        for(i=0; i<SIZE; i++){
            if(j==0){
                avg0=avg0+score[i][j];
            }else if(j==1){
                avg1=avg1+score[i][j];
            }else if(j==2){
                avg2=avg2+score[i][j];
            }else{
                avg3=avg3+score[i][j];
            }
        }
    }
    
    for(i=0; i<SIZE; i++){
        if(i==0){
            printf("Total of Student No.1 is %d\n", sum0);
        }if(i==1){
            printf("Total of Student No.2 is %d\n", sum1);
        }if(i==2){
            printf("Total of Student No.3 is %d\n", sum2);
        }
    }
    for(j=0; j<SUBJ; j++){
         if(j==0){
            printf("Average of test 1 is %d\n", avg0/3);
        }if(j==1){
            printf("Average of test 2 is %d\n", avg1/3);
        }if(j==2){
            printf("Average of test 3 is %d\n", avg2/3);
        }if(j==3){
            printf("Average of test 4 is %d\n", avg3/3);
        }
    }    
    return 0;
}