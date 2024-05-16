#include<stdio.h>
#include<stdlib.h>

int main(){

    //File handler declaration
    FILE* spTemps;

    //"r" -> read
    if((spTemps = fopen("temp.txt", "r")) == NULL){
        printf("\aError opening temp.txt\n");
        exit(100);
    }

    // if open performs io

    if(fclose(spTemps) == EOF){
        printf("\aError closing temp.txt\n");
        exit(102);
    }

    return 0;
}