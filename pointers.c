#include<stdio.h>

int main(void) {
    int i;
	float numbers[10] = {3.3, 4.4, 5.2, 2.3, 4.5, 6.8, 9.8, 8.2, 7.5, 9.2};
	float biggerNumbers[10];
    // *source is the actual value at [9]; source is the address of the value.
	float *source = &numbers[9];
    // Referencing biggerNumbers like this means that "copy" points to the first index of the array
	float *copy = biggerNumbers;
	for (i = 0; i < 10; i++)
	{
        // need to work up from index 0 of numbers
        // need to work down from index 9 of biggerNumbers
	    *(copy + i) = *(source - i);
	}
	
	float *biggerEnd = &biggerNumbers[9];
	float *biggerStart = biggerNumbers;
	float *middle1 = biggerStart + 4;
	float *middle2 = biggerStart + 5;
	for ( ; middle1 >= biggerStart ; middle1--, middle2++)
	{
		printf("%.1f\n", *middle2);
		printf("%.1f\n", *middle1);
	}

    return 0;
}