#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int id;
    int authorID;
    char content[280];
    struct node *next;
};

struct node *start = NULL;

void insertBegin(int x, char *y);
void insertEnd(int);
void traverse();
void deleteBegin();
void deleteEnd();

int counter = 0;

void insertBegin(int x, char *y){
    struct node *t;
    t = (struct node*)malloc(sizeof(struct node));
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
        printf("%s\n", t->authorID);
        printf("%s\n", t->content);
        t = t->next ;
    }
    printf("%s\n", t->content); // Print last node
}
