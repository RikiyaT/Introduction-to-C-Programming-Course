#include<stdio.h>

#define SIZE 20

int main(void){

    int score[SIZE];
    int max=0;
    int maxi;
    
    for(int i=0; i<SIZE; i++){
        score[i]=(i*83+11)%101;
        printf("Score[%d]: %d\n", i, score[i]);
        if(score[i]>max){
            max=score[i];
            maxi=i;
        }
    }
    
    printf("Highest score: Score[%d]= %d\n", maxi, max);

    return 0;
}