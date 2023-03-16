#include<stdio.h>


int main(void){

    int score[4];

    for(int i=0; i<=2; i++){
        printf("Input score Score[%d]: ", i);
        scanf("%d", &score[i]);
    }

    double total=score[0]+score[1]+score[2];
    double average=total/3;

    printf("Total: %.0f, Average: %.2f\n", total, average);

    return 0;
}