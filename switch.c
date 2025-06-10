#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(void) {

    int i, j = 0;

    for (i = 0; i < 10; i += 2) 
        switch(i) {
            case 0: j++; printf("Case 0\n"); break;
            case 2: j++; printf("Case 2\n");
            case 4: j++; printf("Case 4\n"); break;
            default: j--; printf("Default\n");
        }

    printf("%d", j);

    return 0;
}