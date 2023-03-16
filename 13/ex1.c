 #include<stdio.h>

 int main(void){
     FILE *out;
     int a, i, j;
     out = fopen("kuku.txt", "w");
    for(i=1; i<10; i++){
        for(j=1; j<10; j++){
            a=i*j;
            fprintf(out, "%2d\t", a);
        }
        fprintf(out, "\n");
    }
    fclose(out);

    return 0;
 }