#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "userManage.c"
#include "structures.c"
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
  while(!endOfTwt){
    int currentUser = counter % numUsers;
    if(strcmp(username[currentUser],"") == 0){
      strcpy(username[currentUser],generateUsername());
    }
    printf("\nWelcome %s. Type /help for a list of commands",username[currentUser]);
    counter++;
    endOfTwt = true; //remove in the future
  }
}
