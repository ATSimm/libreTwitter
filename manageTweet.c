#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "hash.h"
#include "manageUser.h"
struct node{
    char time[35];
    int authorID;
    char authorName[25];
    char content[280];
    struct node *next;
};

struct node *start = NULL; //start of list

int counter = 0; //Count number of elements

void postTweet(int id, char *content, char *authorName){
    struct node *t; //temp node
    t = (struct node*)malloc(sizeof(struct node)); //define size
    long p = hash(); //time stamp
    strcpy(t->time,ctime(&p)); //conversion to readable timestamp
    t->authorID = id; //assign passed id to author value
    strcpy(t->content,content); //assign content to struct
    strcpy(t->authorName,authorName); //author name assignment
    counter++;//add item to count element added
    if (start == NULL) { //if first element
        start = t;
        start->next = NULL; //make next null to make space for start
        return;
    }
    t->next = start; //assign the pointer for next value to start
    start = t; //start is temp
}

void showFeed(struct user currentPoster, int numUsers){

    struct node *t ; //temp node
    t = start;
    if (t == NULL) { //if empty
        printf("No tweets.\n");
        return ;
    }

    int count = 0;
    while (t->next != NULL || count == 10) { //if empty or more than 10
        for(int i = 0; i < numUsers; i++){ //loop through all users
            if(currentPoster->following[i] == 1 && t->authorID == i){ //if following
                printf("%s ", t->time); //show tweet
                printf("%s ", t->authorName);
                printf("%s\n", t->content);
                count++;
            }
        }
        t = t->next; //next
    }
    if(count < 10){ //print last element
        for(int i = 0; i < numUsers; i++){
            if(currentPoster->following[i] == 1 && t->authorID == i){
                printf("%s ", t->time);
                printf("%s ", t->authorName);
                printf("%s\n", t->content);
            }
        }
    }
}
