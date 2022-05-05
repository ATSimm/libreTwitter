struct tweet{
  long id;
  int author;
  char content[280];
};
struct user{
  char username[25];
  int following[100];
};