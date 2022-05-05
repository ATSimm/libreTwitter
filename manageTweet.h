#ifndef LIBRETWITTER_MANAGETWEET_H
#define LIBRETWITTER_MANAGETWEET_H
#include "structures.h"

void postTweet(int id, char *content, char *authorName);
void showFeed(struct user *currentPoster, int numUsers);


#endif //LIBRETWITTER_MANAGETWEET_H
