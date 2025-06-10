#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, r, c;
    
	printf("Enter a size: ");
	scanf("%d", &size);
	
	if (size > 20) printf("Matrix is too big.");
	
	int **prtab = (int **) malloc(size * sizeof(int*));
	
	for (r = 0; r < size; r++) {
	    prtab[r] = (int *) malloc(size * sizeof(int));
	    for (c = 0; c < size; c++) {
	        prtab[r][c] = (r + 1)*(c + 1);
            // OR *(*(prtab + r) + c) = (r + 1)*(c + 1);
	    }
	}
	
	printf("%d", prtab[11][10]);
	
	return 0;
}