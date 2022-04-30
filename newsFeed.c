#include <stdio.h>
#include <stdlib.h>
#include "openFile.c"
//#include "linkedList.c"

void getNewsFeed(){
    openFile("tweets.csv");
    char line[280];
    int counter = 0;
    while (fgets(line, sizeof(line), fp) && counter <= 10){
        counter++;
        char *charPointer;
        charPointer = strtok(line, ",");
        while (charPointer != NULL){
            printf("%s", charPointer);
            charPointer = strtok(NULL, ",");
        }
        printf("\n");
    }
}

int main(){
  getNewsFeed();
}
