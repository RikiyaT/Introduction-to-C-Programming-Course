#include<stdio.h>
#include<stdlib.h>

int main(void){
    int a, i, j, scan;
    FILE *out=fopen("kuku", "r");
    if(out==NULL){
        fprintf(stderr, "cannot open file 'kuku'");
        exit(1);
    }
    for(i=1; i<10; i++){
        for(j=1; j<10; j++){
            scan = fscanf(out, "%d", &a);
            if(scan!=1){
                fprintf(stderr, "cannot read file");
                exit(1);
            }
            printf("%4d", a);
        }
        printf("\n");
    }

    return 0;
}