#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "hash.h"

struct node *start = NULL;

int counter = 0;

void postTweet(int id, char *content, char *authorName){
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));
    long p = hash();
    strcpy(t->time,ctime(&p));
    t->authorID = id;
    strcpy(t->content,content);
    strcpy(t->authorName,authorName);
    counter++;
    if (start == NULL) {
        start = t;
        start->next = NULL;
        return;
    }
    t->next = start;
    start = t;
}

void showFeed(struct user currentPoster, int numUsers){

    struct node *t ;
    t = start;
    if (t == NULL) {
        printf("No tweets.\n");
        return ;
    }

    int count = 0;
    while (t->next != NULL || count == 10) {
        for(int i = 0; i < numUsers; i++){
            if(currentPoster->following[i] && t->authorID == i){
                printf("%s ", t->time);
                printf("%s ", t->authorName);
                printf("%s\n", t->content);
                count++;
            }
        }
        t = t->next;
    }
    if(count < 10){
        for(int i = 0; i < numUsers; i++){
            if(currentPoster->following[i] && t->authorID == i){
                printf("%s ", t->time);
                printf("%s ", t->authorName);
                printf("%s\n", t->content);
            }
        }
    }
}
