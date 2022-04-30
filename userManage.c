#include <stdio.h>
#include <math.h>
#include <string.h>

int getNumUsers(){
    int numUsers;
    printf("How many users would you like to have?\n");
    scanf("%d",&numUsers);
    return numUsers;
}

char generateUsername(){
    file *fp;
    fp = fopen("usernames.txt", "r");
    char n;

    int randName;
    srand(time(0));
    randName = rand() % 86000; //length of usernames.txt

    if ( file != NULL )
{
    char line[86000];
    while (fgets(line, sizeof line, file) != NULL) /* read a line */
    {
        if (count == randName)
        {
            username = n;
        }
        else
        {
            count++;
        }
    }

    fclose(fp);
}