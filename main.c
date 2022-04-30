#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "openFile.c"
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


