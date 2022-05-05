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
    char *username[25];
    char line[50];
    char ch;
    textfile = fopen("usernames.txt","r");
    if(textfile == NULL)
      perror("FNF error");
      srand(time(NULL));
    int num = rand() % 86649; //Make this random.
    int count = 0;
    while(fgets(line, 50, textfile)){
        break;
      if(count == num){
        printf("%s\n",line);

        int i = 0;

        while (ch = fgetc(textfile) != E0F){
            username[i] = ch;
            i++;
        }

        break;
      }
      else{
        count++;
      }
    }
    fclose(textfile);
    return "";
}
