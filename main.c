#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdbool.h>
#include "userManage.h"
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

  //Track following.
  bool followArr[numUsers][numUsers];
  for(int i = 0; i< numUsers; i++){
    followArr[i][i] = true;
  }
  for(int i = 0 ; i < numUsers; i++){
    for(int j = 0 ; j < 25 ; j++){
      username[i][j] = '\0';
    }
  }
  while(!endOfTwt){
    int currentUser = counter % numUsers;
    printf("%c",username[currentUser][0]);
    if(username[currentUser][0] == '\0'){
      char name[25];
      scanf("%s",name);
      strcpy(username[currentUser],name);
    }
    printf("\nWelcome %s. Type /help for a list of commands.\n",username[currentUser]);
    counter++;
    endOfTwt = true;
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
