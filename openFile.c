#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void openFile(char fileName[50]){
    
    FILE *fp = fopen(fileName, "r");

    if (fp == NULL){
        perror ("Unable to open file.");
        exit(1);
    }

    char line[280];

    while (fgets(line, sizeof(line), fp)){
        char *charPointer;
        
        charPointer = strtok(line, ",");

        while (charPointer != NULL){
            printf("%s", charPointer);
            charPointer = strtok(NULL, ",");
        }
        printf("\n");
    } 
}
