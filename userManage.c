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

char * generateUsername(){
    FILE *textfile;
    char line[50];
    textfile = fopen("usernames.txt","r");
    if(textfile == NULL)
      perror("FNF error");
      srand(time(NULL));
    int num = rand() % 86649; //Make this random.
    int count = 0;
    while(fgets(line, 50, textfile)){
      if(count == num){
        char *rtnPtr = malloc(sizeof(line));
        printf("%s\n",line);
        return rtnPtr;
        break;
      }
      else{
        count++;
      }
    }
    fclose(textfile);
    return "";
}
