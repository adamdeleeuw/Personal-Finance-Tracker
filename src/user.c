#include "../include/user.h"
#include <stdio.h>
#include <string.h>
#define USER_FILE "../data/users.txt"

// logs existing users in
int login(char username[], char password[]){
    FILE *userFile = fopen(USER_FILE, "r");
    if(userFile == NULL){
        printf("Error opening file\n");
        return 0;
    }

    char file_username[50];
    char file_password[50];

    while(fscanf(userFile,"%s %s", file_username, file_password) == 2){
        if(strcmp(username, file_username) == 0 && strcmp(password, file_password) == 0){
            fclose(userFile);
            return 1;
        }
    }

    fclose(userFile);
    return 0;
}

int signUp(char username[], char password[]){
    
    // Check if username already exists
    FILE *userFile = fopen(USER_FILE, "r");
    if(userFile == NULL){
        printf("Error opening file\n");
        return 0;
    }
    

    //check if username already exists
    char file_username[50];
    char file_password[50];

    while(fscanf(userFile, "%s %s", file_username, file_password) == 2){
        if(strcmp(username, file_username) == 0){
            fclose(userFile);
            return 0;
        }
    }

    // Validate username and password
    if (!validateUsername(username) || !validatePassword(password)) {
        return 0;  // Validation failed
    }

    //add user to file
    userFile = fopen(USER_FILE, "a"); // opens the file again and appends the new username and password

    if(userFile == NULL){
        printf("Error opening file\n");
        return 0;
    }
    fprintf(userFile, "%s %s\n", username, password);
    fclose(userFile);

    return 1;  // Signup successful 
}

// validates the username the new user wants to use
int validateUsername(char username[]){
    // Username must be 3-50 characters
    // Only letters, numbers, and underscores allowed
    int length = strlen(username);
    if (length < 3 || length >= 50) {
        return 0;
    }

    // the ! checks to see if the character is NOT a letter, number, or underscore
    for (int i = 0; i < length; i++) {                      
        if (!((username[i] >= 'a' && username[i] <= 'z') ||
              (username[i] >= 'A' && username[i] <= 'Z') ||
              (username[i] >= '0' && username[i] <= '9') ||
              username[i] == '_')) {
            return 0;
        }
    }
    
    return 1;
}

// validates the password the new user wants to use
int validatePassword(char password[]){
    // password must be at least 6 characters long
    // password must contain at least one number
    // password must contain at least one special character

    if(strlen(password) < 8){
        return 0;
    }

    int numCheck = 0;
    for(size_t i = 0; i < strlen(password); i++){
        if(password[i] >= '0' && password[i] <= '9'){
            numCheck = 1;
            break;
        }
    }


    int symbolCheck = 0;
    char symbols[] = "!@#$%^&*()-_=+\\|/[];:{}\":;<>,./?`~";

    for(size_t j = 0; j < strlen(password); j++){
        if(strchr(symbols, password[j]) != NULL) {
            symbolCheck = 1;
            break;
        }
    }

    if(numCheck == 1 && symbolCheck == 1){
        return 1;
    }
    else{
        return 0;
    }
}
