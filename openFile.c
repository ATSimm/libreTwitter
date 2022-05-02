#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *fp;
void openFile(char fileName[50]){

    fp = fopen(fileName, "r");

    if (fp == NULL){
        perror ("Unable to open file.");
        exit(1);
    }
}

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

