#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Welcome to MIT";
    char word[] = "MIT";

    if(strstr(str, word) != NULL)
        printf("Word found");
    else
        printf("Word not found");

    return 0;
}
