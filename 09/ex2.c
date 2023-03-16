#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){
    int a=0, i=1;
    int count1=0, count2=0, count3=0;

    srand((unsigned) time(NULL));

    for(i=1; i<=100; i++){
        a=(int)(rand()/(RAND_MAX+1.0)*10)+1;

        if(a<=3){
            count1=count1+1;
        }else if(a<=9){
            count2=count2+1;
        }else{
            count3=count3+1;
        }
    }

    printf("Very lucky: %d％\n", count1);
    printf("Lucky: %d％\n", count2);
    printf("Unlucky: %d％\n", count3);

    return 0;
}