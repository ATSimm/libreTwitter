#ifndef LIBRETWITTER_MANAGEUSER_H
#define LIBRETWITTER_MANAGEUSER_H
#define MAX_USERS 100
typedef struct user{
  char username[25];
  int following[MAX_USERS];
}user;
int getNumUsers();
#endif //LIBRETWITTER_MANAGEUSER_H
