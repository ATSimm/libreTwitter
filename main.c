#include <stdio.h>
#include <stdlib.h>

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
int looper = 1;
char input[50] = "";

//Introduction to program
printf("Type /help for a list of commands.\n");

/*
infinite loop to keep users in program such that they are
able to input several commands in one instance of the program.
*/
    while(looper == 1)
    {

      scanf("%s", input); // User input

      if(strcmp(input,"/help") == 0) // Did user type /help?
      {
        printf("\n\t/help - Lists all commands.\n");
        printf("\t/rand - Generates lists of random numbers to use.\n");
        printf("\t/cost - Calculates the cost for a given number of games.\n");
        printf("\t/prizes - Outputs the list of prizes.\n\n");
      }

      else if(strcmp(input,"/rand") == 0) // Did user type /rand?
      {
        
      }

      else if(strcmp(input,"/cost") == 0) // Did user type /cost?
      {
        
      }

      else if(strcmp(input,"/prizes") == 0) // Did user type /prizes?
      {
       
      }
      else // Did user have a misinput?
      {
       
      }
    }
}
