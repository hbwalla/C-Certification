#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void) {

    char forwards[20];
    char *p = forwards;
    int *end;

    printf("Enter a word: ");
    scanf("%s", forwards);

    while (*p != '\0') {
        p++;
        len++
    }

    end = p - 1

    while (end >= forwards) {
        printf("%c", *end);
        end--;
    }

    return 0;
}