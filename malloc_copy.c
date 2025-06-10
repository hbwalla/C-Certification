#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void) {

    int i;
    char word[100];

    printf("Enter a string: ");
    scanf("%s", word);

    char *pWord = word;

    char *pNewWord = (char *) malloc(strlen(word));

    for (i = 0; *(pWord + i) != '\0'; i++) {
        *(pNewWord + i) = *(pWord + i);
    }
    
    for (i = 0; *(pNewWord + i) != '\0'; i++) printf("%c", *(pNewWord + i));

    free(pNewWord);


    return 0;
}