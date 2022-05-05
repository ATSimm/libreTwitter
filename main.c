#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "manageUser.h"
#include "manageUser.c"
//#include "tweetManage.c"
#include "structures.h"
int numUsers;

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
  char username[numUsers][25];
  bool endOfTwt = false;
  int counter = 0;
  int followingArr[numUsers][numUsers];
  for(int i = 0; i < numUsers; i++){
      followingArr[i][i] = 1;
  }

  for(int i = 0 ; i < numUsers; i++){
    for(int j = 0 ; j < 25 ; j++){
      username[i][j] = '\0';
    }
  }
  while(!endOfTwt){
    bool endTurnEvent = false;
    int currentUser = counter % numUsers;
    if(username[currentUser][0] == '\0'){
      char name[25];
      printf("It appears you do not have a username! Please enter a username.\n");
      scanf("%s",name);
      strcpy(username[currentUser],name);
    }
    printf("\nWelcome %s. Type /help for a list of commands.\n",username[currentUser]);

    while(!endTurnEvent){
      char input[25] = "0";
      scanf("%s",input);
      for(int i = 0; input[i]; i++){
          input[i] = tolower(input[i]);
      }
      if(strcmp(input,"/help") == 0){
          printf("\t\t/help - Displays a list of commands.\n");
          printf("\t\t/follow - Follow a user and see their tweets in your feed.\n");
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
          for(int i = 0; i < numUsers ; i++){
            if(username[i][0] != '\0' && i != currentUser){
              printf("(%d) %s\n",i,username[i]);
              checker = 1;
            }
          }
          if(checker == 0){
            printf("No users to follow.\n");
          }else{
            int followAdd;
            scanf("%d",&followAdd);
            followingArr[currentUser][followAdd] = 1;
          }
      }
      else if(strcmp(input,"/tweet") == 0){
          printf("");
      }
      else if(strcmp(input,"/showfollowing") == 0){
          for(int i = 0; i < numUsers; i++){
            if(followingArr[currentUser][i] == 1 && i != currentUser){
              printf("%s\n",username[i]);
            }
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
          printf("");
      }
      else if(strcmp(input,"/endtwitter") == 0){
          printf("");
      }
    }


   /*  if(user wants to follow){
      //print type the number of the user you want to follow
      for(int i = 0; i< numUsers; i++){
        if(strcmp(username[i],"") == 0){continue;}
        else{printf("(%d)%s\n",i,username[i]);}
      }
      //scan their input
      int input;
      followArr[currentUser][input] = true; //copy this but false for unfollow
    }
    if(user wants to tweet){
      char content[280] = "their content";
      insert(currentUser, content, username[currentUser]);
      printf("DONE");
    }
    if(user wants to delete){
      followArr[currentUser][currentUser] = false;
    } */
  }
}
