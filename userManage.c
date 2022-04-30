#include <stdio.h>
#include <stdlib.h>

int getNumUsers(){
    int numUsers;
    printf("How many users would you like to have?");
    scanf("%d",&numUsers);
    return numUsers;
}/*
/*
int main(){

    int looper = 1;
    char input[50] = "";
    char currentUser[25] = "rohan";
//currentUser = usernames.txt fetch -> struct username

//Introduction to program
printf("Welcome %s.Type /help for a list of commands.\n",currentUser);

/*
infinite loop to keep users in program such that they are
able to input several commands in one instance of the program.

    while(looper == 1)
    {

      scanf("%s", input); // User input

      if(strcmp(input,"/help") == 0) // Did user type /help?
      {
        printf("\n\t/help - Lists all commands.\n");
        printf("\t/follow username - Follows the username provided.\n");
        printf("\t/unfollow username - Unfollows the username provided.\n");
        printf("\t/post - Allows you to post a tweet.\n");
        printf("\t/delete - Allows you to delete a tweet.\n");
        printf("\t/feed - View your feed.\n");
        printf("\t/endTurn - View your feed.\n");
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
*/
