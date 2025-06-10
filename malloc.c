#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size, i;
	
	printf("Enter a size: ");
	scanf("%d", &size);
	
	if (size >= (1024*1024)) {
	    printf("Too much memory requested.");
	}
	
	else {
	    char *characters = (char *) malloc(sizeof(size));
	
	    do {
	        if (size < 26) {
	            for (i = 0; i < size; i++) {
	                *(characters + i) = (char) (i + 65);
	            }
	        }
	    
	        else {
	            for (i = 0; i < 26; i++) {
	                *(characters + i) = (char) (i + 65);
	        }
	    }
	    
	    } while (i < 26);
	    
	    for (i = 26; i < size; i++) {
	        *(characters + i) = (char) *(characters - 26 + i);
	    }
	
	    for (i = 0; i < size; i++) {
	        if (i == 400) break;
	        printf("%c", *(characters + i));
	        if (( i != 0) && (i % 40 == 0)) printf("\n");
	    }
	    
	    free(characters);
	}
	
	return 0;
}