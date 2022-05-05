#include "manageTweet.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "hash.h"
struct node{
    char time[35];
    int authorID;
    char authorName[25];
    char content[280];
    struct node *next;
};

struct node *start = NULL;

int counter = 0;

void insert(int id, char *content, char *authorName){
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

void traverse(bool **followArray, int currentUser, int numUsers){

    struct node *t ;
    t = start;
    if (t == NULL) {
        printf("Linked list is empty.\n") ;
        return ;
    }
    printf("There are %d elements in linked list.\n", counter) ;

    int counter = 0;
    while (t->next != NULL || counter == 10) {
        for(int i = 0; i < numUsers; i++){
            if(followArray[currentUser][i] && t->authorID == i){
                printf("%s ", t->time);
                printf("%s ", t->authorName);
                printf("%s\n", t->content);
                counter++;
            }
        }
        t = t->next;
    }
    if(counter < 10){
        for(int i = 0; i < numUsers; i++){
            if(followArray[currentUser][i] && t->authorID == i){
                printf("%s ", t->time);
                printf("%s ", t->authorName);
                printf("%s\n", t->content);
            }
        }
    }
}