#include <iostream>
#include <stdio.h>

int main()
{
    char cdkey[10];
    printf("****************************\n");
    printf("*****Anti-Piracy Kit v1*****\n");
    printf("****************************\n");
    printf("Welcome to CTF Exercise 1!\n");
    printf("What is the cd-key?\n");

    scanf("%s", cdkey);
    printf("You entered %s.\n", cdkey);

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
    main();
}
