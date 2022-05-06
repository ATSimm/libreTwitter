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
    scanf("%d",&numUsers);//scan num users
    return numUsers; //return
}

void follow(struct user nameUser, int numUsers, int currentUser){
    printf("Enter the number of the user you would like to follow.\n");
    int checker = 0;
    for(int i = 0; i < numUsers; i++){ //loop till end of list
        if(nameUser[i].username[0] != '\0' && i != currentUser){ //if not empty and not current user
            printf("(%d) %s\n",i,nameUser[i].username); //print available user
            checker = 1;//user was found
        }
    }
    if(checker == 0){ //if user not found
        printf("No users to follow.\n");
    }

    else{
        int followAdd;
        scanf("%d",&followAdd);//scan index
        nameUser[currentUser].following[followAdd] = 1;//follow user
    }
}

void unfollow(struct user nameUser, int numUsers, int currentUser){
    printf("Enter the number of the user you would like to unfollow.\n");
    int checker = 0;
    for(int i = 0; i < numUsers; i++){ //loop till end of list
        if(nameUser[i].username[0] != '\0' && i != currentUser){ //if not empty and not current user
            printf("(%d) %s\n",i,nameUser[i].username); //print available user
            checker = 1;//user was found
        }
    }
    if(checker == 0){ //if user not found
        printf("No users to unfollow.\n");
    }

    else{
        int followAdd;
        scanf("%d",&followAdd);//scan index
        nameUser[currentUser].following[followAdd] = 0;//unfollow user
    }
}
