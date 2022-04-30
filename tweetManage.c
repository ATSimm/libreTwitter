#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "linkedList.c"
#include "structures.c"
#include "hash.c"

void postTweet(){
    struct tweet post;
    post.id = hash();
    post.author = "";
    post.content = "";
}
