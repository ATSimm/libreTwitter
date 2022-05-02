#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "structures.c"
#include "hash.c"

void postTweet(int user, char *content){
    struct tweet post;
    post.id = hash();
    post.author = user;
    post.content = content;
    //implement a new linked list push for the tweet
}
