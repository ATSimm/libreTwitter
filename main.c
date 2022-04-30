#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "userManage.c"
struct tweet{
  int id;
  char author[25];
  char content[280];
};
struct user{
  char username[25];
  int followers;
  int following;
};
int numUsers;

int main(){
  system("clear");
  printf("████████╗██╗    ██╗███████╗███████╗████████╗███████╗██████╗ \n");
  printf("╚══██╔══╝██║    ██║██╔════╝██╔════╝╚══██╔══╝██╔════╝██╔══██╗ \n");
  printf("   ██║   ██║ █╗ ██║█████╗  █████╗     ██║   █████╗  ██████╔╝ \n");
  printf("   ██║   ██║███╗██║██╔══╝  ██╔══╝     ██║   ██╔══╝  ██╔══██╗ \n");
  printf("   ██║   ╚███╔███╔╝███████╗███████╗   ██║   ███████╗██║  ██║ \n");
  printf("   ╚═╝    ╚══╝╚══╝ ╚══════╝╚══════╝   ╚═╝   ╚══════╝╚═╝  ╚═╝ \n");

  printf("\nBy Aiden Simmons and Rohan Bhattacharya\n\n\n\nPress enter to continue.\n");
  char pl;
  scanf("%c",&pl);
  system("clear");
  numUsers = getNumUsers();
  char username[numUsers][25];
  bool endOfTwt = false;
  int counter = 0;
  while(!endOfTwt){
    int currentUser = counter % numUsers;
    if(strcmp(strcpy(username[currentUser],NULL) == 0){
      strcpy(username[currentUser],generateUsername());
    }
    printf("\nWelcome %s. Type /help for a list of commands",username[currentUser]);
    endOfTwt = true;
  }

  //if no users, prompt to create user
  //else welcome first user, type what u wanna do.

/*
=================================================
/follow "username"                              |
/unfollow "username"                            |
/post                                           |
/delete                                         |
    Display last 5 tweets with (1),(2),...      |
/feed                                           |
/endturn                                        |
/endtwitter                                     |
=================================================
*/

}
