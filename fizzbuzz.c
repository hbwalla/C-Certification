#include <stdio.h>
#include <string.h>

int main(void) {
    int num;
    char word[9];
    char *p = word;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 3) == 0) {
        strcpy(p, "fizz")
        p += 4;
    };
    if ((num % 5) == 0) {
        strcpy(p, "buzz");
    }
}