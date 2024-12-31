#include <stdio.h>
#include <string.h>
#include "../include/user.h"

#define RUN 1
#define TERMINATE 0
#define VALID 1
#define INVALID 0


void menu(){
    printf("1. Login\n");
    printf("2. Sign Up\n");
    printf("3. Exit\n");
    printf("Enter your choice (1, 2, or 3): ");
}

int main(void){
    int choice;
    char username[50];
    char password[50];

    do{
        menu();
        scanf("%d", &choice);
        getchar(); // To consume the newline character left by scanf

        switch(choice){
            case 1:
                printf("Enter your username: ");
                scanf("%[^\n]", username);
                getchar(); 
                printf("Enter your password: ");
                scanf("%[^\n]", password);
                getchar(); 

                if(login(username, password) == VALID){
                    printf("Login successful\n");
                } else {
                    printf("Login failed\n");

                }
                break;

            case 2:
                printf("Enter your username: ");
                scanf("%[^\n]s", username);
                getchar(); 
                printf("Enter your password: ");
                scanf("%[^\n]s", password);
                getchar(); 

                if(signUp(username, password) == VALID){
                    printf("Sign up successful\n");
                } else {
                    printf("Sign up failed\n");
                }
                break;

            case 3:
                printf("Exiting the program. Au revoir!\n");
                return 0;
        }
    } while(RUN);
}
