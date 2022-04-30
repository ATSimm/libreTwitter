#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

FILE *fp;
int getNumUsers(){
    int numUsers;
    printf("How many users would you like to have?\n");
    scanf("%d",&numUsers);
    return numUsers;
}

void generateUsername(){
    fp = fopen("usernames.txt", "r");
    char n[25];

    int randName;
    srand(time(0));
    randName = rand() % 86648; //length of usernames.txt
    int count = 0;
    char username[25];
    char *ptr = username;
    if (fp != NULL )
{
    char line[86648];
    while (fgets(line, sizeof line, fp) != NULL) /* read a line */
    {
        if (count == randName){
            strcpy(username,n);
            return ptr;
        }
        else{
            count++;
        }
    }

    fclose(fp);
}
