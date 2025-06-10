#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void) {

    int i, j;
    char string[100];
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int vowelCount = 0;


    printf("Enter a string: ");
    scanf("%s", string);
    
    char *pString = string;
    char *pVowels = vowels;

    for ( ; *pString != '\0'; pString++) {
        for (i = 0; i < ((int) sizeof(vowels)); i++) {
            if (*pString == *(pVowels + i)) vowelCount++;
        }
    }
    
    printf("%d", vowelCount);

    return 0;

}