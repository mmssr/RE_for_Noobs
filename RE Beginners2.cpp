#include <iostream>
#include <stdio.h>

int main()
{
    /* declare 11 character variable to store
    our string */
    char cdkey[11];
    
    /* yay banners */
    printf("****************************\n");
    printf("*****Anti-Piracy Kit v2*****\n");
    printf("****************************\n");
    printf("Welcome to CTF Exercise 2!\n");
    printf("What is the cd-key?\n");

    /* read for user input, repeat to user */
    scanf("%s", cdkey);
    printf("You entered %s.\n", cdkey);

    /* does this reversed array match the key? if yes,
    thanks for buying. if no, reprompt */
    char correctkey[11] = { '3','2','1','d','r','o','w','s','s','a','p'};
    int result = strcmp(cdkey, _strrev(correctkey));
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
