#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int PrivateUse(void);
bool ValidatePassword(void);
int main(void){
    bool PWcorrect;

        puts("Enter the password: ");
        PWcorrect = ValidatePassword();
        if(!PWcorrect){
            puts("Password incorrect, try again.");
            return -1;
        }
        else
            puts("Password correct. Welcome.");
        return 0;
}

bool ValidatePassword(void) {
    char Password[20];

    gets(Password);
    if (!strcmp(Password, "RightPass"))
        return(true);
    else return(false);
}