#define MAX_USERS 100

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include "hash.c"

int numUsers;
typedef struct user{
  char username[25];
  int following[MAX_USERS];
}user;
int getNumUsers();
user nameUser[50];
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

void showFeed(int currentUser, int numUsers){

    struct node *t ; //temp node
    t = start;
    if (t == NULL) { //if empty
        printf("No tweets.\n");
        return ;
    }

    int count = 0;
    while (t->next != NULL || count == 10) { //if empty or more than 10
        for(int i = 0; i < numUsers; i++){ //loop through all users
            if(nameUser[currentUser].following[i] == 1 && t->authorID == i){ //if following
                printf("%s ", t->time); //show tweet
                printf("%s Said:\n ", t->authorName);
                printf("%s\n", t->content);
                count++;
            }
        }
        t = t->next; //next
    }
    if(count < 10){ //print last element
        for(int i = 0; i < numUsers; i++){
            if(nameUser[currentUser].following[i] == 1 && t->authorID == i){ //if following
                printf("%s ", t->time);
                printf("%s Said:\n ", t->authorName);
                printf("%s\n", t->content);
            }
        }
    }
}


int getNumUsers(){
    int numUsers;
    printf("How many users would you like to have?\n");
    scanf("%d",&numUsers);//scan num users
    return numUsers; //return
}

int main(){
  printf("████████╗██╗    ██╗███████╗███████╗████████╗███████╗██████╗ \n");
  printf("╚══██╔══╝██║    ██║██╔════╝██╔════╝╚══██╔══╝██╔════╝██╔══██╗ \n");
  printf("   ██║   ██║ █╗ ██║█████╗  █████╗     ██║   █████╗  ██████╔╝ \n");
  printf("   ██║   ██║███╗██║██╔══╝  ██╔══╝     ██║   ██╔══╝  ██╔══██╗ \n");
  printf("   ██║   ╚███╔███╔╝███████╗███████╗   ██║   ███████╗██║  ██║ \n");
  printf("   ╚═╝    ╚══╝╚══╝ ╚══════╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝ \n");


  printf("\nBy Aiden Simmons and Rohan Bhattacharya\n\n\n\nPress enter to continue.\n");
  char pl;
  scanf("%c",&pl);

  numUsers = getNumUsers();



  bool endOfTwt = false;
  int counter = 0;
  for(int i = 0; i < numUsers; i++){
    strcpy(nameUser[i].username,"");
  }
  while(!endOfTwt){
    bool endTurnEvent = false;
    int currentUser = counter % numUsers;
    if(strcmp(nameUser[currentUser].username,"")==0){
      char name[25];
      printf("It appears you do not have a username! Please enter a username.\n");
      scanf("%s",name);
      strcpy(nameUser[currentUser].username,name);
    }
    printf("\nWelcome %s. Type /help for a list of commands.\n",nameUser[currentUser].username);

    while(!endTurnEvent){
      char input[25] = "0";
      scanf("%s",input);
      for(int i = 0; input[i]; i++){
          input[i] = tolower(input[i]);
      }
      if(strcmp(input,"/help") == 0){
          printf("\t\t/help - Displays a list of commands.\n");
          printf("\t\t/follow - Follow a user and see their tweets in your feed.\n");
          printf("\t\t/unfollow - Unollow a user to remover their tweets from your feed.\n");
          printf("\t\t/showFollowing - Shows who you are following.\n");
          printf("\t\t/tweet - Tweet to your feed.\n");
          printf("\t\t/viewFeed - View your feed.\n");
          printf("\t\t/delete - Delete your account.\n");
          printf("\t\t/endTurn - Ends your turn.\n");
          printf("\t\t/endTwitter - End application.\n");
      }
      else if(strcmp(input,"/follow") == 0){
        printf("Enter the number of the user you would like to follow.\n");
        int checker = 0;
        for(int i = 0; i < numUsers; i++){ //loop till end of list
        if(nameUser[i].username[0] != '\0' && i != currentUser){ //if not empty and not current user
            printf("(%d) %s\n",i,nameUser[i].username); //print available user
            checker = 1;//user was found
            }
        }
        if(checker == 0){ //if user not found
            printf("No users to follow.\n");
        }

        else{
            int followAdd;
            scanf("%d",&followAdd);//scan index
            nameUser[currentUser].following[followAdd] = 1;//follow user
            printf("You are now following %s\n",nameUser[followAdd]);
        }
      }

      else if(strcmp(input,"/unfollow") == 0){
        printf("Enter the number of the user you would like to unfollow.\n");
        int checker = 0;
        for(int i = 0; i < numUsers; i++){ //loop till end of list
            if(nameUser[i].username[0] != '\0' && i != currentUser){ //if not empty and not current user
                printf("(%d) %s\n",i,nameUser[i].username); //print available user
                checker = 1;//user was found
            }
        }
        if(checker == 0){ //if user not found
            printf("No users to unfollow.\n");
        }

        else{
            int followAdd;
            scanf("%d",&followAdd);//scan index
            nameUser[currentUser].following[followAdd] = 0;//unfollow user
            printf("You are no longer following %s\n",nameUser[followAdd]);
        }
      }

      else if(strcmp(input,"/tweet") == 0){
          char sendTo[280];
          fflush(stdin);
          fgets(sendTo,280,stdin);
          postTweet(currentUser, sendTo, nameUser[currentUser].username);
          printf("Just sent your tweet:\n%s",sendTo);
      }
      else if(strcmp(input,"/showfollowing") == 0){
        int checker = 0;
          for(int i = 0; i < numUsers; i++){
            if(nameUser[currentUser].following[i] == 1 && i != currentUser){
              printf("%s\n",nameUser[i].username);
              checker = 1;
            }
          }
          if(checker == 0){
            printf("You are not following anyone!\n");
          }
      }
      else if(strcmp(input,"/delete") == 0){
          printf("");
      }
      else if(strcmp(input,"/endturn") == 0){
          counter++;
          endTurnEvent = true;
      }
      else if(strcmp(input,"/viewfeed") == 0){
        showFeed(currentUser, numUsers);
      }
      else if(strcmp(input,"/endtwitter") == 0){
        endOfTwt = true;
      }
    }
  }
}
