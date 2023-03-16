#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *in;
     in = fopen("result.txt", "w");
    int a, b, i, j, scan;
    FILE *out=fopen("kuku2.txt", "r");
    if(out==NULL){
        fprintf(stderr, "cannot open file 'kuku2.txt'");
        exit(1);
    }
    for(i=1; i<10; i++){
        for(j=1; j<10; j++){
            scan = fscanf(out, "%d", &a);
            if(scan!=1){
                fprintf(stderr, "cannot read file");
                exit(1);
            }
            b=i*j;
            if(a==b){
                fprintf(in, "%2d-\t", a);
            }
            if(a!=b){
                fprintf(in, "%2dX\t", a);
            }
        }
        fprintf(in, "\n");
    }

    fclose(in);

    return 0;
}