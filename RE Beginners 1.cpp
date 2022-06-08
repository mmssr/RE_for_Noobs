#include <iostream>
#include <stdio.h>

int main()
{
    /* declare 10 character variable to store
    our string */
    char cdkey[10];
    
    /* yay banners */
    printf("****************************\n"); 
    printf("*****Anti-Piracy Kit v1*****\n");
    printf("****************************\n");
    printf("Welcome to CTF Exercise 1!\n");
    printf("What is the cd-key?\n");
    
    /* read for user input, repeat to user */
    scanf("%s", cdkey);
    printf("You entered %s.\n", cdkey);

    /* does this string match the key? if yes,
    thanks for buying. if no, reprompt */
    int result = strcmp(cdkey, "f1rst_pwn");
    if (result == 0) {
        printf("Thanks for buying!\nClose this window when ready.\n");
        char close[10];
        scanf("%s", close);
        if (close != NULL) {
            return 0;
        }
    }
    printf("Incorrect, try again!\n\n");
    main(); // restart since incorrect
}
