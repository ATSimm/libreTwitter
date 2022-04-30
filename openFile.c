#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void openFile(){
    FILE *fp = fopen("tweets.csv", "r");

    if (fp == NULL){
        perror ("No Tweets. Unable to open file.");
        exit(1);
    }

    char line[240];

    while (fgets(line, sizeof(line), fp)){
        char *tweets;
        
        tweets = strtok(line, ",");

        while (tweets != NULL){
            printf("%s", tweets);
            tweets = strtok(NULL, ",");
        }
        printf("\n");
    } 
}
