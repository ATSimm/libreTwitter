#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.c"
struct node{
    char time[35];
    int authorID; //make this literal string name
    char content[280];
    struct node *next;
};

struct node *start = NULL;

void insert(int x, char *y);
void traverse();

int counter = 0;

void insert(int x, char *y){
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));
    long p = hash();
    strcpy(t->time,ctime(&p));
    t->authorID = x;
    strcpy(t->content,y);
    counter++;
    if (start == NULL) {
        start = t;
        start->next = NULL;
        return;
    }
    t->next = start;
    start = t;
}

void traverse() {
    struct node *t ;
    t = start;
    if (t == NULL) {
        printf("Linked list is empty.\n") ;
        return ;
    }
    printf("There are %d elements in linked list.\n", counter) ;
    while (t->next != NULL) {
        printf("%s ", t->time);
        printf("%d ", t->authorID);
        printf("%s\n", t->content);
        t = t->next ;
    }
    printf("%s ", t->time);
    printf("%d ", t->authorID);
    printf("%s\n", t->content); // Print last node
}
