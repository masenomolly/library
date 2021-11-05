
/*
users- view user
catalogue
insurance
serial
acquisition
navigation menu

*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu();
int main()
{
    int action;
    action=menu();
    exercute_action(action);

        return 0;
    }
void exercute_action(int action) {
printf("you selected action %d", action);
}
int menu()  //header/prototype
{
    int action;

    do {
        printf("tCounty Library\n");
        printf("Welcome Miss Beauty. \n");
        printf("What would you like to do?\n");
        printf("1. add new user\n");
        printf("2. add a book\n");
        printf("3. edict user\n");
        printf("4. delete user\n");
        printf("5. change password\n");
        printf("6. log out\n");
        printf("7. exit system\n");
        printf("selected action(1-7):");
        scanf("%d" ,&action);
        if (action < 1 || action >7){
            system("cls");

        printf("invalid action!!! try again \n");
        }
    } while (action < 1 || action >7);

    return action;
}
