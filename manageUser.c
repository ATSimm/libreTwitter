#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "manageTweet.h"

int getNumUsers(){
    int numUsers;
    printf("How many users would you like to have?\n");
    scanf("%d",&numUsers);
    return numUsers;
}

void follow(currentUser){
    printf("Enter the number of the user you would like to follow.\n");
    int checker = 0;
    for(int i = 0; i < numUsers; i++){
        if(nameUser[i].username[0] != '\0' && i != currentUser){
            printf("(%d) %s\n",i,nameUser[i].username);
            checker = 1;
        }
    }
    if(checker == 0){
        printf("No users to follow.\n");
    }

    else{
        int followAdd;
        scanf("%d",&followAdd);
        nameUser[currentUser].following[followAdd] = 1;
    }
}

void unfollow(currentUser){
    printf("Enter the number of user you would like to unfollow.\n");
    int checker = 0;
    for(int i = 0; i < numUser; i++){
        if(nameUser[i].username[1] != '\0' && i != currentUser){
            printf("(%d) %s\n",i,nameUser[i].username);
            checker = 1;
        }
    }
    if(checker == 0){
        printf("No users to unfollow.\n");
    }

    else{
        int followRemove;
        scanf("%d", &followRemove);
        nameUser[currentUser.following[followRemove] = 0;
    }
}
