#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int getNumUsers(){
    int numUsers;
    printf("How many users would you like to have?\n");
    scanf("%d",&numUsers);
    return numUsers;
}

void generateUsername(){
    FILE *textfile;
    char line[50];
    textfile = fopen("usernames.txt","r");
    if(textfile == NULL)
      perror("FNF error");
    int num = 34658; //Make this random.
    int count = 0;
    while(fgets(line, 50, textfile)){
      if(count == num){
        printf("%s",line); //make this return a string
        break;
      }
      else{
        count++;
      }
    }
    fclose(textfile);
}
