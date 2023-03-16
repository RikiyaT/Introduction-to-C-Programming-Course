#include <stdio.h>

#define SIZE 3

int main(void){

    int Score[SIZE];
    int sum=0, i=0;
    double avg=0;

    for(i=0; i<SIZE; i++){
        printf("Input score Score[%d]: ", i);
        scanf("%d", &Score[i]);
    }

    for(i=0; i<SIZE; i++){
        sum=sum+Score[i];
    }

    avg=(double)sum/3;

    printf("Total: %d, Average: %.2f\n", sum, avg);

    return 0;
}