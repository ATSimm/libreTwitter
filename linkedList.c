#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct listNode {
  char data[280];
  struct listNode *nextPtr;
};

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;

void insert(ListNodePtr *sPtr, char value[280]);
char delete (ListNodePtr *sPtr, char value[280]);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);

ListNodePtr startPtr = NULL;

void insert(ListNodePtr *sPtr, char value[280]) {
  ListNodePtr newPtr = malloc(sizeof(ListNode));
  if (newPtr != NULL) {
    newPtr->data = value;
    newPtr->nextPtr = NULL;

    ListNodePtr previousPtr = NULL;
    ListNodePtr currentPtr = *sPtr;

    while (currentPtr != NULL && value > currentPtr->data) {
      previousPtr = currentPtr;
      currentPtr = currentPtr->nextPtr;
    }

    if (previousPtr == NULL) {
      newPtr->nextPtr = *sPtr;
      *sPtr = newPtr;
    } else {
      previousPtr->nextPtr = newPtr;
      newPtr->nextPtr = currentPtr;
    }
  } else {
    printf("%s not inserted. No memory available.\n", value);
  }
}

char delete (ListNodePtr *sPtr, char value[280]) {
  if(strcmp(value,(*sPtr)->data)) == 0){
    ListNodePtr tempPtr = *sPtr;
    *sPtr = (*sPtr)->nextPtr;
    free(tempPtr);
    return value;
  }
  else {
    ListNodePtr previousPtr = *sPtr;
    ListNodePtr currentPtr = (*sPtr)->nextPtr;

    while (currentPtr != NULL && currentPtr->data != value) {
      previousPtr = currentPtr;
      currentPtr = currentPtr->nextPtr;
    }

    if (currentPtr != NULL) {
      ListNodePtr tempPtr = currentPtr;
      previousPtr->nextPtr = currentPtr->nextPtr;
      return value;
    }
  }

  return '\0';
}

int isEmpty(ListNodePtr sPtr) { return sPtr == NULL; }

void printList(ListNodePtr currentPtr) {

  if (currentPtr == NULL) {
    printf("List is empty.\n\n");
  } else {
    printf("The list is:\n");

    while (currentPtr != NULL) {
      printf("%s --> ", currentPtr->data);
      currentPtr = currentPtr->nextPtr;
    }

    printf("NULL\n\n");
  }
}
