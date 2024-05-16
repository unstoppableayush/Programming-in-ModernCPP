#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE* spText; //stream
    int c, closeStatus;

    printf("This program copies input to a file.\n");

    if(!(spText = fopen("new_text_file.txt", "w"))){

        printf("Error opening new_text_file.txt for writing");
        return(1);
    }

    //if open

    while((c = getchar()) != EOF){  //read characters from stdin. Use ctrl Z+
    - for EOF
        fputc(c,spText);  //write characters to file
    }

    closeStatus = fclose(spText);
    if(closeStatus == EOF){
        printf("error closing file\a\n");
        return 100;
    }

    //if closed

    printf("\n\n Your file is completed\n");
    
    return 0;
}