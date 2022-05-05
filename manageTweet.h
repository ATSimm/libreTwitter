#ifndef LIBRETWITTER_MANAGETWEET_H
#define LIBRETWITTER_MANAGETWEET_H
#endif //LIBRETWITTER_MANAGETWEET_H
#define MAX_USERS 100

typedef struct tweet{
  long id;
  int author;
  char content[280];
}tweet;
typedef struct user{
  char username[25];
  int following[MAX_USERS];
}user;

void postTweet(int id, char *content, char *authorName);
void showFeed(struct user currentPoster, int numUsers);
