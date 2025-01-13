#ifndef USER_H
#define USER_H

typedef struct user{
    char username[50];
    char password[50];
} user_t;

int login(char username[], char password[]);
int signUp(char username[], char password[]);
int validateUsername(char username[]);
int validatePassword(char password[]);

#endif // USER_H