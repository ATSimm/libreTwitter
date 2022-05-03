#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdbool.h>
#include "userManage.c"
#include "tweetManage.c"
#include "structures.c"
int numUsers;

int main(){

  printf("████████╗██╗    ██╗███████╗███████╗████████╗███████╗██████╗ \n");
  printf("╚══██╔══╝██║    ██║██╔════╝██╔════╝╚══██╔══╝██╔════╝██╔══██╗ \n");
  printf("   ██║   ██║ █╗ ██║█████╗  █████╗     ██║   █████╗  ██████╔╝ \n");
  printf("   ██║   ██║███╗██║██╔══╝  ██╔══╝     ██║   ██╔══╝  ██╔══██╗ \n");
  printf("   ██║   ╚███╔███╔╝███████╗███████╗   ██║   ███████╗██║  ██║ \n");
  printf("   ╚═╝    ╚══╝╚══╝ ╚══════╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝ \n");


  printf("Tweeter.\n\n\n");
  printf("\nBy Aiden Simmons and Rohan Bhattacharya\n\n\n\nPress enter to continue.\n");
  char pl;
  scanf("%c",&pl);

  numUsers = getNumUsers();
  char username[numUsers][25];
  bool endOfTwt = false;
  int counter = 0;

  //Track following.
  bool followArr[numUsers][numUsers];
  for(int i = 0; i< numUsers; i++){
    followArr[i][i] = true;
  }

  while(!endOfTwt){
    int currentUser = counter % numUsers;
    if(strcmp(username[currentUser],"") == 0){
      strcpy(username[currentUser],generateUsername());
    }
    printf("\nWelcome %s. Type /help for a list of commands",username[currentUser]);
    counter++;
    if(user wants to follow){
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
    }
  }
}
